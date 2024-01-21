/****************************************************************************
** Meta object code from reading C++ file 'dataobject.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../MemoryGame/dataobject.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dataobject.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DataObject_t {
    uint offsetsAndSizes[38];
    char stringdata0[11];
    char stringdata1[12];
    char stringdata2[1];
    char stringdata3[14];
    char stringdata4[15];
    char stringdata5[5];
    char stringdata6[13];
    char stringdata7[16];
    char stringdata8[5];
    char stringdata9[15];
    char stringdata10[5];
    char stringdata11[8];
    char stringdata12[11];
    char stringdata13[18];
    char stringdata14[5];
    char stringdata15[7];
    char stringdata16[6];
    char stringdata17[9];
    char stringdata18[8];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_DataObject_t::offsetsAndSizes) + ofs), len 
static const qt_meta_stringdata_DataObject_t qt_meta_stringdata_DataObject = {
    {
        QT_MOC_LITERAL(0, 10),  // "DataObject"
        QT_MOC_LITERAL(11, 11),  // "nameChanged"
        QT_MOC_LITERAL(23, 0),  // ""
        QT_MOC_LITERAL(24, 13),  // "zrodloChanged"
        QT_MOC_LITERAL(38, 14),  // "flippedChanged"
        QT_MOC_LITERAL(53, 4),  // "flip"
        QT_MOC_LITERAL(58, 12),  // "isWinChanged"
        QT_MOC_LITERAL(71, 15),  // "colFrontChanged"
        QT_MOC_LITERAL(87, 4),  // "colF"
        QT_MOC_LITERAL(92, 14),  // "colBackChanged"
        QT_MOC_LITERAL(107, 4),  // "colB"
        QT_MOC_LITERAL(112, 7),  // "flipped"
        QT_MOC_LITERAL(120, 10),  // "setFlipped"
        QT_MOC_LITERAL(131, 17),  // "setFlippedToFalse"
        QT_MOC_LITERAL(149, 4),  // "name"
        QT_MOC_LITERAL(154, 6),  // "zrodlo"
        QT_MOC_LITERAL(161, 5),  // "isWin"
        QT_MOC_LITERAL(167, 8),  // "colFront"
        QT_MOC_LITERAL(176, 7)   // "colBack"
    },
    "DataObject",
    "nameChanged",
    "",
    "zrodloChanged",
    "flippedChanged",
    "flip",
    "isWinChanged",
    "colFrontChanged",
    "colF",
    "colBackChanged",
    "colB",
    "flipped",
    "setFlipped",
    "setFlippedToFalse",
    "name",
    "zrodlo",
    "isWin",
    "colFront",
    "colBack"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DataObject[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       6,   87, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   68,    2, 0x06,    7 /* Public */,
       3,    0,   69,    2, 0x06,    8 /* Public */,
       4,    1,   70,    2, 0x06,    9 /* Public */,
       6,    0,   73,    2, 0x06,   11 /* Public */,
       7,    1,   74,    2, 0x06,   12 /* Public */,
       9,    1,   77,    2, 0x06,   14 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
      11,    0,   80,    2, 0x02,   16 /* Public */,
      12,    1,   81,    2, 0x02,   17 /* Public */,
      13,    1,   84,    2, 0x02,   19 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,   10,

 // methods: parameters
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, QMetaType::Bool,   11,

 // properties: name, type, flags
      14, QMetaType::QString, 0x00015103, uint(0), 0,
      15, QMetaType::QString, 0x00015103, uint(1), 0,
      11, QMetaType::Bool, 0x00015103, uint(2), 0,
      16, QMetaType::QString, 0x00015103, uint(3), 0,
      17, QMetaType::QString, 0x00015103, uint(4), 0,
      18, QMetaType::QString, 0x00015103, uint(5), 0,

       0        // eod
};

void DataObject::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DataObject *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->nameChanged(); break;
        case 1: _t->zrodloChanged(); break;
        case 2: _t->flippedChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->isWinChanged(); break;
        case 4: _t->colFrontChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->colBackChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: { bool _r = _t->flipped();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 7: _t->setFlipped((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 8: _t->setFlippedToFalse((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DataObject::*)();
            if (_t _q_method = &DataObject::nameChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DataObject::*)();
            if (_t _q_method = &DataObject::zrodloChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DataObject::*)(bool );
            if (_t _q_method = &DataObject::flippedChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (DataObject::*)();
            if (_t _q_method = &DataObject::isWinChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (DataObject::*)(QString );
            if (_t _q_method = &DataObject::colFrontChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (DataObject::*)(QString );
            if (_t _q_method = &DataObject::colBackChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<DataObject *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->name(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->zrodlo(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->flipped(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->isWin(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->colFront(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->colBack(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<DataObject *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setName(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setZrodlo(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setFlipped(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setIsWin(*reinterpret_cast< QString*>(_v)); break;
        case 4: _t->setColFront(*reinterpret_cast< QString*>(_v)); break;
        case 5: _t->setColBack(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject DataObject::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_DataObject.offsetsAndSizes,
    qt_meta_data_DataObject,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_DataObject_t
, QtPrivate::TypeAndForceComplete<QString, std::true_type>, QtPrivate::TypeAndForceComplete<QString, std::true_type>, QtPrivate::TypeAndForceComplete<bool, std::true_type>, QtPrivate::TypeAndForceComplete<QString, std::true_type>, QtPrivate::TypeAndForceComplete<QString, std::true_type>, QtPrivate::TypeAndForceComplete<QString, std::true_type>, QtPrivate::TypeAndForceComplete<DataObject, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>

, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const bool &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const bool &, std::false_type>

>,
    nullptr
} };


const QMetaObject *DataObject::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DataObject::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DataObject.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int DataObject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void DataObject::nameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void DataObject::zrodloChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void DataObject::flippedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void DataObject::isWinChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void DataObject::colFrontChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void DataObject::colBackChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
