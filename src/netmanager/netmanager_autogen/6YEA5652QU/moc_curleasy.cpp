/****************************************************************************
** Meta object code from reading C++ file 'curleasy.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../include/curleasy.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'curleasy.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_netmanager__CurlEasy_t {
    QByteArrayData data[12];
    char stringdata0[120];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_netmanager__CurlEasy_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_netmanager__CurlEasy_t qt_meta_stringdata_netmanager__CurlEasy = {
    {
QT_MOC_LITERAL(0, 0, 20), // "netmanager::CurlEasy"
QT_MOC_LITERAL(1, 21, 7), // "aborted"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 8), // "progress"
QT_MOC_LITERAL(4, 39, 13), // "downloadTotal"
QT_MOC_LITERAL(5, 53, 11), // "downloadNow"
QT_MOC_LITERAL(6, 65, 11), // "uploadTotal"
QT_MOC_LITERAL(7, 77, 9), // "uploadNow"
QT_MOC_LITERAL(8, 87, 4), // "done"
QT_MOC_LITERAL(9, 92, 8), // "CURLcode"
QT_MOC_LITERAL(10, 101, 6), // "result"
QT_MOC_LITERAL(11, 108, 11) // "deleteLater"

    },
    "netmanager::CurlEasy\0aborted\0\0progress\0"
    "downloadTotal\0downloadNow\0uploadTotal\0"
    "uploadNow\0done\0CURLcode\0result\0"
    "deleteLater"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_netmanager__CurlEasy[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    4,   35,    2, 0x06 /* Public */,
       8,    1,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    0,   47,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong, QMetaType::LongLong, QMetaType::LongLong,    4,    5,    6,    7,
    QMetaType::Void, 0x80000000 | 9,   10,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void netmanager::CurlEasy::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CurlEasy *_t = static_cast<CurlEasy *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->aborted(); break;
        case 1: _t->progress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2])),(*reinterpret_cast< qint64(*)>(_a[3])),(*reinterpret_cast< qint64(*)>(_a[4]))); break;
        case 2: _t->done((*reinterpret_cast< CURLcode(*)>(_a[1]))); break;
        case 3: _t->deleteLater(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CurlEasy::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CurlEasy::aborted)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (CurlEasy::*_t)(qint64 , qint64 , qint64 , qint64 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CurlEasy::progress)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (CurlEasy::*_t)(CURLcode );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CurlEasy::done)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject netmanager::CurlEasy::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_netmanager__CurlEasy.data,
      qt_meta_data_netmanager__CurlEasy,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *netmanager::CurlEasy::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *netmanager::CurlEasy::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_netmanager__CurlEasy.stringdata0))
        return static_cast<void*>(const_cast< CurlEasy*>(this));
    return QObject::qt_metacast(_clname);
}

int netmanager::CurlEasy::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void netmanager::CurlEasy::aborted()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void netmanager::CurlEasy::progress(qint64 _t1, qint64 _t2, qint64 _t3, qint64 _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void netmanager::CurlEasy::done(CURLcode _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
