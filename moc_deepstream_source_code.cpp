/****************************************************************************
** Meta object code from reading C++ file 'deepstream_source_code.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "deepstream_source_code.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'deepstream_source_code.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Deepstream_source_code_t {
    QByteArrayData data[8];
    char stringdata0[140];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Deepstream_source_code_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Deepstream_source_code_t qt_meta_stringdata_Deepstream_source_code = {
    {
QT_MOC_LITERAL(0, 0, 22), // "Deepstream_source_code"
QT_MOC_LITERAL(1, 23, 21), // "sendDisToMainFromDssc"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 8), // "Display*"
QT_MOC_LITERAL(4, 55, 16), // "setDispRowColumn"
QT_MOC_LITERAL(5, 72, 15), // "startDeepStream"
QT_MOC_LITERAL(6, 88, 15), // "gotDivisorValue"
QT_MOC_LITERAL(7, 104, 35) // "std::vector<std::pair<int,dou..."

    },
    "Deepstream_source_code\0sendDisToMainFromDssc\0"
    "\0Display*\0setDispRowColumn\0startDeepStream\0"
    "gotDivisorValue\0std::vector<std::pair<int,double> >"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Deepstream_source_code[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    2,   37,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   42,    2, 0x0a /* Public */,
       6,    1,   43,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    2,

       0        // eod
};

void Deepstream_source_code::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Deepstream_source_code *_t = static_cast<Deepstream_source_code *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendDisToMainFromDssc((*reinterpret_cast< Display*(*)>(_a[1]))); break;
        case 1: _t->setDispRowColumn((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->startDeepStream(); break;
        case 3: _t->gotDivisorValue((*reinterpret_cast< std::vector<std::pair<int,double> >(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (Deepstream_source_code::*_t)(Display * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Deepstream_source_code::sendDisToMainFromDssc)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Deepstream_source_code::*_t)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Deepstream_source_code::setDispRowColumn)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject Deepstream_source_code::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Deepstream_source_code.data,
      qt_meta_data_Deepstream_source_code,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Deepstream_source_code::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Deepstream_source_code::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Deepstream_source_code.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Deepstream_source_code::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void Deepstream_source_code::sendDisToMainFromDssc(Display * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Deepstream_source_code::setDispRowColumn(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
