/****************************************************************************
** Meta object code from reading C++ file 'expert.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../addon/doxywizard/expert.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'expert.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Expert_t {
    QByteArrayData data[15];
    char stringdata[142];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_Expert_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_Expert_t qt_meta_stringdata_Expert = {
    {
QT_MOC_LITERAL(0, 0, 6),
QT_MOC_LITERAL(1, 7, 7),
QT_MOC_LITERAL(2, 15, 0),
QT_MOC_LITERAL(3, 16, 4),
QT_MOC_LITERAL(4, 21, 13),
QT_MOC_LITERAL(5, 35, 16),
QT_MOC_LITERAL(6, 52, 17),
QT_MOC_LITERAL(7, 70, 8),
QT_MOC_LITERAL(8, 79, 12),
QT_MOC_LITERAL(9, 92, 4),
QT_MOC_LITERAL(10, 97, 7),
QT_MOC_LITERAL(11, 105, 8),
QT_MOC_LITERAL(12, 114, 6),
QT_MOC_LITERAL(13, 121, 9),
QT_MOC_LITERAL(14, 131, 9)
    },
    "Expert\0changed\0\0done\0activateTopic\0"
    "QTreeWidgetItem*\0createTopicWidget\0"
    "QWidget*\0QDomElement&\0elem\0refresh\0"
    "showHelp\0Input*\0nextTopic\0prevTopic\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Expert[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06,
       3,    0,   55,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       4,    2,   56,    2, 0x0a,
       6,    1,   61,    2, 0x0a,
      10,    0,   64,    2, 0x0a,
      11,    1,   65,    2, 0x08,
      13,    0,   68,    2, 0x08,
      14,    0,   69,    2, 0x08,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 5,    2,    2,
    0x80000000 | 7, 0x80000000 | 8,    9,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Expert::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Expert *_t = static_cast<Expert *>(_o);
        switch (_id) {
        case 0: _t->changed(); break;
        case 1: _t->done(); break;
        case 2: _t->activateTopic((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QTreeWidgetItem*(*)>(_a[2]))); break;
        case 3: { QWidget* _r = _t->createTopicWidget((*reinterpret_cast< QDomElement(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QWidget**>(_a[0]) = _r; }  break;
        case 4: _t->refresh(); break;
        case 5: _t->showHelp((*reinterpret_cast< Input*(*)>(_a[1]))); break;
        case 6: _t->nextTopic(); break;
        case 7: _t->prevTopic(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Expert::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Expert::changed)) {
                *result = 0;
            }
        }
        {
            typedef void (Expert::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Expert::done)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject Expert::staticMetaObject = {
    { &QSplitter::staticMetaObject, qt_meta_stringdata_Expert.data,
      qt_meta_data_Expert,  qt_static_metacall, 0, 0}
};


const QMetaObject *Expert::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Expert::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Expert.stringdata))
        return static_cast<void*>(const_cast< Expert*>(this));
    if (!strcmp(_clname, "DocIntf"))
        return static_cast< DocIntf*>(const_cast< Expert*>(this));
    return QSplitter::qt_metacast(_clname);
}

int Expert::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSplitter::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void Expert::changed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void Expert::done()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
