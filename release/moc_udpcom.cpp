/****************************************************************************
** Meta object code from reading C++ file 'udpcom.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../udpcom.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'udpcom.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_UDPCOM_t {
    QByteArrayData data[10];
    char stringdata0[107];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UDPCOM_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UDPCOM_t qt_meta_stringdata_UDPCOM = {
    {
QT_MOC_LITERAL(0, 0, 6), // "UDPCOM"
QT_MOC_LITERAL(1, 7, 11), // "backMessage"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 11), // "sendMessage"
QT_MOC_LITERAL(4, 32, 1), // "m"
QT_MOC_LITERAL(5, 34, 7), // "tabmode"
QT_MOC_LITERAL(6, 42, 15), // "setCarIpAddress"
QT_MOC_LITERAL(7, 58, 2), // "ip"
QT_MOC_LITERAL(8, 61, 21), // "setSatelliteIpAddress"
QT_MOC_LITERAL(9, 83, 23) // "processPendingDatagrams"

    },
    "UDPCOM\0backMessage\0\0sendMessage\0m\0"
    "tabmode\0setCarIpAddress\0ip\0"
    "setSatelliteIpAddress\0processPendingDatagrams"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UDPCOM[] = {

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
       1,    2,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    2,   44,    2, 0x0a /* Public */,
       6,    1,   49,    2, 0x0a /* Public */,
       8,    1,   52,    2, 0x0a /* Public */,
       9,    0,   55,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    2,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    4,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,

       0        // eod
};

void UDPCOM::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        UDPCOM *_t = static_cast<UDPCOM *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->backMessage((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->sendMessage((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->setCarIpAddress((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->setSatelliteIpAddress((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->processPendingDatagrams(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (UDPCOM::*_t)(QString , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UDPCOM::backMessage)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject UDPCOM::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UDPCOM.data,
      qt_meta_data_UDPCOM,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *UDPCOM::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UDPCOM::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_UDPCOM.stringdata0))
        return static_cast<void*>(const_cast< UDPCOM*>(this));
    return QObject::qt_metacast(_clname);
}

int UDPCOM::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void UDPCOM::backMessage(QString _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
