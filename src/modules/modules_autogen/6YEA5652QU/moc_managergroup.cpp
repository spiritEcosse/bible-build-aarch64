/****************************************************************************
** Meta object code from reading C++ file 'managergroup.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../include/managergroup.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'managergroup.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_modules__ManagerGroup_t {
    QByteArrayData data[9];
    char stringdata0[125];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_modules__ManagerGroup_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_modules__ManagerGroup_t qt_meta_stringdata_modules__ManagerGroup = {
    {
QT_MOC_LITERAL(0, 0, 21), // "modules::ManagerGroup"
QT_MOC_LITERAL(1, 22, 18), // "makeModulesSuccess"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 19), // "std::vector<Module>"
QT_MOC_LITERAL(4, 62, 7), // "modules"
QT_MOC_LITERAL(5, 70, 5), // "error"
QT_MOC_LITERAL(6, 76, 23), // "makeGroupModulesSuccess"
QT_MOC_LITERAL(7, 100, 15), // "makeCollections"
QT_MOC_LITERAL(8, 116, 8) // "document"

    },
    "modules::ManagerGroup\0makeModulesSuccess\0"
    "\0std::vector<Module>\0modules\0error\0"
    "makeGroupModulesSuccess\0makeCollections\0"
    "document"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_modules__ManagerGroup[] = {

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
       1,    1,   34,    2, 0x06 /* Public */,
       5,    1,   37,    2, 0x06 /* Public */,
       6,    0,   40,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   41,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QJsonDocument,    8,

       0        // eod
};

void modules::ManagerGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ManagerGroup *_t = static_cast<ManagerGroup *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->makeModulesSuccess((*reinterpret_cast< const std::vector<Module>(*)>(_a[1]))); break;
        case 1: _t->error((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->makeGroupModulesSuccess(); break;
        case 3: _t->makeCollections((*reinterpret_cast< const QJsonDocument(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ManagerGroup::*_t)(const std::vector<Module> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ManagerGroup::makeModulesSuccess)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ManagerGroup::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ManagerGroup::error)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (ManagerGroup::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ManagerGroup::makeGroupModulesSuccess)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject modules::ManagerGroup::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_modules__ManagerGroup.data,
      qt_meta_data_modules__ManagerGroup,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *modules::ManagerGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *modules::ManagerGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_modules__ManagerGroup.stringdata0))
        return static_cast<void*>(const_cast< ManagerGroup*>(this));
    return QObject::qt_metacast(_clname);
}

int modules::ManagerGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void modules::ManagerGroup::makeModulesSuccess(const std::vector<Module> & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void modules::ManagerGroup::error(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void modules::ManagerGroup::makeGroupModulesSuccess()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
