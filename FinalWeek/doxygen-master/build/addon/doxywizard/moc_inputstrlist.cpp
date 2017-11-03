/****************************************************************************
** Meta object code from reading C++ file 'inputstrlist.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../addon/doxywizard/inputstrlist.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'inputstrlist.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_InputStrList_t {
    QByteArrayData data[14];
    char stringdata[118];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_InputStrList_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_InputStrList_t qt_meta_stringdata_InputStrList = {
    {
QT_MOC_LITERAL(0, 0, 12),
QT_MOC_LITERAL(1, 13, 7),
QT_MOC_LITERAL(2, 21, 0),
QT_MOC_LITERAL(3, 22, 8),
QT_MOC_LITERAL(4, 31, 6),
QT_MOC_LITERAL(5, 38, 5),
QT_MOC_LITERAL(6, 44, 9),
QT_MOC_LITERAL(7, 54, 9),
QT_MOC_LITERAL(8, 64, 12),
QT_MOC_LITERAL(9, 77, 10),
QT_MOC_LITERAL(10, 88, 1),
QT_MOC_LITERAL(11, 90, 11),
QT_MOC_LITERAL(12, 102, 9),
QT_MOC_LITERAL(13, 112, 4)
    },
    "InputStrList\0changed\0\0showHelp\0Input*\0"
    "reset\0addString\0delString\0updateString\0"
    "selectText\0s\0browseFiles\0browseDir\0"
    "help\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_InputStrList[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06,
       3,    1,   65,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       5,    0,   68,    2, 0x0a,
       6,    0,   69,    2, 0x08,
       7,    0,   70,    2, 0x08,
       8,    0,   71,    2, 0x08,
       9,    1,   72,    2, 0x08,
      11,    0,   75,    2, 0x08,
      12,    0,   76,    2, 0x08,
      13,    0,   77,    2, 0x08,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void InputStrList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        InputStrList *_t = static_cast<InputStrList *>(_o);
        switch (_id) {
        case 0: _t->changed(); break;
        case 1: _t->showHelp((*reinterpret_cast< Input*(*)>(_a[1]))); break;
        case 2: _t->reset(); break;
        case 3: _t->addString(); break;
        case 4: _t->delString(); break;
        case 5: _t->updateString(); break;
        case 6: _t->selectText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->browseFiles(); break;
        case 8: _t->browseDir(); break;
        case 9: _t->help(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (InputStrList::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&InputStrList::changed)) {
                *result = 0;
            }
        }
        {
            typedef void (InputStrList::*_t)(Input * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&InputStrList::showHelp)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject InputStrList::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_InputStrList.data,
      qt_meta_data_InputStrList,  qt_static_metacall, 0, 0}
};


const QMetaObject *InputStrList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *InputStrList::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_InputStrList.stringdata))
        return static_cast<void*>(const_cast< InputStrList*>(this));
    if (!strcmp(_clname, "Input"))
        return static_cast< Input*>(const_cast< InputStrList*>(this));
    return QObject::qt_metacast(_clname);
}

int InputStrList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void InputStrList::changed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void InputStrList::showHelp(Input * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
