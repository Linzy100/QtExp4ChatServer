#include "serverwindow.h"
#include "ui_serverwindow.h"

ServerThread::ServerThread(QObject *parent) :
    QThread(parent),
    server(nullptr) {

}

ServerThread::~ServerThread() {
    if (server) {
        server->close();
        delete server;
    }
    // 清理所有客户端连接
    qDeleteAll(clients);
}

void ServerThread::run() {
    server = new QTcpServer(this);
    if (!server->listen(QHostAddress::Any, 1234)) {
        emit logMessage("服务器启动失败: " + server->errorString());
        return;
    }
    emit logMessage("服务器已启动，正在监听端口 1234");

    while (!isInterruptionRequested()) {
        QCoreApplication::processEvents(QEventLoop::AllEvents, 100);

        if (server->hasPendingConnections()) {
            QTcpSocket *clientSocket = server->nextPendingConnection();
            if (clientSocket) {
                // 添加新连接到clients列表
                clients.append(clientSocket);
                qDebug() << "new client connected " << clientSocket->peerAddress().toString() << clientSocket->peerPort();
                connect(clientSocket, &QTcpSocket::readyRead, this, [this, clientSocket]() {
                    QByteArray data = clientSocket->readAll();
                    QString message = QString::fromUtf8(data);
                    // 假设消息格式为 "昵称: msg"
                    if(message.contains("LOGIN:")){
                        QStringList parts = message.split(":");
                        QString nickname;
                        if (parts.size() == 2)
                            nickname = parts[1].trimmed();
                        if (!onlineUsers.contains(nickname)) {
                            onlineUsers.append(nickname);
                        }
                        QString userListMessage = "UPDATE_USERS:" + onlineUsers.join(",");
                        broadcastMessage(userListMessage, nullptr); // 广播给所有客户端
                    }
                    else if(message.contains("EXIT:")){
                        QStringList parts = message.split(":");
                        QString nickname;
                        if (parts.size() == 2)
                            nickname = parts[1].trimmed();
                        if (onlineUsers.contains(nickname)) {
                            onlineUsers.removeOne(nickname);
                        }
                        QString userListMessage = "UPDATE_USERS:" + onlineUsers.join(",");
                        broadcastMessage(userListMessage, nullptr); // 广播给所有客户端
                    }
                    else if (message.contains(":")) {
                        QStringList parts = message.split(":");
                        if (parts.size() == 2) {
                            QString nickname = parts[0].trimmed();
                            QString msg = parts[1].trimmed();
                            emit messageReceived(nickname, msg);
                            // 广播消息给所有其他客户端
                            broadcastMessage(message, clientSocket);
                            emit logMessage(message + "   消息已广播!");
                        }
                    }
                });
            }
        }
    }
    emit logMessage("服务器线程已停止");
}

void ServerThread::broadcastMessage(const QString &message, QTcpSocket *sender) {
    qDebug() << "broadcastMessage" << clients.size();
    for (QTcpSocket *client : qAsConst(clients)) {
        if (client != sender) { // 不发送给消息的发送者
            client->write(message.toUtf8());
            client->flush();
        }
    }
}

// ServerWindow类的实现
ServerWindow::ServerWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ServerWindow)
    , serverThread(nullptr)
    , isServerRunning(false)
{
    ui->setupUi(this);
    connect(ui->startServerButton, &QPushButton::clicked, this, &ServerWindow::on_startServerButton_clicked);
    connect(ui->stopServerButton, &QPushButton::clicked, this, &ServerWindow::on_stopServerButton_clicked);
}

ServerWindow::~ServerWindow() {
    if (serverThread && serverThread->isRunning()) {
        serverThread->quit();
        serverThread->wait();
    }
    delete ui;
}

void ServerWindow::on_startServerButton_clicked() {
    if (!isServerRunning) {
        serverThread = new ServerThread(this);
        connect(serverThread, &ServerThread::logMessage, this, &ServerWindow::appendLog);
        connect(serverThread, &ServerThread::userLoggedIn, this, &ServerWindow::displayUserLogin);
        connect(serverThread, &ServerThread::messageReceived, this, &ServerWindow::displayMessageReceived);
        serverThread->start();
        isServerRunning = true;
    }
}

void ServerWindow::on_stopServerButton_clicked() {
    if (isServerRunning) {
        serverThread->requestInterruption();
        if (!serverThread->wait(5000)) {
            serverThread->terminate();
            serverThread->wait();
        }
        delete serverThread;
        serverThread = nullptr;
        isServerRunning = false;
        appendLog("服务器已停止");
    }
}

void ServerWindow::appendLog(const QString &message) {
    ui->logTextEdit->append(message);
}

void ServerWindow::displayUserLogin(const QString &nickname, const QHostAddress &address) {
    QString logMessage = QString("用户 %1 从 %2 上线").arg(nickname).arg(address.toString());
    appendLog(logMessage);
}

void ServerWindow::displayMessageReceived(const QString &nickname, const QString &message) {
    QString logMessage = QString("%1: %2").arg(nickname).arg(message);
    appendLog(logMessage);
}







