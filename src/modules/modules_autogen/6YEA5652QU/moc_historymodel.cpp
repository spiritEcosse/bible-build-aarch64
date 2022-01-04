/****************************************************************************
** Meta object code from reading C++ file 'historymodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../include/historymodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'historymodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_HistoryModel_t {
    QByteArrayData data[17];
    char stringdata0[230];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HistoryModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HistoryModel_t qt_meta_stringdata_HistoryModel = {
    {
QT_MOC_LITERAL(0, 0, 12), // "HistoryModel"
QT_MOC_LITERAL(1, 13, 20), // "changeTestamentIndex"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 15), // "changeBookIndex"
QT_MOC_LITERAL(4, 51, 19), // "changeBookShortName"
QT_MOC_LITERAL(5, 71, 18), // "changeChapterIndex"
QT_MOC_LITERAL(6, 90, 16), // "changeVerseIndex"
QT_MOC_LITERAL(7, 107, 10), // "copyObject"
QT_MOC_LITERAL(8, 118, 14), // "testamentIndex"
QT_MOC_LITERAL(9, 133, 9), // "bookIndex"
QT_MOC_LITERAL(10, 143, 12), // "chapterIndex"
QT_MOC_LITERAL(11, 156, 10), // "verseIndex"
QT_MOC_LITERAL(12, 167, 13), // "bookShortName"
QT_MOC_LITERAL(13, 181, 11), // "addFromMask"
QT_MOC_LITERAL(14, 193, 10), // "bookNumber"
QT_MOC_LITERAL(15, 204, 13), // "chapterNumber"
QT_MOC_LITERAL(16, 218, 11) // "verseNumber"

    },
    "HistoryModel\0changeTestamentIndex\0\0"
    "changeBookIndex\0changeBookShortName\0"
    "changeChapterIndex\0changeVerseIndex\0"
    "copyObject\0testamentIndex\0bookIndex\0"
    "chapterIndex\0verseIndex\0bookShortName\0"
    "addFromMask\0bookNumber\0chapterNumber\0"
    "verseNumber"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HistoryModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       5,   72, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    0,   50,    2, 0x06 /* Public */,
       4,    0,   51,    2, 0x06 /* Public */,
       5,    0,   52,    2, 0x06 /* Public */,
       6,    0,   53,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       7,    5,   54,    2, 0x02 /* Public */,
      13,    3,   65,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::QString,    8,    9,   10,   11,   12,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,   14,   15,   16,

 // properties: name, type, flags
       8, QMetaType::Int, 0x00495103,
       9, QMetaType::Int, 0x00495103,
      12, QMetaType::QString, 0x00495103,
      10, QMetaType::Int, 0x00495103,
      11, QMetaType::Int, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,

       0        // eod
};

void HistoryModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HistoryModel *_t = static_cast<HistoryModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changeTestamentIndex(); break;
        case 1: _t->changeBookIndex(); break;
        case 2: _t->changeBookShortName(); break;
        case 3: _t->changeChapterIndex(); break;
        case 4: _t->changeVerseIndex(); break;
        case 5: _t->copyObject((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2])),(*reinterpret_cast< const int(*)>(_a[3])),(*reinterpret_cast< const int(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5]))); break;
        case 6: _t->addFromMask((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2])),(*reinterpret_cast< const int(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (HistoryModel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HistoryModel::changeTestamentIndex)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (HistoryModel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HistoryModel::changeBookIndex)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (HistoryModel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HistoryModel::changeBookShortName)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (HistoryModel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HistoryModel::changeChapterIndex)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (HistoryModel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HistoryModel::changeVerseIndex)) {
                *result = 4;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        HistoryModel *_t = static_cast<HistoryModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->testamentIndex(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->bookIndex(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->bookShortName(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->chapterIndex(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->verseIndex(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        HistoryModel *_t = static_cast<HistoryModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setTestamentIndex(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setBookIndex(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setBookShortName(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setChapterIndex(*reinterpret_cast< int*>(_v)); break;
        case 4: _t->setVerseIndex(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject HistoryModel::staticMetaObject = {
    { &QSqlTableModel::staticMetaObject, qt_meta_stringdata_HistoryModel.data,
      qt_meta_data_HistoryModel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *HistoryModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HistoryModel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_HistoryModel.stringdata0))
        return static_cast<void*>(const_cast< HistoryModel*>(this));
    return QSqlTableModel::qt_metacast(_clname);
}

int HistoryModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSqlTableModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
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
void HistoryModel::changeTestamentIndex()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void HistoryModel::changeBookIndex()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void HistoryModel::changeBookShortName()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void HistoryModel::changeChapterIndex()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void HistoryModel::changeVerseIndex()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
