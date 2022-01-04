/****************************************************************************
** Meta object code from reading C++ file 'quickdownload.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../include/quickdownload.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'quickdownload.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_netmanager__QuickDownloadMaster_t {
    QByteArrayData data[4];
    char stringdata0[52];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_netmanager__QuickDownloadMaster_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_netmanager__QuickDownloadMaster_t qt_meta_stringdata_netmanager__QuickDownloadMaster = {
    {
QT_MOC_LITERAL(0, 0, 31), // "netmanager::QuickDownloadMaster"
QT_MOC_LITERAL(1, 32, 12), // "readyChanged"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 5) // "ready"

    },
    "netmanager::QuickDownloadMaster\0"
    "readyChanged\0\0ready"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_netmanager__QuickDownloadMaster[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       1,   20, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::Bool, 0x00495001,

 // properties: notify_signal_id
       0,

       0        // eod
};

void netmanager::QuickDownloadMaster::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QuickDownloadMaster *_t = static_cast<QuickDownloadMaster *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->readyChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QuickDownloadMaster::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QuickDownloadMaster::readyChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QuickDownloadMaster *_t = static_cast<QuickDownloadMaster *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->ready(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

const QMetaObject netmanager::QuickDownloadMaster::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_netmanager__QuickDownloadMaster.data,
      qt_meta_data_netmanager__QuickDownloadMaster,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *netmanager::QuickDownloadMaster::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *netmanager::QuickDownloadMaster::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_netmanager__QuickDownloadMaster.stringdata0))
        return static_cast<void*>(const_cast< QuickDownloadMaster*>(this));
    return QObject::qt_metacast(_clname);
}

int netmanager::QuickDownloadMaster::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void netmanager::QuickDownloadMaster::readyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
struct qt_meta_stringdata_netmanager__QuickDownload_t {
    QByteArrayData data[38];
    char stringdata0[471];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_netmanager__QuickDownload_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_netmanager__QuickDownload_t qt_meta_stringdata_netmanager__QuickDownload = {
    {
QT_MOC_LITERAL(0, 0, 25), // "netmanager::QuickDownload"
QT_MOC_LITERAL(1, 26, 10), // "urlChanged"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 17), // "moduleNameChanged"
QT_MOC_LITERAL(4, 56, 13), // "cancelChanged"
QT_MOC_LITERAL(5, 70, 14), // "runningChanged"
QT_MOC_LITERAL(6, 85, 15), // "progressChanged"
QT_MOC_LITERAL(7, 101, 22), // "followRedirectsChanged"
QT_MOC_LITERAL(8, 124, 16), // "overwriteChanged"
QT_MOC_LITERAL(9, 141, 7), // "started"
QT_MOC_LITERAL(10, 149, 8), // "finished"
QT_MOC_LITERAL(11, 158, 10), // "redirected"
QT_MOC_LITERAL(12, 169, 11), // "redirectUrl"
QT_MOC_LITERAL(13, 181, 6), // "update"
QT_MOC_LITERAL(14, 188, 17), // "kiloBytesReceived"
QT_MOC_LITERAL(15, 206, 14), // "kiloBytesTotal"
QT_MOC_LITERAL(16, 221, 5), // "error"
QT_MOC_LITERAL(17, 227, 9), // "errorCode"
QT_MOC_LITERAL(18, 237, 11), // "errorString"
QT_MOC_LITERAL(19, 249, 27), // "networkAccessManagerChanged"
QT_MOC_LITERAL(20, 277, 5), // "start"
QT_MOC_LITERAL(21, 283, 3), // "url"
QT_MOC_LITERAL(22, 287, 4), // "stop"
QT_MOC_LITERAL(23, 292, 11), // "onReadyRead"
QT_MOC_LITERAL(24, 304, 10), // "onFinished"
QT_MOC_LITERAL(25, 315, 18), // "onDownloadProgress"
QT_MOC_LITERAL(26, 334, 13), // "bytesReceived"
QT_MOC_LITERAL(27, 348, 10), // "bytesTotal"
QT_MOC_LITERAL(28, 359, 7), // "running"
QT_MOC_LITERAL(29, 367, 8), // "progress"
QT_MOC_LITERAL(30, 376, 15), // "followRedirects"
QT_MOC_LITERAL(31, 392, 9), // "overwrite"
QT_MOC_LITERAL(32, 402, 10), // "moduleName"
QT_MOC_LITERAL(33, 413, 5), // "Error"
QT_MOC_LITERAL(34, 419, 12), // "ErrorUnknown"
QT_MOC_LITERAL(35, 432, 8), // "ErrorUrl"
QT_MOC_LITERAL(36, 441, 16), // "ErrorDestination"
QT_MOC_LITERAL(37, 458, 12) // "ErrorNetwork"

    },
    "netmanager::QuickDownload\0urlChanged\0"
    "\0moduleNameChanged\0cancelChanged\0"
    "runningChanged\0progressChanged\0"
    "followRedirectsChanged\0overwriteChanged\0"
    "started\0finished\0redirected\0redirectUrl\0"
    "update\0kiloBytesReceived\0kiloBytesTotal\0"
    "error\0errorCode\0errorString\0"
    "networkAccessManagerChanged\0start\0url\0"
    "stop\0onReadyRead\0onFinished\0"
    "onDownloadProgress\0bytesReceived\0"
    "bytesTotal\0running\0progress\0followRedirects\0"
    "overwrite\0moduleName\0Error\0ErrorUnknown\0"
    "ErrorUrl\0ErrorDestination\0ErrorNetwork"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_netmanager__QuickDownload[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       6,  144, // properties
       1,  168, // enums/sets
       0,    0, // constructors
       0,       // flags
      13,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  109,    2, 0x06 /* Public */,
       3,    0,  110,    2, 0x06 /* Public */,
       4,    0,  111,    2, 0x06 /* Public */,
       5,    0,  112,    2, 0x06 /* Public */,
       6,    0,  113,    2, 0x06 /* Public */,
       7,    0,  114,    2, 0x06 /* Public */,
       8,    0,  115,    2, 0x06 /* Public */,
       9,    0,  116,    2, 0x06 /* Public */,
      10,    0,  117,    2, 0x06 /* Public */,
      11,    1,  118,    2, 0x06 /* Public */,
      13,    2,  121,    2, 0x06 /* Public */,
      16,    2,  126,    2, 0x06 /* Public */,
      19,    0,  131,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      20,    1,  132,    2, 0x0a /* Public */,
      20,    0,  135,    2, 0x0a /* Public */,
      22,    0,  136,    2, 0x0a /* Public */,
      23,    0,  137,    2, 0x08 /* Private */,
      24,    0,  138,    2, 0x08 /* Private */,
      25,    2,  139,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUrl,   12,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   14,   15,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   17,   18,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QUrl,   21,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,   26,   27,

 // properties: name, type, flags
      21, QMetaType::QUrl, 0x00495103,
      28, QMetaType::Bool, 0x00495103,
      29, QMetaType::QReal, 0x00495001,
      30, QMetaType::Bool, 0x00495103,
      31, QMetaType::Bool, 0x00495103,
      32, QMetaType::QString, 0x00495103,

 // properties: notify_signal_id
       0,
       3,
       4,
       5,
       6,
       1,

 // enums: name, flags, count, data
      33, 0x0,    4,  172,

 // enum data: key, value
      34, uint(netmanager::QuickDownload::ErrorUnknown),
      35, uint(netmanager::QuickDownload::ErrorUrl),
      36, uint(netmanager::QuickDownload::ErrorDestination),
      37, uint(netmanager::QuickDownload::ErrorNetwork),

       0        // eod
};

