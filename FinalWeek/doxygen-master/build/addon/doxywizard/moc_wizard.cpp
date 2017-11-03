/****************************************************************************
** Meta object code from reading C++ file 'wizard.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../addon/doxywizard/wizard.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'wizard.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_TuneColorDialog_t {
    QByteArrayData data[6];
    char stringdata[42];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_TuneColorDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_TuneColorDialog_t qt_meta_stringdata_TuneColorDialog = {
    {
QT_MOC_LITERAL(0, 0, 15),
QT_MOC_LITERAL(1, 16, 11),
QT_MOC_LITERAL(2, 28, 0),
QT_MOC_LITERAL(3, 29, 3),
QT_MOC_LITERAL(4, 33, 3),
QT_MOC_LITERAL(5, 37, 3)
    },
    "TuneColorDialog\0updateImage\0\0hue\0sat\0"
    "val\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TuneColorDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    3,   19,    2, 0x08,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,    3,    4,    5,

       0        // eod
};

void TuneColorDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TuneColorDialog *_t = static_cast<TuneColorDialog *>(_o);
        switch (_id) {
        case 0: _t->updateImage((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObject TuneColorDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_TuneColorDialog.data,
      qt_meta_data_TuneColorDialog,  qt_static_metacall, 0, 0}
};


const QMetaObject *TuneColorDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TuneColorDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TuneColorDialog.stringdata))
        return static_cast<void*>(const_cast< TuneColorDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int TuneColorDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
    return _id;
}
struct qt_meta_stringdata_ColorPicker_t {
    QByteArrayData data[7];
    char stringdata[34];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_ColorPicker_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_ColorPicker_t qt_meta_stringdata_ColorPicker = {
    {
QT_MOC_LITERAL(0, 0, 11),
QT_MOC_LITERAL(1, 12, 6),
QT_MOC_LITERAL(2, 19, 0),
QT_MOC_LITERAL(3, 20, 1),
QT_MOC_LITERAL(4, 22, 1),
QT_MOC_LITERAL(5, 24, 1),
QT_MOC_LITERAL(6, 26, 6)
    },
    "ColorPicker\0newHsv\0\0h\0s\0g\0setCol\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ColorPicker[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   24,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       6,    3,   31,    2, 0x0a,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,    3,    4,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,    3,    4,    5,

       0        // eod
};

void ColorPicker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ColorPicker *_t = static_cast<ColorPicker *>(_o);
        switch (_id) {
        case 0: _t->newHsv((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 1: _t->setCol((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ColorPicker::*_t)(int , int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ColorPicker::newHsv)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject ColorPicker::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ColorPicker.data,
      qt_meta_data_ColorPicker,  qt_static_metacall, 0, 0}
};


const QMetaObject *ColorPicker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ColorPicker::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ColorPicker.stringdata))
        return static_cast<void*>(const_cast< ColorPicker*>(this));
    return QWidget::qt_metacast(_clname);
}

int ColorPicker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void ColorPicker::newHsv(int _t1, int _t2, int _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_Step1_t {
    QByteArrayData data[15];
    char stringdata[177];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_Step1_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_Step1_t qt_meta_stringdata_Step1 = {
    {
QT_MOC_LITERAL(0, 0, 5),
QT_MOC_LITERAL(1, 6, 15),
QT_MOC_LITERAL(2, 22, 0),
QT_MOC_LITERAL(3, 23, 20),
QT_MOC_LITERAL(4, 44, 17),
QT_MOC_LITERAL(5, 62, 14),
QT_MOC_LITERAL(6, 77, 4),
QT_MOC_LITERAL(7, 82, 15),
QT_MOC_LITERAL(8, 98, 4),
QT_MOC_LITERAL(9, 103, 16),
QT_MOC_LITERAL(10, 120, 3),
QT_MOC_LITERAL(11, 124, 12),
QT_MOC_LITERAL(12, 137, 3),
QT_MOC_LITERAL(13, 141, 17),
QT_MOC_LITERAL(14, 159, 16)
    },
    "Step1\0selectSourceDir\0\0selectDestinationDir\0"
    "selectProjectIcon\0setProjectName\0name\0"
    "setProjectBrief\0desc\0setProjectNumber\0"
    "num\0setSourceDir\0dir\0setDestinationDir\0"
    "setRecursiveScan\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Step1[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08,
       3,    0,   60,    2, 0x08,
       4,    0,   61,    2, 0x08,
       5,    1,   62,    2, 0x08,
       7,    1,   65,    2, 0x08,
       9,    1,   68,    2, 0x08,
      11,    1,   71,    2, 0x08,
      13,    1,   74,    2, 0x08,
      14,    1,   77,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

void Step1::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Step1 *_t = static_cast<Step1 *>(_o);
        switch (_id) {
        case 0: _t->selectSourceDir(); break;
        case 1: _t->selectDestinationDir(); break;
        case 2: _t->selectProjectIcon(); break;
        case 3: _t->setProjectName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->setProjectBrief((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->setProjectNumber((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->setSourceDir((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->setDestinationDir((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->setRecursiveScan((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Step1::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Step1.data,
      qt_meta_data_Step1,  qt_static_metacall, 0, 0}
};


const QMetaObject *Step1::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Step1::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Step1.stringdata))
        return static_cast<void*>(const_cast< Step1*>(this));
    return QWidget::qt_metacast(_clname);
}

int Step1::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
struct qt_meta_stringdata_Step2_t {
    QByteArrayData data[6];
    char stringdata[59];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_Step2_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_Step2_t qt_meta_stringdata_Step2 = {
    {
QT_MOC_LITERAL(0, 0, 5),
QT_MOC_LITERAL(1, 6, 11),
QT_MOC_LITERAL(2, 18, 0),
QT_MOC_LITERAL(3, 19, 6),
QT_MOC_LITERAL(4, 26, 11),
QT_MOC_LITERAL(5, 38, 19)
    },
    "Step2\0optimizeFor\0\0choice\0extractMode\0"
    "changeCrossRefState\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Step2[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x08,
       4,    1,   32,    2, 0x08,
       5,    1,   35,    2, 0x08,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,

       0        // eod
};

void Step2::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Step2 *_t = static_cast<Step2 *>(_o);
        switch (_id) {
        case 0: _t->optimizeFor((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->extractMode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->changeCrossRefState((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Step2::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Step2.data,
      qt_meta_data_Step2,  qt_static_metacall, 0, 0}
};


const QMetaObject *Step2::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Step2::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Step2.stringdata))
        return static_cast<void*>(const_cast< Step2*>(this));
    return QWidget::qt_metacast(_clname);
}

int Step2::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
struct qt_meta_stringdata_Step3_t {
    QByteArrayData data[11];
    char stringdata[145];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_Step3_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_Step3_t qt_meta_stringdata_Step3 = {
    {
QT_MOC_LITERAL(0, 0, 5),
QT_MOC_LITERAL(1, 6, 14),
QT_MOC_LITERAL(2, 21, 0),
QT_MOC_LITERAL(3, 22, 15),
QT_MOC_LITERAL(4, 38, 13),
QT_MOC_LITERAL(5, 52, 13),
QT_MOC_LITERAL(6, 66, 13),
QT_MOC_LITERAL(7, 80, 16),
QT_MOC_LITERAL(8, 97, 14),
QT_MOC_LITERAL(9, 112, 15),
QT_MOC_LITERAL(10, 128, 15)
    },
    "Step3\0setHtmlEnabled\0\0setLatexEnabled\0"
    "setManEnabled\0setRtfEnabled\0setXmlEnabled\0"
    "setSearchEnabled\0setHtmlOptions\0"
    "setLatexOptions\0tuneColorDialog\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Step3[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x08,
       3,    1,   62,    2, 0x08,
       4,    1,   65,    2, 0x08,
       5,    1,   68,    2, 0x08,
       6,    1,   71,    2, 0x08,
       7,    1,   74,    2, 0x08,
       8,    1,   77,    2, 0x08,
       9,    1,   80,    2, 0x08,
      10,    0,   83,    2, 0x08,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,

       0        // eod
};

void Step3::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Step3 *_t = static_cast<Step3 *>(_o);
        switch (_id) {
        case 0: _t->setHtmlEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->setLatexEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->setManEnabled((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->setRtfEnabled((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->setXmlEnabled((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->setSearchEnabled((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->setHtmlOptions((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->setLatexOptions((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->tuneColorDialog(); break;
        default: ;
        }
    }
}

const QMetaObject Step3::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Step3.data,
      qt_meta_data_Step3,  qt_static_metacall, 0, 0}
};


const QMetaObject *Step3::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Step3::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Step3.stringdata))
        return static_cast<void*>(const_cast< Step3*>(this));
    return QWidget::qt_metacast(_clname);
}

int Step3::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
struct qt_meta_stringdata_Step4_t {
    QByteArrayData data[11];
    char stringdata[203];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_Step4_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_Step4_t qt_meta_stringdata_Step4 = {
    {
QT_MOC_LITERAL(0, 0, 5),
QT_MOC_LITERAL(1, 6, 18),
QT_MOC_LITERAL(2, 25, 0),
QT_MOC_LITERAL(3, 26, 20),
QT_MOC_LITERAL(4, 47, 5),
QT_MOC_LITERAL(5, 53, 28),
QT_MOC_LITERAL(6, 82, 28),
QT_MOC_LITERAL(7, 111, 22),
QT_MOC_LITERAL(8, 134, 25),
QT_MOC_LITERAL(9, 160, 19),
QT_MOC_LITERAL(10, 180, 21)
    },
    "Step4\0diagramModeChanged\0\0"
    "setClassGraphEnabled\0state\0"
    "setCollaborationGraphEnabled\0"
    "setGraphicalHierarchyEnabled\0"
    "setIncludeGraphEnabled\0setIncludedByGraphEnabled\0"
    "setCallGraphEnabled\0setCallerGraphEnabled\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Step4[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x08,
       3,    1,   57,    2, 0x08,
       5,    1,   60,    2, 0x08,
       6,    1,   63,    2, 0x08,
       7,    1,   66,    2, 0x08,
       8,    1,   69,    2, 0x08,
       9,    1,   72,    2, 0x08,
      10,    1,   75,    2, 0x08,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,

       0        // eod
};

void Step4::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Step4 *_t = static_cast<Step4 *>(_o);
        switch (_id) {
        case 0: _t->diagramModeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->setClassGraphEnabled((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->setCollaborationGraphEnabled((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->setGraphicalHierarchyEnabled((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->setIncludeGraphEnabled((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->setIncludedByGraphEnabled((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->setCallGraphEnabled((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->setCallerGraphEnabled((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Step4::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Step4.data,
      qt_meta_data_Step4,  qt_static_metacall, 0, 0}
};


const QMetaObject *Step4::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Step4::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Step4.stringdata))
        return static_cast<void*>(const_cast< Step4*>(this));
    return QWidget::qt_metacast(_clname);
}

int Step4::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_Wizard_t {
    QByteArrayData data[9];
    char stringdata[78];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_Wizard_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_Wizard_t qt_meta_stringdata_Wizard = {
    {
QT_MOC_LITERAL(0, 0, 6),
QT_MOC_LITERAL(1, 7, 4),
QT_MOC_LITERAL(2, 12, 0),
QT_MOC_LITERAL(3, 13, 7),
QT_MOC_LITERAL(4, 21, 13),
QT_MOC_LITERAL(5, 35, 16),
QT_MOC_LITERAL(6, 52, 4),
QT_MOC_LITERAL(7, 57, 9),
QT_MOC_LITERAL(8, 67, 9)
    },
    "Wizard\0done\0\0refresh\0activateTopic\0"
    "QTreeWidgetItem*\0item\0nextTopic\0"
    "prevTopic\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Wizard[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       3,    0,   40,    2, 0x0a,
       4,    2,   41,    2, 0x08,
       7,    0,   46,    2, 0x08,
       8,    0,   47,    2, 0x08,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 5,    6,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Wizard::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Wizard *_t = static_cast<Wizard *>(_o);
        switch (_id) {
        case 0: _t->done(); break;
        case 1: _t->refresh(); break;
        case 2: _t->activateTopic((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QTreeWidgetItem*(*)>(_a[2]))); break;
        case 3: _t->nextTopic(); break;
        case 4: _t->prevTopic(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Wizard::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Wizard::done)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject Wizard::staticMetaObject = {
    { &QSplitter::staticMetaObject, qt_meta_stringdata_Wizard.data,
      qt_meta_data_Wizard,  qt_static_metacall, 0, 0}
};


const QMetaObject *Wizard::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Wizard::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Wizard.stringdata))
        return static_cast<void*>(const_cast< Wizard*>(this));
    return QSplitter::qt_metacast(_clname);
}

int Wizard::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSplitter::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void Wizard::done()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
