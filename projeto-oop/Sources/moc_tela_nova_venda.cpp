/****************************************************************************
** Meta object code from reading C++ file 'tela_nova_venda.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../tela_nova_venda.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tela_nova_venda.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN15tela_nova_vendaE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN15tela_nova_vendaE = QtMocHelpers::stringData(
    "tela_nova_venda",
    "check",
    "",
    "limpar_campos",
    "setupTelaFinalizarVenda",
    "tela_finalizar_venda*",
    "telaFecharVenda",
    "on_lineEdit_funcionario_returnPressed",
    "on_lineEdit_codigo_returnPressed",
    "on_lineEdit_qtd_returnPressed",
    "on_lineEdit_valor_un_returnPressed",
    "on_btn_delete_clicked",
    "on_lineEdit_delete_returnPressed",
    "on_btn_limpar_clicked",
    "on_btn_confirmar_clicked"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN15tela_nova_vendaE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   80,    2, 0x08,    1 /* Private */,
       3,    0,   81,    2, 0x08,    2 /* Private */,
       4,    1,   82,    2, 0x08,    3 /* Private */,
       7,    0,   85,    2, 0x08,    5 /* Private */,
       8,    0,   86,    2, 0x08,    6 /* Private */,
       9,    0,   87,    2, 0x08,    7 /* Private */,
      10,    0,   88,    2, 0x08,    8 /* Private */,
      11,    0,   89,    2, 0x08,    9 /* Private */,
      12,    0,   90,    2, 0x08,   10 /* Private */,
      13,    0,   91,    2, 0x08,   11 /* Private */,
      14,    0,   92,    2, 0x08,   12 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
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

Q_CONSTINIT const QMetaObject tela_nova_venda::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_ZN15tela_nova_vendaE.offsetsAndSizes,
    qt_meta_data_ZN15tela_nova_vendaE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN15tela_nova_vendaE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<tela_nova_venda, std::true_type>,
        // method 'check'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'limpar_campos'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setupTelaFinalizarVenda'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<tela_finalizar_venda *, std::false_type>,
        // method 'on_lineEdit_funcionario_returnPressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_lineEdit_codigo_returnPressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_lineEdit_qtd_returnPressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_lineEdit_valor_un_returnPressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btn_delete_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_lineEdit_delete_returnPressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btn_limpar_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btn_confirmar_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void tela_nova_venda::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<tela_nova_venda *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->check(); break;
        case 1: _t->limpar_campos(); break;
        case 2: _t->setupTelaFinalizarVenda((*reinterpret_cast< std::add_pointer_t<tela_finalizar_venda*>>(_a[1]))); break;
        case 3: _t->on_lineEdit_funcionario_returnPressed(); break;
        case 4: _t->on_lineEdit_codigo_returnPressed(); break;
        case 5: _t->on_lineEdit_qtd_returnPressed(); break;
        case 6: _t->on_lineEdit_valor_un_returnPressed(); break;
        case 7: _t->on_btn_delete_clicked(); break;
        case 8: _t->on_lineEdit_delete_returnPressed(); break;
        case 9: _t->on_btn_limpar_clicked(); break;
        case 10: _t->on_btn_confirmar_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject *tela_nova_venda::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tela_nova_venda::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN15tela_nova_vendaE.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int tela_nova_venda::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
