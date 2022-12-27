/****************************************************************************
** Meta object code from reading C++ file 'appmainpage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../LMS3/appmainpage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'appmainpage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_appmainpage_t {
    QByteArrayData data[8];
    char stringdata0[171];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_appmainpage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_appmainpage_t qt_meta_stringdata_appmainpage = {
    {
QT_MOC_LITERAL(0, 0, 11), // "appmainpage"
QT_MOC_LITERAL(1, 12, 26), // "on_pushButton_6_ab_clicked"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 26), // "on_pushButton_5_au_clicked"
QT_MOC_LITERAL(4, 67, 24), // "on_pushButton_vb_clicked"
QT_MOC_LITERAL(5, 92, 26), // "on_pushButton_3_sb_clicked"
QT_MOC_LITERAL(6, 119, 26), // "on_pushButton_2_vu_clicked"
QT_MOC_LITERAL(7, 146, 24) // "on_pushButton_rb_clicked"

    },
    "appmainpage\0on_pushButton_6_ab_clicked\0"
    "\0on_pushButton_5_au_clicked\0"
    "on_pushButton_vb_clicked\0"
    "on_pushButton_3_sb_clicked\0"
    "on_pushButton_2_vu_clicked\0"
    "on_pushButton_rb_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_appmainpage[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08 /* Private */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    0,   46,    2, 0x08 /* Private */,
       5,    0,   47,    2, 0x08 /* Private */,
       6,    0,   48,    2, 0x08 /* Private */,
       7,    0,   49,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void appmainpage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<appmainpage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_6_ab_clicked(); break;
        case 1: _t->on_pushButton_5_au_clicked(); break;
        case 2: _t->on_pushButton_vb_clicked(); break;
        case 3: _t->on_pushButton_3_sb_clicked(); break;
        case 4: _t->on_pushButton_2_vu_clicked(); break;
        case 5: _t->on_pushButton_rb_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject appmainpage::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_appmainpage.data,
    qt_meta_data_appmainpage,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *appmainpage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *appmainpage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_appmainpage.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int appmainpage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
