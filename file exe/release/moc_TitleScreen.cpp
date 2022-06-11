/****************************************************************************
** Meta object code from reading C++ file 'TitleScreen.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../View/TitleScreen.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TitleScreen.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TitleScreen_t {
    const uint offsetsAndSize[20];
    char stringdata0[122];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_TitleScreen_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_TitleScreen_t qt_meta_stringdata_TitleScreen = {
    {
QT_MOC_LITERAL(0, 11), // "TitleScreen"
QT_MOC_LITERAL(12, 6), // "exited"
QT_MOC_LITERAL(19, 0), // ""
QT_MOC_LITERAL(20, 15), // "updateBoardSize"
QT_MOC_LITERAL(36, 4), // "size"
QT_MOC_LITERAL(41, 29), // "update_number_of_winning_char"
QT_MOC_LITERAL(71, 6), // "number"
QT_MOC_LITERAL(78, 17), // "update_who_player"
QT_MOC_LITERAL(96, 15), // "who_player_temp"
QT_MOC_LITERAL(112, 9) // "startGame"

    },
    "TitleScreen\0exited\0\0updateBoardSize\0"
    "size\0update_number_of_winning_char\0"
    "number\0update_who_player\0who_player_temp\0"
    "startGame"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TitleScreen[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    1,   45,    2, 0x0a,    2 /* Public */,
       5,    1,   48,    2, 0x0a,    4 /* Public */,
       7,    1,   51,    2, 0x0a,    6 /* Public */,
       9,    0,   54,    2, 0x0a,    8 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void,

       0        // eod
};

void TitleScreen::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TitleScreen *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->exited(); break;
        case 1: _t->updateBoardSize((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->update_number_of_winning_char((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->update_who_player((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->startGame(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TitleScreen::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TitleScreen::exited)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject TitleScreen::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_TitleScreen.offsetsAndSize,
    qt_meta_data_TitleScreen,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_TitleScreen_t
, QtPrivate::TypeAndForceComplete<TitleScreen, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *TitleScreen::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TitleScreen::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TitleScreen.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int TitleScreen::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void TitleScreen::exited()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
