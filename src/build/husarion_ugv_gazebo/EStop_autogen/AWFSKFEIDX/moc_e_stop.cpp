/****************************************************************************
** Meta object code from reading C++ file 'e_stop.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../husarion_ugv_ros/husarion_ugv_gazebo/include/husarion_ugv_gazebo/gui/e_stop.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'e_stop.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_husarion_ugv_gazebo__EStop_t {
    QByteArrayData data[9];
    char stringdata0[105];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_husarion_ugv_gazebo__EStop_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_husarion_ugv_gazebo__EStop_t qt_meta_stringdata_husarion_ugv_gazebo__EStop = {
    {
QT_MOC_LITERAL(0, 0, 26), // "husarion_ugv_gazebo::EStop"
QT_MOC_LITERAL(1, 27, 13), // "OnEStopChange"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 17), // "OnNamespaceChange"
QT_MOC_LITERAL(4, 60, 13), // "ButtonPressed"
QT_MOC_LITERAL(5, 74, 7), // "checked"
QT_MOC_LITERAL(6, 82, 12), // "SetNamespace"
QT_MOC_LITERAL(7, 95, 2), // "ns"
QT_MOC_LITERAL(8, 98, 6) // "e_stop"

    },
    "husarion_ugv_gazebo::EStop\0OnEStopChange\0"
    "\0OnNamespaceChange\0ButtonPressed\0"
    "checked\0SetNamespace\0ns\0e_stop"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_husarion_ugv_gazebo__EStop[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       2,   42, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       4,    1,   36,    2, 0x02 /* Public */,
       6,    1,   39,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::QString,    7,

 // properties: name, type, flags
       8, QMetaType::Bool, 0x00495003,
       7, QMetaType::QString, 0x00495003,

 // properties: notify_signal_id
       0,
       1,

       0        // eod
};

void husarion_ugv_gazebo::EStop::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<EStop *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->OnEStopChange(); break;
        case 1: _t->OnNamespaceChange(); break;
        case 2: _t->ButtonPressed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->SetNamespace((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (EStop::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EStop::OnEStopChange)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (EStop::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EStop::OnNamespaceChange)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<EStop *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->IsEStop(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->GetNamespace(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<EStop *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->SetEStop(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->SetNamespace(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject husarion_ugv_gazebo::EStop::staticMetaObject = { {
    QMetaObject::SuperData::link<gz::gui::Plugin::staticMetaObject>(),
    qt_meta_stringdata_husarion_ugv_gazebo__EStop.data,
    qt_meta_data_husarion_ugv_gazebo__EStop,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *husarion_ugv_gazebo::EStop::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *husarion_ugv_gazebo::EStop::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_husarion_ugv_gazebo__EStop.stringdata0))
        return static_cast<void*>(this);
    return gz::gui::Plugin::qt_metacast(_clname);
}

int husarion_ugv_gazebo::EStop::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = gz::gui::Plugin::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void husarion_ugv_gazebo::EStop::OnEStopChange()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void husarion_ugv_gazebo::EStop::OnNamespaceChange()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
