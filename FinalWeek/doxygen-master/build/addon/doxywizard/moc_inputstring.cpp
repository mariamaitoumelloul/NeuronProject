/****************************************************************************
** Meta object code from reading C++ file 'inputstring.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../addon/doxywizard/inputstring.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'inputstring.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_InputString_t {
    QByteArrayData data[10];
    char stringdata[71];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_InputString_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_InputString_t qt_meta_stringdata_InputString = {
    {
QT_MOC_LITERAL(0, 0, 11),
QT_MOC_LITERAL(1, 12, 7),
QT_MOC_LITERAL(2, 20, 0),
QT_MOC_LITERAL(3, 21, 8),
QT_MOC_LITERAL(4, 30, 6),
QT_MOC_LITERAL(5, 37, 5),
QT_MOC_LITERAL(6, 43, 8),
QT_MOC_LITERAL(7, 52, 6),
QT_MOC_LITERAL(8, 59, 5),
QT_MOC_LITERAL(9, 65, 4)
    },
    "InputString\0changed\0\0showHelp\0Input*\0"
    "reset\0setValue\0browse\0clear\0help\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_InputString[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06,
       3,    1,   50,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       5,    0,   53,    2, 0x0a,
       6,    1,   54,    2, 0x0a,
       7,    0,   57,    2, 0x08,
       8,    0,   58,    2, 0x08,
       9,    0,   59,    2, 0x08,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void InputString::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        InputString *_t = static_cast<InputString *>(_o);
        switch (_id) {
        case 0: _t->changed(); break;
        case 1: _t->showHelp((*reinterpret_cast< Input*(*)>(_a[1]))); break;
        case 2: _t->reset(); break;
        case 3: _t->setValue((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->browse(); break;
        case 5: _t->clear(); break;
        case 6: _t->help(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (InputString::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&InputString::changed)) {
                *result = 0;
            }
        }
        {
            typedef void (InputString::*_t)(Input * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&InputString::showHelp)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject InputString::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_InputString.data,
      qt_meta_data_InputString,  qt_static_metacall, 0, 0}
};


const QMetaObject *InputString::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *InputString::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_InputString.stringdata))
        return static_cast<void*>(const_cast< InputString*>(this));
    if (!strcmp(_clname, "Input"))
        return static_cast< Input*>(const_cast< InputString*>(this));
    return QObject::qt_metacast(_clname);
}

int InputString::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void InputString::changed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void InputString::showHelp(Input * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
