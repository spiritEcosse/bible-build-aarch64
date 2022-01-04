/****************************************************************************
** Meta object code from reading C++ file 'modelupdate.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../include/modelupdate.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'modelupdate.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_modules__Base_t {
    QByteArrayData data[6];
    char stringdata0[71];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_modules__Base_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_modules__Base_t qt_meta_stringdata_modules__Base = {
    {
QT_MOC_LITERAL(0, 0, 13), // "modules::Base"
QT_MOC_LITERAL(1, 14, 5), // "error"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 10), // "updateDone"
QT_MOC_LITERAL(4, 32, 16), // "transformSuccess"
QT_MOC_LITERAL(5, 49, 21) // "updateObjectsFromJson"

    },
    "modules::Base\0error\0\0updateDone\0"
    "transformSuccess\0updateObjectsFromJson"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_modules__Base[] = {

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
       3,    0,   37,    2, 0x06 /* Public */,
       4,    0,   38,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   39,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    1,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void modules::Base::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Base *_t = static_cast<Base *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->error((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->updateDone(); break;
        case 2: _t->transformSuccess(); break;
        case 3: _t->updateObjectsFromJson(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Base::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Base::error)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Base::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Base::updateDone)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Base::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Base::transformSuccess)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject modules::Base::staticMetaObject = {
    { &QAbstractListModel::staticMetaObject, qt_meta_stringdata_modules__Base.data,
      qt_meta_data_modules__Base,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *modules::Base::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *modules::Base::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_modules__Base.stringdata0))
        return static_cast<void*>(const_cast< Base*>(this));
    return QAbstractListModel::qt_metacast(_clname);
}

int modules::Base::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
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
void modules::Base::error(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void modules::Base::updateDone()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void modules::Base::transformSuccess()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
