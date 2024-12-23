/****************************************************************************
** Meta object code from reading C++ file 'serverwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../serverwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'serverwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ServerThread_t {
    QByteArrayData data[14];
    char stringdata0[149];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ServerThread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ServerThread_t qt_meta_stringdata_ServerThread = {
    {
QT_MOC_LITERAL(0, 0, 12), // "ServerThread"
QT_MOC_LITERAL(1, 13, 10), // "logMessage"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 7), // "message"
QT_MOC_LITERAL(4, 33, 12), // "userLoggedIn"
QT_MOC_LITERAL(5, 46, 8), // "nickname"
QT_MOC_LITERAL(6, 55, 12), // "QHostAddress"
QT_MOC_LITERAL(7, 68, 7), // "address"
QT_MOC_LITERAL(8, 76, 15), // "messageReceived"
QT_MOC_LITERAL(9, 92, 14), // "updateUserList"
QT_MOC_LITERAL(10, 107, 5), // "users"
QT_MOC_LITERAL(11, 113, 16), // "broadcastMessage"
QT_MOC_LITERAL(12, 130, 11), // "QTcpSocket*"
QT_MOC_LITERAL(13, 142, 6) // "sender"

    },
    "ServerThread\0logMessage\0\0message\0"
    "userLoggedIn\0nickname\0QHostAddress\0"
    "address\0messageReceived\0updateUserList\0"
    "users\0broadcastMessage\0QTcpSocket*\0"
    "sender"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ServerThread[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       4,    2,   42,    2, 0x06 /* Public */,
       8,    2,   47,    2, 0x06 /* Public */,
       9,    1,   52,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    2,   55,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 6,    5,    7,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    5,    3,
    QMetaType::Void, QMetaType::QStringList,   10,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 12,    3,   13,

       0        // eod
};

void ServerThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ServerThread *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->logMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->userLoggedIn((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QHostAddress(*)>(_a[2]))); break;
        case 2: _t->messageReceived((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 3: _t->updateUserList((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 4: _t->broadcastMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QTcpSocket*(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTcpSocket* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ServerThread::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ServerThread::logMessage)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ServerThread::*)(const QString & , const QHostAddress & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ServerThread::userLoggedIn)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ServerThread::*)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ServerThread::messageReceived)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ServerThread::*)(const QStringList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ServerThread::updateUserList)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ServerThread::staticMetaObject = { {
    QMetaObject::SuperData::link<QThread::staticMetaObject>(),
    qt_meta_stringdata_ServerThread.data,
    qt_meta_data_ServerThread,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ServerThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ServerThread::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ServerThread.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int ServerThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void ServerThread::logMessage(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ServerThread::userLoggedIn(const QString & _t1, const QHostAddress & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ServerThread::messageReceived(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ServerThread::updateUserList(const QStringList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
struct qt_meta_stringdata_ServerWindow_t {
    QByteArrayData data[11];
    char stringdata0[159];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ServerWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ServerWindow_t qt_meta_stringdata_ServerWindow = {
    {
QT_MOC_LITERAL(0, 0, 12), // "ServerWindow"
QT_MOC_LITERAL(1, 13, 28), // "on_startServerButton_clicked"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 27), // "on_stopServerButton_clicked"
QT_MOC_LITERAL(4, 71, 9), // "appendLog"
QT_MOC_LITERAL(5, 81, 7), // "message"
QT_MOC_LITERAL(6, 89, 16), // "displayUserLogin"
QT_MOC_LITERAL(7, 106, 8), // "nickname"
QT_MOC_LITERAL(8, 115, 12), // "QHostAddress"
QT_MOC_LITERAL(9, 128, 7), // "address"
QT_MOC_LITERAL(10, 136, 22) // "displayMessageReceived"

    },
    "ServerWindow\0on_startServerButton_clicked\0"
    "\0on_stopServerButton_clicked\0appendLog\0"
    "message\0displayUserLogin\0nickname\0"
    "QHostAddress\0address\0displayMessageReceived"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ServerWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x08 /* Private */,
       3,    0,   40,    2, 0x08 /* Private */,
       4,    1,   41,    2, 0x08 /* Private */,
       6,    2,   44,    2, 0x08 /* Private */,
      10,    2,   49,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 8,    7,    9,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    7,    5,

       0        // eod
};

void ServerWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ServerWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_startServerButton_clicked(); break;
        case 1: _t->on_stopServerButton_clicked(); break;
        case 2: _t->appendLog((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->displayUserLogin((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QHostAddress(*)>(_a[2]))); break;
        case 4: _t->displayMessageReceived((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ServerWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_ServerWindow.data,
    qt_meta_data_ServerWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ServerWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ServerWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ServerWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int ServerWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
