/****************************************************************************
** Meta object code from reading C++ file 'analyzedialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "dialogs/analyzedialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'analyzedialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_analyzeDialog_t {
    QByteArrayData data[14];
    char stringdata0[240];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_analyzeDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_analyzeDialog_t qt_meta_stringdata_analyzeDialog = {
    {
QT_MOC_LITERAL(0, 0, 13), // "analyzeDialog"
QT_MOC_LITERAL(1, 14, 16), // "emitAnalyzeFaces"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 17), // "emitAnalyzeObject"
QT_MOC_LITERAL(4, 50, 20), // "emitAnalyzeBlacklist"
QT_MOC_LITERAL(5, 71, 14), // "emitAnalyzeAll"
QT_MOC_LITERAL(6, 86, 10), // "QList<int>"
QT_MOC_LITERAL(7, 97, 21), // "on_addFaceBut_clicked"
QT_MOC_LITERAL(8, 119, 21), // "on_analyzeBut_clicked"
QT_MOC_LITERAL(9, 141, 20), // "on_cancelBut_clicked"
QT_MOC_LITERAL(10, 162, 26), // "on_addObjectFilter_clicked"
QT_MOC_LITERAL(11, 189, 19), // "on_blackBut_clicked"
QT_MOC_LITERAL(12, 209, 15), // "setObjectFilter"
QT_MOC_LITERAL(13, 225, 14) // "setColorFilter"

    },
    "analyzeDialog\0emitAnalyzeFaces\0\0"
    "emitAnalyzeObject\0emitAnalyzeBlacklist\0"
    "emitAnalyzeAll\0QList<int>\0"
    "on_addFaceBut_clicked\0on_analyzeBut_clicked\0"
    "on_cancelBut_clicked\0on_addObjectFilter_clicked\0"
    "on_blackBut_clicked\0setObjectFilter\0"
    "setColorFilter"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_analyzeDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,
       3,    2,   72,    2, 0x06 /* Public */,
       4,    1,   77,    2, 0x06 /* Public */,
       5,    8,   80,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   97,    2, 0x08 /* Private */,
       8,    0,   98,    2, 0x08 /* Private */,
       9,    0,   99,    2, 0x08 /* Private */,
      10,    0,  100,    2, 0x08 /* Private */,
      11,    0,  101,    2, 0x08 /* Private */,
      12,    2,  102,    2, 0x0a /* Public */,
      13,    2,  107,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QStringList,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    2,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Bool, QMetaType::QStringList, QMetaType::Bool, 0x80000000 | 6, QMetaType::QStringList, QMetaType::Bool, QMetaType::QString, QMetaType::Int,    2,    2,    2,    2,    2,    2,    2,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,

       0        // eod
};

void analyzeDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        analyzeDialog *_t = static_cast<analyzeDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->emitAnalyzeFaces((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 1: _t->emitAnalyzeObject((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 2: _t->emitAnalyzeBlacklist((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->emitAnalyzeAll((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QStringList(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< QList<int>(*)>(_a[4])),(*reinterpret_cast< QStringList(*)>(_a[5])),(*reinterpret_cast< bool(*)>(_a[6])),(*reinterpret_cast< QString(*)>(_a[7])),(*reinterpret_cast< int(*)>(_a[8]))); break;
        case 4: _t->on_addFaceBut_clicked(); break;
        case 5: _t->on_analyzeBut_clicked(); break;
        case 6: _t->on_cancelBut_clicked(); break;
        case 7: _t->on_addObjectFilter_clicked(); break;
        case 8: _t->on_blackBut_clicked(); break;
        case 9: _t->setObjectFilter((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 10: _t->setColorFilter((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 3:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<int> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (analyzeDialog::*_t)(QStringList );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&analyzeDialog::emitAnalyzeFaces)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (analyzeDialog::*_t)(int , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&analyzeDialog::emitAnalyzeObject)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (analyzeDialog::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&analyzeDialog::emitAnalyzeBlacklist)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (analyzeDialog::*_t)(bool , QStringList , bool , QList<int> , QStringList , bool , QString , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&analyzeDialog::emitAnalyzeAll)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject analyzeDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_analyzeDialog.data,
      qt_meta_data_analyzeDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *analyzeDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *analyzeDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_analyzeDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int analyzeDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void analyzeDialog::emitAnalyzeFaces(QStringList _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void analyzeDialog::emitAnalyzeObject(int _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void analyzeDialog::emitAnalyzeBlacklist(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void analyzeDialog::emitAnalyzeAll(bool _t1, QStringList _t2, bool _t3, QList<int> _t4, QStringList _t5, bool _t6, QString _t7, int _t8)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)), const_cast<void*>(reinterpret_cast<const void*>(&_t8)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
