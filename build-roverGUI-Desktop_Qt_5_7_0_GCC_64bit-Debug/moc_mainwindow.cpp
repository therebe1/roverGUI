/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../roverGUI/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MissionEntry_t {
    QByteArrayData data[6];
    char stringdata0[51];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MissionEntry_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MissionEntry_t qt_meta_stringdata_MissionEntry = {
    {
QT_MOC_LITERAL(0, 0, 12), // "MissionEntry"
QT_MOC_LITERAL(1, 13, 7), // "Deleted"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 6), // "Delete"
QT_MOC_LITERAL(4, 29, 15), // "UpdateArguments"
QT_MOC_LITERAL(5, 45, 5) // "index"

    },
    "MissionEntry\0Deleted\0\0Delete\0"
    "UpdateArguments\0index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MissionEntry[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   30,    2, 0x0a /* Public */,
       4,    1,   31,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,

       0        // eod
};

void MissionEntry::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MissionEntry *_t = static_cast<MissionEntry *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Deleted(); break;
        case 1: _t->Delete(); break;
        case 2: _t->UpdateArguments((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MissionEntry::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MissionEntry::Deleted)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject MissionEntry::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_MissionEntry.data,
      qt_meta_data_MissionEntry,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MissionEntry::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MissionEntry::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MissionEntry.stringdata0))
        return static_cast<void*>(const_cast< MissionEntry*>(this));
    return QObject::qt_metacast(_clname);
}

int MissionEntry::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void MissionEntry::Deleted()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[24];
    char stringdata0[441];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 18), // "on_scan_bt_clicked"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 18), // "acceptCliTelemetry"
QT_MOC_LITERAL(4, 50, 17), // "acceptCliCommands"
QT_MOC_LITERAL(5, 68, 17), // "readDataTelemetry"
QT_MOC_LITERAL(6, 86, 16), // "readDataCommands"
QT_MOC_LITERAL(7, 103, 17), // "on_clrLog_clicked"
QT_MOC_LITERAL(8, 121, 20), // "on_reboot_BT_clicked"
QT_MOC_LITERAL(9, 142, 19), // "on_inReb_PB_clicked"
QT_MOC_LITERAL(10, 162, 20), // "on_clrVel_PB_clicked"
QT_MOC_LITERAL(11, 183, 32), // "on_updateTime_SB_editingFinished"
QT_MOC_LITERAL(12, 216, 21), // "on_imuSamp_CB_toggled"
QT_MOC_LITERAL(13, 238, 7), // "checked"
QT_MOC_LITERAL(14, 246, 13), // "sockCommClose"
QT_MOC_LITERAL(15, 260, 12), // "sockTelClose"
QT_MOC_LITERAL(16, 273, 21), // "on_commReb_PB_clicked"
QT_MOC_LITERAL(17, 295, 23), // "on_commands_L_2_clicked"
QT_MOC_LITERAL(18, 319, 21), // "on_addTask_PB_clicked"
QT_MOC_LITERAL(19, 341, 22), // "on_evlogReb_PB_clicked"
QT_MOC_LITERAL(20, 364, 22), // "on_evlogUpd_PB_clicked"
QT_MOC_LITERAL(21, 387, 19), // "on_tsUpd_PB_clicked"
QT_MOC_LITERAL(22, 407, 9), // "UpdateIDs"
QT_MOC_LITERAL(23, 417, 23) // "on_schedMiss_PB_clicked"

    },
    "MainWindow\0on_scan_bt_clicked\0\0"
    "acceptCliTelemetry\0acceptCliCommands\0"
    "readDataTelemetry\0readDataCommands\0"
    "on_clrLog_clicked\0on_reboot_BT_clicked\0"
    "on_inReb_PB_clicked\0on_clrVel_PB_clicked\0"
    "on_updateTime_SB_editingFinished\0"
    "on_imuSamp_CB_toggled\0checked\0"
    "sockCommClose\0sockTelClose\0"
    "on_commReb_PB_clicked\0on_commands_L_2_clicked\0"
    "on_addTask_PB_clicked\0on_evlogReb_PB_clicked\0"
    "on_evlogUpd_PB_clicked\0on_tsUpd_PB_clicked\0"
    "UpdateIDs\0on_schedMiss_PB_clicked"
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
       1,    0,  119,    2, 0x08 /* Private */,
       3,    0,  120,    2, 0x08 /* Private */,
       4,    0,  121,    2, 0x08 /* Private */,
       5,    0,  122,    2, 0x08 /* Private */,
       6,    0,  123,    2, 0x08 /* Private */,
       7,    0,  124,    2, 0x08 /* Private */,
       8,    0,  125,    2, 0x08 /* Private */,
       9,    0,  126,    2, 0x08 /* Private */,
      10,    0,  127,    2, 0x08 /* Private */,
      11,    0,  128,    2, 0x08 /* Private */,
      12,    1,  129,    2, 0x08 /* Private */,
      14,    0,  132,    2, 0x08 /* Private */,
      15,    0,  133,    2, 0x08 /* Private */,
      16,    0,  134,    2, 0x08 /* Private */,
      17,    0,  135,    2, 0x08 /* Private */,
      18,    0,  136,    2, 0x08 /* Private */,
      19,    0,  137,    2, 0x08 /* Private */,
      20,    0,  138,    2, 0x08 /* Private */,
      21,    0,  139,    2, 0x08 /* Private */,
      22,    0,  140,    2, 0x08 /* Private */,
      23,    0,  141,    2, 0x08 /* Private */,

 // slots: parameters
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
    QMetaType::Void, QMetaType::Bool,   13,
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
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_scan_bt_clicked(); break;
        case 1: _t->acceptCliTelemetry(); break;
        case 2: _t->acceptCliCommands(); break;
        case 3: _t->readDataTelemetry(); break;
        case 4: _t->readDataCommands(); break;
        case 5: _t->on_clrLog_clicked(); break;
        case 6: _t->on_reboot_BT_clicked(); break;
        case 7: _t->on_inReb_PB_clicked(); break;
        case 8: _t->on_clrVel_PB_clicked(); break;
        case 9: _t->on_updateTime_SB_editingFinished(); break;
        case 10: _t->on_imuSamp_CB_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->sockCommClose(); break;
        case 12: _t->sockTelClose(); break;
        case 13: _t->on_commReb_PB_clicked(); break;
        case 14: _t->on_commands_L_2_clicked(); break;
        case 15: _t->on_addTask_PB_clicked(); break;
        case 16: _t->on_evlogReb_PB_clicked(); break;
        case 17: _t->on_evlogUpd_PB_clicked(); break;
        case 18: _t->on_tsUpd_PB_clicked(); break;
        case 19: _t->UpdateIDs(); break;
        case 20: _t->on_schedMiss_PB_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
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
