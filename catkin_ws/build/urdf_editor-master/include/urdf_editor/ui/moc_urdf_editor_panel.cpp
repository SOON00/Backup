/****************************************************************************
** Meta object code from reading C++ file 'urdf_editor_panel.hh'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/urdf_editor-master/include/urdf_editor/ui/urdf_editor_panel.hh"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'urdf_editor_panel.hh' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_urdf_editor__ui__URDFEditorPanel_t {
    QByteArrayData data[17];
    char stringdata0[312];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_urdf_editor__ui__URDFEditorPanel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_urdf_editor__ui__URDFEditorPanel_t qt_meta_stringdata_urdf_editor__ui__URDFEditorPanel = {
    {
QT_MOC_LITERAL(0, 0, 32), // "urdf_editor::ui::URDFEditorPanel"
QT_MOC_LITERAL(1, 33, 16), // "NewButtonClicked"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 17), // "LoadButtonClicked"
QT_MOC_LITERAL(4, 69, 17), // "SaveButtonClicked"
QT_MOC_LITERAL(5, 87, 19), // "SaveAsButtonClicked"
QT_MOC_LITERAL(6, 107, 25), // "LinkTreeWidgetItemClicked"
QT_MOC_LITERAL(7, 133, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(8, 150, 4), // "item"
QT_MOC_LITERAL(9, 155, 6), // "column"
QT_MOC_LITERAL(10, 162, 25), // "LinkTreeWidgetItemChanged"
QT_MOC_LITERAL(11, 188, 28), // "LinkTreeContextMenuRequested"
QT_MOC_LITERAL(12, 217, 20), // "AddLinkActionToggled"
QT_MOC_LITERAL(13, 238, 23), // "RemoveLinkActionToggled"
QT_MOC_LITERAL(14, 262, 22), // "CloneLinkActionToggled"
QT_MOC_LITERAL(15, 285, 8), // "OnUpdate"
QT_MOC_LITERAL(16, 294, 17) // "LinkDialogChanged"

    },
    "urdf_editor::ui::URDFEditorPanel\0"
    "NewButtonClicked\0\0LoadButtonClicked\0"
    "SaveButtonClicked\0SaveAsButtonClicked\0"
    "LinkTreeWidgetItemClicked\0QTreeWidgetItem*\0"
    "item\0column\0LinkTreeWidgetItemChanged\0"
    "LinkTreeContextMenuRequested\0"
    "AddLinkActionToggled\0RemoveLinkActionToggled\0"
    "CloneLinkActionToggled\0OnUpdate\0"
    "LinkDialogChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_urdf_editor__ui__URDFEditorPanel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x08 /* Private */,
       3,    0,   75,    2, 0x08 /* Private */,
       4,    0,   76,    2, 0x08 /* Private */,
       5,    0,   77,    2, 0x08 /* Private */,
       6,    2,   78,    2, 0x08 /* Private */,
      10,    2,   83,    2, 0x08 /* Private */,
      11,    1,   88,    2, 0x08 /* Private */,
      12,    1,   91,    2, 0x08 /* Private */,
      13,    1,   94,    2, 0x08 /* Private */,
      14,    1,   97,    2, 0x08 /* Private */,
      15,    0,  100,    2, 0x08 /* Private */,
      16,    0,  101,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7, QMetaType::Int,    8,    9,
    QMetaType::Void, 0x80000000 | 7, QMetaType::Int,    8,    9,
    QMetaType::Void, QMetaType::QPoint,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void urdf_editor::ui::URDFEditorPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<URDFEditorPanel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->NewButtonClicked(); break;
        case 1: _t->LoadButtonClicked(); break;
        case 2: _t->SaveButtonClicked(); break;
        case 3: _t->SaveAsButtonClicked(); break;
        case 4: _t->LinkTreeWidgetItemClicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->LinkTreeWidgetItemChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->LinkTreeContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 7: _t->AddLinkActionToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->RemoveLinkActionToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->CloneLinkActionToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->OnUpdate(); break;
        case 11: _t->LinkDialogChanged(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject urdf_editor::ui::URDFEditorPanel::staticMetaObject = { {
    &rviz::Panel::staticMetaObject,
    qt_meta_stringdata_urdf_editor__ui__URDFEditorPanel.data,
    qt_meta_data_urdf_editor__ui__URDFEditorPanel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *urdf_editor::ui::URDFEditorPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *urdf_editor::ui::URDFEditorPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_urdf_editor__ui__URDFEditorPanel.stringdata0))
        return static_cast<void*>(this);
    return rviz::Panel::qt_metacast(_clname);
}

int urdf_editor::ui::URDFEditorPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = rviz::Panel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
