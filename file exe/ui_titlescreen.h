/********************************************************************************
** Form generated from reading UI file 'titlescreen.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TITLESCREEN_H
#define UI_TITLESCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TitleScreen
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QComboBox *choose_size_of_board;
    QComboBox *choose_number_of_winning_char;
    QPushButton *start_game;
    QCheckBox *who_start;

    void setupUi(QMainWindow *TitleScreen)
    {
        if (TitleScreen->objectName().isEmpty())
            TitleScreen->setObjectName(QString::fromUtf8("TitleScreen"));
        TitleScreen->resize(791, 376);
        centralwidget = new QWidget(TitleScreen);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 20, 751, 51));
        QFont font;
        font.setFamilies({QString::fromUtf8("MV Boli")});
        font.setPointSize(36);
        label->setFont(font);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(280, 100, 221, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Tahoma")});
        font1.setPointSize(20);
        label_2->setFont(font1);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(50, 170, 431, 31));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Tahoma")});
        font2.setPointSize(16);
        label_3->setFont(font2);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(50, 220, 481, 31));
        label_4->setFont(font2);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(50, 270, 431, 31));
        label_5->setFont(font2);
        choose_size_of_board = new QComboBox(centralwidget);
        choose_size_of_board->addItem(QString());
        choose_size_of_board->addItem(QString());
        choose_size_of_board->addItem(QString());
        choose_size_of_board->addItem(QString());
        choose_size_of_board->addItem(QString());
        choose_size_of_board->addItem(QString());
        choose_size_of_board->addItem(QString());
        choose_size_of_board->addItem(QString());
        choose_size_of_board->setObjectName(QString::fromUtf8("choose_size_of_board"));
        choose_size_of_board->setGeometry(QRect(540, 170, 41, 31));
        choose_number_of_winning_char = new QComboBox(centralwidget);
        choose_number_of_winning_char->addItem(QString());
        choose_number_of_winning_char->addItem(QString());
        choose_number_of_winning_char->addItem(QString());
        choose_number_of_winning_char->addItem(QString());
        choose_number_of_winning_char->addItem(QString());
        choose_number_of_winning_char->addItem(QString());
        choose_number_of_winning_char->addItem(QString());
        choose_number_of_winning_char->addItem(QString());
        choose_number_of_winning_char->setObjectName(QString::fromUtf8("choose_number_of_winning_char"));
        choose_number_of_winning_char->setGeometry(QRect(540, 220, 41, 31));
        start_game = new QPushButton(centralwidget);
        start_game->setObjectName(QString::fromUtf8("start_game"));
        start_game->setGeometry(QRect(300, 320, 141, 41));
        start_game->setFont(font2);
        who_start = new QCheckBox(centralwidget);
        who_start->setObjectName(QString::fromUtf8("who_start"));
        who_start->setGeometry(QRect(540, 270, 21, 31));
        who_start->setIconSize(QSize(50, 50));
        who_start->setCheckable(true);
        who_start->setTristate(false);
        TitleScreen->setCentralWidget(centralwidget);

        retranslateUi(TitleScreen);

        QMetaObject::connectSlotsByName(TitleScreen);
    } // setupUi

    void retranslateUi(QMainWindow *TitleScreen)
    {
        TitleScreen->setWindowTitle(QCoreApplication::translate("TitleScreen", "Tic Tac Toe", nullptr));
        label->setText(QCoreApplication::translate("TitleScreen", "TIC TAC TOE WITH COMPUTER", nullptr));
        label_2->setText(QCoreApplication::translate("TitleScreen", "HELLO EVERYONE", nullptr));
        label_3->setText(QCoreApplication::translate("TitleScreen", "Select the size of the sqaure playing field:", nullptr));
        label_4->setText(QCoreApplication::translate("TitleScreen", "Select the winning number of characters in row:", nullptr));
        label_5->setText(QCoreApplication::translate("TitleScreen", "You want to start?:", nullptr));
        choose_size_of_board->setItemText(0, QCoreApplication::translate("TitleScreen", "3", nullptr));
        choose_size_of_board->setItemText(1, QCoreApplication::translate("TitleScreen", "4", nullptr));
        choose_size_of_board->setItemText(2, QCoreApplication::translate("TitleScreen", "5", nullptr));
        choose_size_of_board->setItemText(3, QCoreApplication::translate("TitleScreen", "6", nullptr));
        choose_size_of_board->setItemText(4, QCoreApplication::translate("TitleScreen", "7", nullptr));
        choose_size_of_board->setItemText(5, QCoreApplication::translate("TitleScreen", "8", nullptr));
        choose_size_of_board->setItemText(6, QCoreApplication::translate("TitleScreen", "9", nullptr));
        choose_size_of_board->setItemText(7, QCoreApplication::translate("TitleScreen", "10", nullptr));

        choose_number_of_winning_char->setItemText(0, QCoreApplication::translate("TitleScreen", "3", nullptr));
        choose_number_of_winning_char->setItemText(1, QCoreApplication::translate("TitleScreen", "4", nullptr));
        choose_number_of_winning_char->setItemText(2, QCoreApplication::translate("TitleScreen", "5", nullptr));
        choose_number_of_winning_char->setItemText(3, QCoreApplication::translate("TitleScreen", "6", nullptr));
        choose_number_of_winning_char->setItemText(4, QCoreApplication::translate("TitleScreen", "7", nullptr));
        choose_number_of_winning_char->setItemText(5, QCoreApplication::translate("TitleScreen", "8", nullptr));
        choose_number_of_winning_char->setItemText(6, QCoreApplication::translate("TitleScreen", "9", nullptr));
        choose_number_of_winning_char->setItemText(7, QCoreApplication::translate("TitleScreen", "10", nullptr));

        start_game->setText(QCoreApplication::translate("TitleScreen", "START GAME", nullptr));
        who_start->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class TitleScreen: public Ui_TitleScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TITLESCREEN_H
