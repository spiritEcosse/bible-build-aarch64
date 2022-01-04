/****************************************************************************
** Meta object code from reading C++ file 'commentsmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../include/commentsmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'commentsmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CommentsModel_t {
    QByteArrayData data[8];
    char stringdata0[99];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CommentsModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CommentsModel_t qt_meta_stringdata_CommentsModel = {
    {
QT_MOC_LITERAL(0, 0, 13), // "CommentsModel"
QT_MOC_LITERAL(1, 14, 17), // "changeCurrentText"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 11), // "currentBook"
QT_MOC_LITERAL(4, 45, 14), // "currentChapter"
QT_MOC_LITERAL(5, 60, 12), // "currentVerse"
QT_MOC_LITERAL(6, 73, 13), // "currentMarker"
QT_MOC_LITERAL(7, 87, 11) // "currentText"

    },
    "CommentsModel\0changeCurrentText\0\0"
    "currentBook\0currentChapter\0currentVerse\0"
    "currentMarker\0currentText"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CommentsModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       5,   20, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::Int, 0x00095103,
       4, QMetaType::Int, 0x00095103,
       5, QMetaType::Int, 0x00095103,
       6, QMetaType::QString, 0x00095103,
       7, QMetaType::QString, 0x00495001,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       0,

       0        // eod
};

void CommentsModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CommentsModel *_t = static_cast<CommentsModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changeCurrentText(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CommentsModel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CommentsModel::changeCurrentText)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        CommentsModel *_t = static_cast<CommentsModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->currentBook(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->currentChapter(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->currentVerse(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->currentMarker(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->currentText(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        CommentsModel *_t = static_cast<CommentsModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setCurrentBook(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setCurrentChapter(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setCurrentVerse(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setCurrentMarker(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

const QMetaObject CommentsModel::staticMetaObject = {
    { &QSqlTableModel::staticMetaObject, qt_meta_stringdata_CommentsModel.data,
      qt_meta_data_CommentsModel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CommentsModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CommentsModel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CommentsModel.stringdata0))
        return static_cast<void*>(const_cast< CommentsModel*>(this));
    return QSqlTableModel::qt_metacast(_clname);
}

int CommentsModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSqlTableModel::qt_metacall(_c, _id, _a);
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
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void CommentsModel::changeCurrentText()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
