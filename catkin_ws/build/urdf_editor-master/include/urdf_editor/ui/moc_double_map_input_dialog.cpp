/****************************************************************************
** Meta object code from reading C++ file 'double_map_input_dialog.hh'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/urdf_editor-master/include/urdf_editor/ui/double_map_input_dialog.hh"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'double_map_input_dialog.hh' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_urdf_editor__ui__DoubleMapInputDialog_t {
    QByteArrayData data[4];
    char stringdata0[65];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_urdf_editor__ui__DoubleMapInputDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_urdf_editor__ui__DoubleMapInputDialog_t qt_meta_stringdata_urdf_editor__ui__DoubleMapInputDialog = {
    {
QT_MOC_LITERAL(0, 0, 37), // "urdf_editor::ui::DoubleMapInp..."
QT_MOC_LITERAL(1, 38, 19), // "SpinBoxValueChanged"
QT_MOC_LITERAL(2, 58, 0), // ""
QT_MOC_LITERAL(3, 59, 5) // "value"

    },
    "urdf_editor::ui::DoubleMapInputDialog\0"
    "SpinBoxValueChanged\0\0value"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_urdf_editor__ui__DoubleMapInputDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Double,    3,

       0        // eod
};

void urdf_editor::ui::DoubleMapInputDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DoubleMapInputDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SpinBoxValueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject urdf_editor::ui::DoubleMapInputDialog::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_urdf_editor__ui__DoubleMapInputDialog.data,
    qt_meta_data_urdf_editor__ui__DoubleMapInputDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *urdf_editor::ui::DoubleMapInputDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *urdf_editor::ui::DoubleMapInputDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_urdf_editor__ui__DoubleMapInputDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int urdf_editor::ui::DoubleMapInputDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
