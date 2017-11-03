/****************************************************************************
** Meta object code from reading C++ file 'doxywizard.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../addon/doxywizard/doxywizard.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'doxywizard.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[25];
    char stringdata[275];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_MainWindow_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10),
QT_MOC_LITERAL(1, 11, 6),
QT_MOC_LITERAL(2, 18, 0),
QT_MOC_LITERAL(3, 19, 5),
QT_MOC_LITERAL(4, 25, 10),
QT_MOC_LITERAL(5, 36, 10),
QT_MOC_LITERAL(6, 47, 12),
QT_MOC_LITERAL(7, 60, 12),
QT_MOC_LITERAL(8, 73, 15),
QT_MOC_LITERAL(9, 89, 9),
QT_MOC_LITERAL(10, 99, 4),
QT_MOC_LITERAL(11, 104, 10),
QT_MOC_LITERAL(12, 115, 8),
QT_MOC_LITERAL(13, 124, 6),
QT_MOC_LITERAL(14, 131, 16),
QT_MOC_LITERAL(15, 148, 16),
QT_MOC_LITERAL(16, 165, 10),
QT_MOC_LITERAL(17, 176, 10),
QT_MOC_LITERAL(18, 187, 11),
QT_MOC_LITERAL(19, 199, 14),
QT_MOC_LITERAL(20, 214, 7),
QT_MOC_LITERAL(21, 222, 12),
QT_MOC_LITERAL(22, 235, 13),
QT_MOC_LITERAL(23, 249, 11),
QT_MOC_LITERAL(24, 261, 12)
    },
    "MainWindow\0manual\0\0about\0openConfig\0"
    "saveConfig\0saveConfigAs\0makeDefaults\0"
    "resetToDefaults\0selectTab\0quit\0"
    "openRecent\0QAction*\0action\0selectWorkingDir\0"
    "updateWorkingDir\0runDoxygen\0readStdout\0"
    "runComplete\0showHtmlOutput\0saveLog\0"
    "showSettings\0configChanged\0clearRecent\0"
    "selectRunTab\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  119,    2, 0x0a,
       3,    0,  120,    2, 0x0a,
       4,    0,  121,    2, 0x0a,
       5,    0,  122,    2, 0x0a,
       6,    0,  123,    2, 0x0a,
       7,    0,  124,    2, 0x0a,
       8,    0,  125,    2, 0x0a,
       9,    1,  126,    2, 0x0a,
      10,    0,  129,    2, 0x0a,
      11,    1,  130,    2, 0x08,
      14,    0,  133,    2, 0x08,
      15,    0,  134,    2, 0x08,
      16,    0,  135,    2, 0x08,
      17,    0,  136,    2, 0x08,
      18,    0,  137,    2, 0x08,
      19,    0,  138,    2, 0x08,
      20,    0,  139,    2, 0x08,
      21,    0,  140,    2, 0x08,
      22,    0,  141,    2, 0x08,
      23,    0,  142,    2, 0x08,
      24,    0,  143,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->manual(); break;
        case 1: _t->about(); break;
        case 2: _t->openConfig(); break;
        case 3: { bool _r = _t->saveConfig();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->saveConfigAs();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: _t->makeDefaults(); break;
        case 6: _t->resetToDefaults(); break;
        case 7: _t->selectTab((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->quit(); break;
        case 9: _t->openRecent((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 10: _t->selectWorkingDir(); break;
        case 11: _t->updateWorkingDir(); break;
        case 12: _t->runDoxygen(); break;
        case 13: _t->readStdout(); break;
        case 14: _t->runComplete(); break;
        case 15: _t->showHtmlOutput(); break;
        case 16: _t->saveLog(); break;
        case 17: _t->showSettings(); break;
        case 18: _t->configChanged(); break;
        case 19: _t->clearRecent(); break;
        case 20: _t->selectRunTab(); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, 0, 0}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 21)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 21;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
