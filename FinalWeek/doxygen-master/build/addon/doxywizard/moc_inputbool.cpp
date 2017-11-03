/****************************************************************************
** Meta object code from reading C++ file 'inputbool.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../addon/doxywizard/inputbool.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'inputbool.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_InputBool_t {
    QByteArrayData data[9];
    char stringdata[63];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_InputBool_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_InputBool_t qt_meta_stringdata_InputBool = {
    {
QT_MOC_LITERAL(0, 0, 9),
QT_MOC_LITERAL(1, 10, 7),
QT_MOC_LITERAL(2, 18, 0),
QT_MOC_LITERAL(3, 19, 6),
QT_MOC_LITERAL(4, 26, 8),
QT_MOC_LITERAL(5, 35, 6),
QT_MOC_LITERAL(6, 42, 5),
QT_MOC_LITERAL(7, 48, 8),
QT_MOC_LITERAL(8, 57, 4)
    },
    "InputBool\0changed\0\0toggle\0showHelp\0"
    "Input*\0reset\0setValue\0help\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_InputBool[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06,
       3,    2,   45,    2, 0x06,
       4,    1,   50,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       6,    0,   53,    2, 0x0a,
       7,    1,   54,    2, 0x0a,
       8,    0,   57,    2, 0x08,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    2,    2,
    QMetaType::Void, 0x80000000 | 5,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,

       0        // eod
};

void InputBool::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        InputBool *_t = static_cast<InputBool *>(_o);
        switch (_id) {
        case 0: _t->changed(); break;
        case 1: _t->toggle((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: _t->showHelp((*reinterpret_cast< Input*(*)>(_a[1]))); break;
        case 3: _t->reset(); break;
        case 4: _t->setValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->help(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (InputBool::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&InputBool::changed)) {
                *result = 0;
            }
        }
        {
            typedef void (InputBool::*_t)(QString , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&InputBool::toggle)) {
                *result = 1;
            }
        }
        {
            typedef void (InputBool::*_t)(Input * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&InputBool::showHelp)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject InputBool::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_InputBool.data,
      qt_meta_data_InputBool,  qt_static_metacall, 0, 0}
};


const QMetaObject *InputBool::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *InputBool::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_InputBool.stringdata))
        return static_cast<void*>(const_cast< InputBool*>(this));
    if (!strcmp(_clname, "Input"))
        return static_cast< Input*>(const_cast< InputBool*>(this));
    return QObject::qt_metacast(_clname);
}

int InputBool::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void InputBool::changed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void InputBool::toggle(QString _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void InputBool::showHelp(Input * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
