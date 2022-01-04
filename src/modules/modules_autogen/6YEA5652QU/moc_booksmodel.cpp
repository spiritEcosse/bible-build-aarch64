/****************************************************************************
** Meta object code from reading C++ file 'booksmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../include/booksmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'booksmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_BooksModel_t {
    QByteArrayData data[11];
    char stringdata0[151];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BooksModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BooksModel_t qt_meta_stringdata_BooksModel = {
    {
QT_MOC_LITERAL(0, 0, 10), // "BooksModel"
QT_MOC_LITERAL(1, 11, 17), // "changeCurrentBook"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 20), // "changeCurrentChapter"
QT_MOC_LITERAL(4, 51, 19), // "changeCurrentVerses"
QT_MOC_LITERAL(5, 71, 12), // "oldTestament"
QT_MOC_LITERAL(6, 84, 12), // "newTestament"
QT_MOC_LITERAL(7, 97, 11), // "currentBook"
QT_MOC_LITERAL(8, 109, 14), // "currentChapter"
QT_MOC_LITERAL(9, 124, 13), // "currentVerses"
QT_MOC_LITERAL(10, 138, 12) // "VersesModel*"

    },
    "BooksModel\0changeCurrentBook\0\0"
    "changeCurrentChapter\0changeCurrentVerses\0"
    "oldTestament\0newTestament\0currentBook\0"
    "currentChapter\0currentVerses\0VersesModel*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BooksModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       3,   44, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    0,   40,    2, 0x06 /* Public */,
       4,    0,   41,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       5,    0,   42,    2, 0x02 /* Public */,
       6,    0,   43,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       7, QMetaType::Int, 0x00495103,
       8, QMetaType::Int, 0x00495103,
       9, 0x80000000 | 10, 0x00495009,

 // properties: notify_signal_id
       0,
       1,
       2,

       0        // eod
};

void BooksModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BooksModel *_t = static_cast<BooksModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changeCurrentBook(); break;
        case 1: _t->changeCurrentChapter(); break;
        case 2: _t->changeCurrentVerses(); break;
        case 3: _t->oldTestament(); break;
        case 4: _t->newTestament(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (BooksModel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BooksModel::changeCurrentBook)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (BooksModel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BooksModel::changeCurrentChapter)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (BooksModel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BooksModel::changeCurrentVerses)) {
                *result = 2;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< VersesModel* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        BooksModel *_t = static_cast<BooksModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->currentBook(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->currentChapter(); break;
        case 2: *reinterpret_cast< VersesModel**>(_v) = _t->currentVerses(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        BooksModel *_t = static_cast<BooksModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setCurrentBook(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setCurrentChapter(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject BooksModel::staticMetaObject = {
    { &QSqlTableModel::staticMetaObject, qt_meta_stringdata_BooksModel.data,
      qt_meta_data_BooksModel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *BooksModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BooksModel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_BooksModel.stringdata0))
        return static_cast<void*>(const_cast< BooksModel*>(this));
    return QSqlTableModel::qt_metacast(_clname);
}

int BooksModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSqlTableModel::qt_metacall(_c, _id, _a);
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
void BooksModel::changeCurrentBook()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void BooksModel::changeCurrentChapter()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void BooksModel::changeCurrentVerses()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