void netmanager::QuickDownload::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QuickDownload *_t = static_cast<QuickDownload *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->urlChanged(); break;
        case 1: _t->moduleNameChanged(); break;
        case 2: _t->cancelChanged(); break;
        case 3: _t->runningChanged(); break;
        case 4: _t->progressChanged(); break;
        case 5: _t->followRedirectsChanged(); break;
        case 6: _t->overwriteChanged(); break;
        case 7: _t->started(); break;
        case 8: _t->finished(); break;
        case 9: _t->redirected((*reinterpret_cast< QUrl(*)>(_a[1]))); break;
        case 10: _t->update((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 11: _t->error((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 12: _t->networkAccessManagerChanged(); break;
        case 13: _t->start((*reinterpret_cast< QUrl(*)>(_a[1]))); break;
        case 14: _t->start(); break;
        case 15: _t->stop(); break;
        case 16: _t->onReadyRead(); break;
        case 17: _t->onFinished(); break;
        case 18: _t->onDownloadProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QuickDownload::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QuickDownload::urlChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QuickDownload::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QuickDownload::moduleNameChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QuickDownload::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QuickDownload::cancelChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QuickDownload::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QuickDownload::runningChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QuickDownload::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QuickDownload::progressChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QuickDownload::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QuickDownload::followRedirectsChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QuickDownload::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QuickDownload::overwriteChanged)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (QuickDownload::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QuickDownload::started)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (QuickDownload::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QuickDownload::finished)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (QuickDownload::*_t)(QUrl );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QuickDownload::redirected)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (QuickDownload::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QuickDownload::update)) {
                *result = 10;
                return;
            }
        }
        {
            typedef void (QuickDownload::*_t)(int , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QuickDownload::error)) {
                *result = 11;
                return;
            }
        }
        {
            typedef void (QuickDownload::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QuickDownload::networkAccessManagerChanged)) {
                *result = 12;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QuickDownload *_t = static_cast<QuickDownload *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QUrl*>(_v) = _t->url(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->running(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = _t->progress(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->followRedirects(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->overwrite(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->moduleName(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QuickDownload *_t = static_cast<QuickDownload *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setUrl(*reinterpret_cast< QUrl*>(_v)); break;
        case 1: _t->setRunning(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setFollowRedirects(*reinterpret_cast< bool*>(_v)); break;
        case 4: _t->setOverwrite(*reinterpret_cast< bool*>(_v)); break;
        case 5: _t->setModuleName(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject netmanager::QuickDownload::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_netmanager__QuickDownload.data,
      qt_meta_data_netmanager__QuickDownload,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *netmanager::QuickDownload::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *netmanager::QuickDownload::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_netmanager__QuickDownload.stringdata0))
        return static_cast<void*>(const_cast< QuickDownload*>(this));
    if (!strcmp(_clname, "QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(const_cast< QuickDownload*>(this));
    if (!strcmp(_clname, "org.qt-project.Qt.QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(const_cast< QuickDownload*>(this));
    return QObject::qt_metacast(_clname);
}

int netmanager::QuickDownload::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 19;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void netmanager::QuickDownload::urlChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void netmanager::QuickDownload::moduleNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void netmanager::QuickDownload::cancelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void netmanager::QuickDownload::runningChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void netmanager::QuickDownload::progressChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void netmanager::QuickDownload::followRedirectsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}

// SIGNAL 6
void netmanager::QuickDownload::overwriteChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, Q_NULLPTR);
}

// SIGNAL 7
void netmanager::QuickDownload::started()
{
    QMetaObject::activate(this, &staticMetaObject, 7, Q_NULLPTR);
}

// SIGNAL 8
void netmanager::QuickDownload::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 8, Q_NULLPTR);
}

// SIGNAL 9
void netmanager::QuickDownload::redirected(QUrl _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void netmanager::QuickDownload::update(int _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void netmanager::QuickDownload::error(int _t1, QString _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void netmanager::QuickDownload::networkAccessManagerChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 12, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
