/****************************************************************************
** Meta object code from reading C++ file 'sync_checker.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "db_sync/sync_checker.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sync_checker.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_sync_checker_t {
    QByteArrayData data[6];
    char stringdata0[68];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_sync_checker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_sync_checker_t qt_meta_stringdata_sync_checker = {
    {
QT_MOC_LITERAL(0, 0, 12), // "sync_checker"
QT_MOC_LITERAL(1, 13, 16), // "workRequestedChT"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 13), // "finishedSyChT"
QT_MOC_LITERAL(4, 45, 8), // "updateDb"
QT_MOC_LITERAL(5, 54, 13) // "doWarkSyncChe"

    },
    "sync_checker\0workRequestedChT\0\0"
    "finishedSyChT\0updateDb\0doWarkSyncChe"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_sync_checker[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    0,   40,    2, 0x06 /* Public */,
       4,    1,   41,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    8,   44,    2, 0x0a /* Public */,
       5,    7,   61,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::Double, QMetaType::Int, QMetaType::Int, QMetaType::Int,    2,    2,    2,    2,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::Int, QMetaType::QString, QMetaType::Int,    2,    2,    2,    2,    2,    2,    2,

       0        // eod
};

void sync_checker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        sync_checker *_t = static_cast<sync_checker *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->workRequestedChT(); break;
        case 1: _t->finishedSyChT(); break;
        case 2: _t->updateDb((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->doWarkSyncChe((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6])),(*reinterpret_cast< int(*)>(_a[7])),(*reinterpret_cast< int(*)>(_a[8]))); break;
        case 4: _t->doWarkSyncChe((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< QString(*)>(_a[6])),(*reinterpret_cast< int(*)>(_a[7]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (sync_checker::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&sync_checker::workRequestedChT)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (sync_checker::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&sync_checker::finishedSyChT)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (sync_checker::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&sync_checker::updateDb)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject sync_checker::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_sync_checker.data,
      qt_meta_data_sync_checker,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *sync_checker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *sync_checker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_sync_checker.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int sync_checker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void sync_checker::workRequestedChT()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void sync_checker::finishedSyChT()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void sync_checker::updateDb(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
