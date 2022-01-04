/****************************************************************************
** Meta object code from reading C++ file 'modelmodule.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../include/modelmodule.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'modelmodule.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_modules__Worker_t {
    QByteArrayData data[10];
    char stringdata0[157];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_modules__Worker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_modules__Worker_t qt_meta_stringdata_modules__Worker = {
    {
QT_MOC_LITERAL(0, 0, 15), // "modules::Worker"
QT_MOC_LITERAL(1, 16, 15), // "deleteCompleted"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 17), // "downloadCompleted"
QT_MOC_LITERAL(4, 51, 11), // "deleteFiles"
QT_MOC_LITERAL(5, 63, 10), // "Downloaded"
QT_MOC_LITERAL(6, 74, 10), // "downloaded"
QT_MOC_LITERAL(7, 85, 20), // "startDownloadModules"
QT_MOC_LITERAL(8, 106, 28), // "updateSuccessfullyDownloaded"
QT_MOC_LITERAL(9, 135, 21) // "retryFailedDownloaded"

    },
    "modules::Worker\0deleteCompleted\0\0"
    "downloadCompleted\0deleteFiles\0Downloaded\0"
    "downloaded\0startDownloadModules\0"
    "updateSuccessfullyDownloaded\0"
    "retryFailedDownloaded"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_modules__Worker[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    0,   45,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   46,    2, 0x0a /* Public */,
       7,    1,   49,    2, 0x0a /* Public */,
       8,    0,   52,    2, 0x08 /* Private */,
       9,    0,   53,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Bool,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Bool, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void modules::Worker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Worker *_t = static_cast<Worker *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->deleteCompleted(); break;
        case 1: { bool _r = _t->downloadCompleted();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: _t->deleteFiles((*reinterpret_cast< const Downloaded(*)>(_a[1]))); break;
        case 3: { bool _r = _t->startDownloadModules((*reinterpret_cast< const Downloaded(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: _t->updateSuccessfullyDownloaded(); break;
        case 5: _t->retryFailedDownloaded(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Worker::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Worker::deleteCompleted)) {
                *result = 0;
                return;
            }
        }
        {
            typedef bool (Worker::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Worker::downloadCompleted)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject modules::Worker::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_modules__Worker.data,
      qt_meta_data_modules__Worker,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *modules::Worker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *modules::Worker::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_modules__Worker.stringdata0))
        return static_cast<void*>(const_cast< Worker*>(this));
    if (!strcmp(_clname, "BaseModel<Module>"))
        return static_cast< BaseModel<Module>*>(const_cast< Worker*>(this));
    return QObject::qt_metacast(_clname);
}

int modules::Worker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void modules::Worker::deleteCompleted()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
bool modules::Worker::downloadCompleted()
{
    bool _t0 = bool();
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
    return _t0;
}
struct qt_meta_stringdata_modules__ModelModule_t {
    QByteArrayData data[31];
    char stringdata0[467];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_modules__ModelModule_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_modules__ModelModule_t qt_meta_stringdata_modules__ModelModule = {
    {
QT_MOC_LITERAL(0, 0, 20), // "modules::ModelModule"
QT_MOC_LITERAL(1, 21, 16), // "changeDownloaded"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 14), // "changeSelected"
QT_MOC_LITERAL(4, 54, 21), // "changeDeleteCompleted"
QT_MOC_LITERAL(5, 76, 23), // "changeDownloadCompleted"
QT_MOC_LITERAL(6, 100, 21), // "bulkUpdatedDownloaded"
QT_MOC_LITERAL(7, 122, 16), // "startDeleteFiles"
QT_MOC_LITERAL(8, 139, 10), // "Downloaded"
QT_MOC_LITERAL(9, 150, 10), // "downloaded"
QT_MOC_LITERAL(10, 161, 20), // "startDownloadModules"
QT_MOC_LITERAL(11, 182, 20), // "getExtraFieldsFromDb"
QT_MOC_LITERAL(12, 203, 19), // "saveExtraFieldsToDb"
QT_MOC_LITERAL(13, 223, 15), // "postDeleteFiles"
QT_MOC_LITERAL(14, 239, 14), // "postDownloaded"
QT_MOC_LITERAL(15, 254, 11), // "countActive"
QT_MOC_LITERAL(16, 266, 4), // "init"
QT_MOC_LITERAL(17, 271, 14), // "activateModule"
QT_MOC_LITERAL(18, 286, 2), // "id"
QT_MOC_LITERAL(19, 289, 14), // "updateSelected"
QT_MOC_LITERAL(20, 304, 5), // "value"
QT_MOC_LITERAL(21, 310, 18), // "updateSelectedBulk"
QT_MOC_LITERAL(22, 329, 3), // "ids"
QT_MOC_LITERAL(23, 333, 15), // "downloadModules"
QT_MOC_LITERAL(24, 349, 13), // "deleteModules"
QT_MOC_LITERAL(25, 363, 16), // "updateDownloaded"
QT_MOC_LITERAL(26, 380, 23), // "updateObjectsDownloaded"
QT_MOC_LITERAL(27, 404, 19), // "updateObjectsActive"
QT_MOC_LITERAL(28, 424, 8), // "selected"
QT_MOC_LITERAL(29, 433, 15), // "deleteCompleted"
QT_MOC_LITERAL(30, 449, 17) // "downloadCompleted"

    },
    "modules::ModelModule\0changeDownloaded\0"
    "\0changeSelected\0changeDeleteCompleted\0"
    "changeDownloadCompleted\0bulkUpdatedDownloaded\0"
    "startDeleteFiles\0Downloaded\0downloaded\0"
    "startDownloadModules\0getExtraFieldsFromDb\0"
    "saveExtraFieldsToDb\0postDeleteFiles\0"
    "postDownloaded\0countActive\0init\0"
    "activateModule\0id\0updateSelected\0value\0"
    "updateSelectedBulk\0ids\0downloadModules\0"
    "deleteModules\0updateDownloaded\0"
    "updateObjectsDownloaded\0updateObjectsActive\0"
    "selected\0deleteCompleted\0downloadCompleted"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_modules__ModelModule[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       4,  160, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  119,    2, 0x06 /* Public */,
       3,    0,  120,    2, 0x06 /* Public */,
       4,    0,  121,    2, 0x06 /* Public */,
       5,    0,  122,    2, 0x06 /* Public */,
       6,    0,  123,    2, 0x06 /* Public */,
       7,    1,  124,    2, 0x06 /* Public */,
      10,    1,  127,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    0,  130,    2, 0x0a /* Public */,
      12,    0,  131,    2, 0x08 /* Private */,
      13,    0,  132,    2, 0x08 /* Private */,
      14,    0,  133,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      15,    0,  134,    2, 0x02 /* Public */,
      16,    0,  135,    2, 0x02 /* Public */,
      17,    1,  136,    2, 0x02 /* Public */,
      19,    2,  139,    2, 0x02 /* Public */,
      21,    1,  144,    2, 0x02 /* Public */,
      23,    1,  147,    2, 0x02 /* Public */,
      24,    1,  150,    2, 0x02 /* Public */,
      25,    2,  153,    2, 0x02 /* Public */,
      26,    0,  158,    2, 0x02 /* Public */,
      27,    0,  159,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool, 0x80000000 | 8,    9,
    QMetaType::Bool, 0x80000000 | 8,    9,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Int,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   18,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,   18,   20,
    QMetaType::Void, QMetaType::QVariantList,   22,
    QMetaType::Void, QMetaType::QVariantList,    9,
    QMetaType::Void, QMetaType::QVariantList,    9,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,   18,   20,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       9, QMetaType::QVariantList, 0x00495001,
      28, QMetaType::QVariantList, 0x00495001,
      29, QMetaType::Bool, 0x00495001,
      30, QMetaType::Bool, 0x00495001,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,

       0        // eod
};

void modules::ModelModule::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ModelModule *_t = static_cast<ModelModule *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changeDownloaded(); break;
        case 1: _t->changeSelected(); break;
        case 2: _t->changeDeleteCompleted(); break;
        case 3: _t->changeDownloadCompleted(); break;
        case 4: _t->bulkUpdatedDownloaded(); break;
        case 5: { bool _r = _t->startDeleteFiles((*reinterpret_cast< const Downloaded(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->startDownloadModules((*reinterpret_cast< const Downloaded(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: _t->getExtraFieldsFromDb(); break;
        case 8: _t->saveExtraFieldsToDb(); break;
        case 9: _t->postDeleteFiles(); break;
        case 10: _t->postDownloaded(); break;
        case 11: { int _r = _t->countActive();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 12: _t->init(); break;
        case 13: _t->activateModule((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->updateSelected((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 15: _t->updateSelectedBulk((*reinterpret_cast< const QVariantList(*)>(_a[1]))); break;
        case 16: _t->downloadModules((*reinterpret_cast< const QVariantList(*)>(_a[1]))); break;
        case 17: _t->deleteModules((*reinterpret_cast< const QVariantList(*)>(_a[1]))); break;
        case 18: _t->updateDownloaded((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 19: _t->updateObjectsDownloaded(); break;
        case 20: _t->updateObjectsActive(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ModelModule::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ModelModule::changeDownloaded)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ModelModule::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ModelModule::changeSelected)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (ModelModule::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ModelModule::changeDeleteCompleted)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (ModelModule::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ModelModule::changeDownloadCompleted)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (ModelModule::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ModelModule::bulkUpdatedDownloaded)) {
                *result = 4;
                return;
            }
        }
        {
            typedef bool (ModelModule::*_t)(const Downloaded & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ModelModule::startDeleteFiles)) {
                *result = 5;
                return;
            }
        }
        {
            typedef bool (ModelModule::*_t)(const Downloaded & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ModelModule::startDownloadModules)) {
                *result = 6;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        ModelModule *_t = static_cast<ModelModule *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QVariantList*>(_v) = _t->getDownloaded(); break;
        case 1: *reinterpret_cast< QVariantList*>(_v) = _t->getSelected(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->getDeleteCompleted(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->getDownloadCompleted(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject modules::ModelModule::staticMetaObject = {
    { &ModelUpdate<Module>::staticMetaObject, qt_meta_stringdata_modules__ModelModule.data,
      qt_meta_data_modules__ModelModule,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *modules::ModelModule::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *modules::ModelModule::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_modules__ModelModule.stringdata0))
        return static_cast<void*>(const_cast< ModelModule*>(this));
    return ModelUpdate<Module>::qt_metacast(_clname);
}

int modules::ModelModule::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ModelUpdate<Module>::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 21)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 21;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void modules::ModelModule::changeDownloaded()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void modules::ModelModule::changeSelected()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void modules::ModelModule::changeDeleteCompleted()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void modules::ModelModule::changeDownloadCompleted()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void modules::ModelModule::bulkUpdatedDownloaded()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
bool modules::ModelModule::startDeleteFiles(const Downloaded & _t1)
{
    bool _t0 = bool();
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
    return _t0;
}

// SIGNAL 6
bool modules::ModelModule::startDownloadModules(const Downloaded & _t1)
{
    bool _t0 = bool();
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
    return _t0;
}
QT_END_MOC_NAMESPACE
