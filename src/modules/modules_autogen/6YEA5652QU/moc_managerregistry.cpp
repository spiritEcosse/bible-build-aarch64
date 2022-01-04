/****************************************************************************
** Meta object code from reading C++ file 'managerregistry.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../include/managerregistry.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'managerregistry.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_modules__ManagerRegistry_t {
    QByteArrayData data[21];
    char stringdata0[302];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_modules__ManagerRegistry_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_modules__ManagerRegistry_t qt_meta_stringdata_modules__ManagerRegistry = {
    {
QT_MOC_LITERAL(0, 0, 24), // "modules::ManagerRegistry"
QT_MOC_LITERAL(1, 25, 20), // "newRegistryAvailable"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 9), // "available"
QT_MOC_LITERAL(4, 57, 7), // "version"
QT_MOC_LITERAL(5, 65, 19), // "retrieveDataSuccess"
QT_MOC_LITERAL(6, 85, 8), // "document"
QT_MOC_LITERAL(7, 94, 21), // "removeRegistrySuccess"
QT_MOC_LITERAL(8, 116, 17), // "removeInfoSuccess"
QT_MOC_LITERAL(9, 134, 18), // "getDocumentSuccess"
QT_MOC_LITERAL(10, 153, 8), // "download"
QT_MOC_LITERAL(11, 162, 14), // "checkNewVesion"
QT_MOC_LITERAL(12, 177, 12), // "retrieveData"
QT_MOC_LITERAL(13, 190, 16), // "retrieveDataInfo"
QT_MOC_LITERAL(14, 207, 15), // "extractRegistry"
QT_MOC_LITERAL(15, 223, 8), // "fileName"
QT_MOC_LITERAL(16, 232, 14), // "removeRegistry"
QT_MOC_LITERAL(17, 247, 10), // "removeInfo"
QT_MOC_LITERAL(18, 258, 15), // "retrieveVersion"
QT_MOC_LITERAL(19, 274, 11), // "tryOtherUrl"
QT_MOC_LITERAL(20, 286, 15) // "tryOtherInfoUrl"

    },
    "modules::ManagerRegistry\0newRegistryAvailable\0"
    "\0available\0version\0retrieveDataSuccess\0"
    "document\0removeRegistrySuccess\0"
    "removeInfoSuccess\0getDocumentSuccess\0"
    "download\0checkNewVesion\0retrieveData\0"
    "retrieveDataInfo\0extractRegistry\0"
    "fileName\0removeRegistry\0removeInfo\0"
    "retrieveVersion\0tryOtherUrl\0tryOtherInfoUrl"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_modules__ManagerRegistry[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   89,    2, 0x06 /* Public */,
       5,    1,   94,    2, 0x06 /* Public */,
       7,    0,   97,    2, 0x06 /* Public */,
       8,    0,   98,    2, 0x06 /* Public */,
       9,    1,   99,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    0,  102,    2, 0x0a /* Public */,
      11,    0,  103,    2, 0x0a /* Public */,
      12,    1,  104,    2, 0x08 /* Private */,
      13,    1,  107,    2, 0x08 /* Private */,
      14,    1,  110,    2, 0x08 /* Private */,
      16,    0,  113,    2, 0x08 /* Private */,
      17,    0,  114,    2, 0x08 /* Private */,
      18,    1,  115,    2, 0x08 /* Private */,
      19,    0,  118,    2, 0x08 /* Private */,
      20,    0,  119,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool, QMetaType::Int,    3,    4,
    QMetaType::Void, QMetaType::QJsonDocument,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QJsonDocument,    6,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QJsonDocument,    6,
    QMetaType::Void, QMetaType::QJsonDocument,    6,
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void modules::ManagerRegistry::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ManagerRegistry *_t = static_cast<ManagerRegistry *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->newRegistryAvailable((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->retrieveDataSuccess((*reinterpret_cast< const QJsonDocument(*)>(_a[1]))); break;
        case 2: _t->removeRegistrySuccess(); break;
        case 3: _t->removeInfoSuccess(); break;
        case 4: _t->getDocumentSuccess((*reinterpret_cast< const QJsonDocument(*)>(_a[1]))); break;
        case 5: _t->download(); break;
        case 6: _t->checkNewVesion(); break;
        case 7: _t->retrieveData((*reinterpret_cast< const QJsonDocument(*)>(_a[1]))); break;
        case 8: _t->retrieveDataInfo((*reinterpret_cast< const QJsonDocument(*)>(_a[1]))); break;
        case 9: _t->extractRegistry((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->removeRegistry(); break;
        case 11: _t->removeInfo(); break;
        case 12: _t->retrieveVersion((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: _t->tryOtherUrl(); break;
        case 14: _t->tryOtherInfoUrl(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ManagerRegistry::*_t)(bool , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ManagerRegistry::newRegistryAvailable)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ManagerRegistry::*_t)(const QJsonDocument & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ManagerRegistry::retrieveDataSuccess)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (ManagerRegistry::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ManagerRegistry::removeRegistrySuccess)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (ManagerRegistry::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ManagerRegistry::removeInfoSuccess)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (ManagerRegistry::*_t)(const QJsonDocument & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ManagerRegistry::getDocumentSuccess)) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject modules::ManagerRegistry::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_modules__ManagerRegistry.data,
      qt_meta_data_modules__ManagerRegistry,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *modules::ManagerRegistry::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *modules::ManagerRegistry::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_modules__ManagerRegistry.stringdata0))
        return static_cast<void*>(const_cast< ManagerRegistry*>(this));
    return QObject::qt_metacast(_clname);
}

int modules::ManagerRegistry::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void modules::ManagerRegistry::newRegistryAvailable(bool _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void modules::ManagerRegistry::retrieveDataSuccess(const QJsonDocument & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void modules::ManagerRegistry::removeRegistrySuccess()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void modules::ManagerRegistry::removeInfoSuccess()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void modules::ManagerRegistry::getDocumentSuccess(const QJsonDocument & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
