/****************************************************************************
** Meta object code from reading C++ file 'qsortfiltersqlquerymodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../include/qsortfiltersqlquerymodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qsortfiltersqlquerymodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QSortFilterSqlQueryModel_t {
    QByteArrayData data[14];
    char stringdata0[141];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QSortFilterSqlQueryModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QSortFilterSqlQueryModel_t qt_meta_stringdata_QSortFilterSqlQueryModel = {
    {
QT_MOC_LITERAL(0, 0, 24), // "QSortFilterSqlQueryModel"
QT_MOC_LITERAL(1, 25, 15), // "setFilterColumn"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 6), // "column"
QT_MOC_LITERAL(4, 49, 14), // "setFilterFlags"
QT_MOC_LITERAL(5, 64, 13), // "Qt::MatchFlag"
QT_MOC_LITERAL(6, 78, 5), // "flags"
QT_MOC_LITERAL(7, 84, 9), // "setFilter"
QT_MOC_LITERAL(8, 94, 6), // "filter"
QT_MOC_LITERAL(9, 101, 6), // "select"
QT_MOC_LITERAL(10, 108, 7), // "setSort"
QT_MOC_LITERAL(11, 116, 13), // "Qt::SortOrder"
QT_MOC_LITERAL(12, 130, 5), // "order"
QT_MOC_LITERAL(13, 136, 4) // "sort"

    },
    "QSortFilterSqlQueryModel\0setFilterColumn\0"
    "\0column\0setFilterFlags\0Qt::MatchFlag\0"
    "flags\0setFilter\0filter\0select\0setSort\0"
    "Qt::SortOrder\0order\0sort"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QSortFilterSqlQueryModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x0a /* Public */,
       4,    1,   52,    2, 0x0a /* Public */,
       7,    1,   55,    2, 0x0a /* Public */,
       8,    1,   58,    2, 0x0a /* Public */,
       9,    0,   61,    2, 0x0a /* Public */,
      10,    2,   62,    2, 0x0a /* Public */,
      13,    2,   67,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 11,    3,   12,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 11,    3,   12,

       0        // eod
};

void QSortFilterSqlQueryModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QSortFilterSqlQueryModel *_t = static_cast<QSortFilterSqlQueryModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setFilterColumn((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->setFilterFlags((*reinterpret_cast< const Qt::MatchFlag(*)>(_a[1]))); break;
        case 2: _t->setFilter((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->filter((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->select(); break;
        case 5: _t->setSort((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< Qt::SortOrder(*)>(_a[2]))); break;
        case 6: _t->sort((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< Qt::SortOrder(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject QSortFilterSqlQueryModel::staticMetaObject = {
    { &QSqlQueryModel::staticMetaObject, qt_meta_stringdata_QSortFilterSqlQueryModel.data,
      qt_meta_data_QSortFilterSqlQueryModel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QSortFilterSqlQueryModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QSortFilterSqlQueryModel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QSortFilterSqlQueryModel.stringdata0))
        return static_cast<void*>(const_cast< QSortFilterSqlQueryModel*>(this));
    return QSqlQueryModel::qt_metacast(_clname);
}

int QSortFilterSqlQueryModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSqlQueryModel::qt_metacall(_c, _id, _a);
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
    return _id;
}
QT_END_MOC_NAMESPACE
