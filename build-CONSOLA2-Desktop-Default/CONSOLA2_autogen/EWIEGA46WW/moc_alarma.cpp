/****************************************************************************
** Meta object code from reading C++ file 'alarma.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../CONSOLA2/alarma.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'alarma.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Alarma_t {
    QByteArrayData data[9];
    char stringdata0[80];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Alarma_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Alarma_t qt_meta_stringdata_Alarma = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Alarma"
QT_MOC_LITERAL(1, 7, 8), // "registro"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 6), // "string"
QT_MOC_LITERAL(4, 24, 5), // "user0"
QT_MOC_LITERAL(5, 30, 7), // "llamado"
QT_MOC_LITERAL(6, 38, 21), // "ActualizarFechaFromSO"
QT_MOC_LITERAL(7, 60, 8), // "cada5Seg"
QT_MOC_LITERAL(8, 69, 10) // "cadaMinuto"

    },
    "Alarma\0registro\0\0string\0user0\0llamado\0"
    "ActualizarFechaFromSO\0cada5Seg\0"
    "cadaMinuto"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Alarma[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x0a /* Public */,
       5,    0,   42,    2, 0x0a /* Public */,
       6,    0,   43,    2, 0x0a /* Public */,
       7,    0,   44,    2, 0x0a /* Public */,
       8,    0,   45,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Alarma::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Alarma *_t = static_cast<Alarma *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->registro((*reinterpret_cast< string(*)>(_a[1]))); break;
        case 1: _t->llamado(); break;
        case 2: _t->ActualizarFechaFromSO(); break;
        case 3: _t->cada5Seg(); break;
        case 4: _t->cadaMinuto(); break;
        default: ;
        }
    }
}

const QMetaObject Alarma::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Alarma.data,
      qt_meta_data_Alarma,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Alarma::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Alarma::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Alarma.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Alarma::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
