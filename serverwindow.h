#ifndef SERVERWINDOW_H
#define SERVERWINDOW_H

#include <QMainWindow>
#include <QTcpServer>
#include <QTcpSocket>
#include <QThread>
#include <QMutex>
#include <QList>

QT_BEGIN_NAMESPACE
namespace Ui { class ServerWindow; }
QT_END_NAMESPACE

class ServerThread : public QThread {
    Q_OBJECT

public:
    ServerThread(QObject *parent = nullptr);
    ~ServerThread();

    void run() override;

private slots:
    void broadcastMessage(const QString &message, QTcpSocket *sender); // 声明为私有槽函数

signals:
    void logMessage(const QString &message);
    void userLoggedIn(const QString &nickname, const QHostAddress &address);
    void messageReceived(const QString &nickname, const QString &message);
    void updateUserList(const QStringList &users);

private:
    QTcpServer *server;
    QList<QTcpSocket*> clients; // 存储所有连接的客户端
    QList<QString> onlineUsers; // 存储在线用户的昵称
};

class ServerWindow : public QMainWindow {
    Q_OBJECT

public:
    ServerWindow(QWidget *parent = nullptr);
    ~ServerWindow();

private slots:
    void on_startServerButton_clicked();
    void on_stopServerButton_clicked();
    void appendLog(const QString &message);
    void displayUserLogin(const QString &nickname, const QHostAddress &address);
    void displayMessageReceived(const QString &nickname, const QString &message);

private:
    Ui::ServerWindow *ui;
    ServerThread *serverThread;
    bool isServerRunning;
    QMutex mutex;
};

#endif // SERVERWINDOW_H




