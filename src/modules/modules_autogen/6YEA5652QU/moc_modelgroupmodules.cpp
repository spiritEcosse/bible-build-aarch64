/****************************************************************************
** Meta object code from reading C++ file 'modelgroupmodules.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../include/modelgroupmodules.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'modelgroupmodules.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_modules__ModelGroupModules_t {
    QByteArrayData data[16];
    char stringdata0[232];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_modules__ModelGroupModules_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_modules__ModelGroupModules_t qt_meta_stringdata_modules__ModelGroupModules = {
    {
QT_MOC_LITERAL(0, 0, 26), // "modules::ModelGroupModules"
QT_MOC_LITERAL(1, 27, 25), // "changeNewVersionAvailable"
QT_MOC_LITERAL(2, 53, 0), // ""
QT_MOC_LITERAL(3, 54, 21), // "changeUpdateCompleted"
QT_MOC_LITERAL(4, 76, 12), // "changeNeedle"
QT_MOC_LITERAL(5, 89, 18), // "setUpdateCompleted"
QT_MOC_LITERAL(6, 108, 13), // "updateObjects"
QT_MOC_LITERAL(7, 122, 4), // "init"
QT_MOC_LITERAL(8, 127, 16), // "downloadRegistry"
QT_MOC_LITERAL(9, 144, 6), // "search"
QT_MOC_LITERAL(10, 151, 6), // "needle"
QT_MOC_LITERAL(11, 158, 6), // "getAll"
QT_MOC_LITERAL(12, 165, 15), // "searchByModules"
QT_MOC_LITERAL(13, 181, 14), // "searchByGroups"
QT_MOC_LITERAL(14, 196, 19), // "newVersionAvailable"
QT_MOC_LITERAL(15, 216, 15) // "updateCompleted"

    },
    "modules::ModelGroupModules\0"
    "changeNewVersionAvailable\0\0"
    "changeUpdateCompleted\0changeNeedle\0"
    "setUpdateCompleted\0updateObjects\0init\0"
    "downloadRegistry\0search\0needle\0getAll\0"
    "searchByModules\0searchByGroups\0"
    "newVersionAvailable\0updateCompleted"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_modules__ModelGroupModules[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       3,   82, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x06 /* Public */,
       3,    0,   70,    2, 0x06 /* Public */,
       4,    0,   71,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   72,    2, 0x08 /* Private */,
       6,    0,   73,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
       7,    0,   74,    2, 0x02 /* Public */,
       8,    0,   75,    2, 0x02 /* Public */,
       9,    1,   76,    2, 0x02 /* Public */,
      11,    0,   79,    2, 0x02 /* Public */,
      12,    0,   80,    2, 0x02 /* Public */,
      13,    0,   81,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Bool,

 // properties: name, type, flags
      14, QMetaType::Bool, 0x00495001,
      15, QMetaType::Bool, 0x00495001,
      10, QMetaType::QString, 0x00495001,

 // properties: notify_signal_id
       0,
       1,
       2,

       0        // eod
};

void modules::ModelGroupModules::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ModelGroupModules *_t = static_cast<ModelGroupModules *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changeNewVersionAvailable(); break;
        case 1: _t->changeUpdateCompleted(); break;
        case 2: _t->changeNeedle(); break;
        case 3: _t->setUpdateCompleted(); break;
        case 4: _t->updateObjects(); break;
        case 5: _t->init(); break;
        case 6: _t->downloadRegistry(); break;
        case 7: _t->search((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->getAll(); break;
        case 9: { bool _r = _t->searchByModules();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: { bool _r = _t->searchByGroups();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ModelGroupModules::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ModelGroupModules::changeNewVersionAvailable)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ModelGroupModules::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ModelGroupModules::changeUpdateCompleted)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (ModelGroupModules::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ModelGroupModules::changeNeedle)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        ModelGroupModules *_t = static_cast<ModelGroupModules *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->newVersionAvailable(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->updateCompleted(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->needle(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject modules::ModelGroupModules::staticMetaObject = {
    { &ModelUpdate<GroupModules>::staticMetaObject, qt_meta_stringdata_modules__ModelGroupModules.data,
      qt_meta_data_modules__ModelGroupModules,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *modules::ModelGroupModules::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *modules::ModelGroupModules::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_modules__ModelGroupModules.stringdata0))
        return static_cast<void*>(const_cast< ModelGroupModules*>(this));
    return ModelUpdate<GroupModules>::qt_metacast(_clname);
}

int modules::ModelGroupModules::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ModelUpdate<GroupModules>::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void modules::ModelGroupModules::changeNewVersionAvailable()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void modules::ModelGroupModules::changeUpdateCompleted()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void modules::ModelGroupModules::changeNeedle()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
