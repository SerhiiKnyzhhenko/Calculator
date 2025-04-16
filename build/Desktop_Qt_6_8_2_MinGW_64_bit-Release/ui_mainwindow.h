/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *Button_1;
    QPushButton *Button_2;
    QPushButton *Button_3;
    QPushButton *Button_4;
    QPushButton *Button_5;
    QPushButton *Button_6;
    QPushButton *Button_7;
    QPushButton *Button_8;
    QPushButton *Button_9;
    QPushButton *Button_0;
    QPushButton *Button_del;
    QPushButton *Button_Result;
    QPushButton *Button_plus;
    QPushButton *Button_minus;
    QPushButton *Button_mult;
    QPushButton *Button_div;
    QPushButton *Button_Coma;
    QPushButton *Button_L_Bracket;
    QPushButton *Button_R_Bracket;
    QPushButton *Button_Exponent;
    QLabel *label_str;
    QLabel *label_res;
    QPushButton *Button_Clear;
    QLabel *label;
    QPushButton *Button_exit;
    QPushButton *Button_minimaze;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->setWindowModality(Qt::WindowModality::WindowModal);
        MainWindow->resize(331, 522);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(35, 35, 35);\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        Button_1 = new QPushButton(centralwidget);
        Button_1->setObjectName("Button_1");
        Button_1->setGeometry(QRect(2, 398, 80, 60));
        QFont font;
        font.setPointSize(15);
        Button_1->setFont(font);
        Button_1->setAutoFillBackground(false);
        Button_2 = new QPushButton(centralwidget);
        Button_2->setObjectName("Button_2");
        Button_2->setGeometry(QRect(84, 398, 80, 60));
        Button_2->setFont(font);
        Button_2->setAutoFillBackground(false);
        Button_3 = new QPushButton(centralwidget);
        Button_3->setObjectName("Button_3");
        Button_3->setGeometry(QRect(166, 398, 80, 60));
        Button_3->setFont(font);
        Button_3->setAutoFillBackground(false);
        Button_4 = new QPushButton(centralwidget);
        Button_4->setObjectName("Button_4");
        Button_4->setGeometry(QRect(2, 336, 80, 60));
        Button_4->setFont(font);
        Button_4->setAutoFillBackground(false);
        Button_5 = new QPushButton(centralwidget);
        Button_5->setObjectName("Button_5");
        Button_5->setGeometry(QRect(84, 336, 80, 60));
        Button_5->setFont(font);
        Button_5->setAutoFillBackground(false);
        Button_6 = new QPushButton(centralwidget);
        Button_6->setObjectName("Button_6");
        Button_6->setGeometry(QRect(166, 336, 80, 60));
        Button_6->setFont(font);
        Button_6->setAutoFillBackground(false);
        Button_7 = new QPushButton(centralwidget);
        Button_7->setObjectName("Button_7");
        Button_7->setGeometry(QRect(2, 274, 80, 60));
        Button_7->setFont(font);
        Button_7->setAutoFillBackground(false);
        Button_8 = new QPushButton(centralwidget);
        Button_8->setObjectName("Button_8");
        Button_8->setGeometry(QRect(84, 274, 80, 60));
        QFont font1;
        font1.setPointSize(15);
        font1.setItalic(false);
        Button_8->setFont(font1);
        Button_8->setAutoFillBackground(false);
        Button_8->setCheckable(false);
        Button_8->setAutoDefault(false);
        Button_8->setFlat(false);
        Button_9 = new QPushButton(centralwidget);
        Button_9->setObjectName("Button_9");
        Button_9->setGeometry(QRect(166, 274, 80, 60));
        Button_9->setFont(font);
        Button_9->setAutoFillBackground(false);
        Button_0 = new QPushButton(centralwidget);
        Button_0->setObjectName("Button_0");
        Button_0->setGeometry(QRect(2, 460, 162, 60));
        Button_0->setFont(font);
        Button_0->setAutoFillBackground(false);
        Button_del = new QPushButton(centralwidget);
        Button_del->setObjectName("Button_del");
        Button_del->setGeometry(QRect(249, 150, 80, 60));
        Button_del->setFont(font);
        Button_del->setAutoFillBackground(false);
        Button_del->setStyleSheet(QString::fromUtf8(""));
        Button_Result = new QPushButton(centralwidget);
        Button_Result->setObjectName("Button_Result");
        Button_Result->setGeometry(QRect(249, 460, 80, 60));
        QFont font2;
        font2.setPointSize(16);
        font2.setBold(false);
        Button_Result->setFont(font2);
        Button_Result->setAutoFillBackground(false);
        Button_Result->setStyleSheet(QString::fromUtf8(""));
        Button_Result->setCheckable(false);
        Button_plus = new QPushButton(centralwidget);
        Button_plus->setObjectName("Button_plus");
        Button_plus->setGeometry(QRect(249, 398, 80, 60));
        QFont font3;
        font3.setPointSize(16);
        Button_plus->setFont(font3);
        Button_plus->setAutoFillBackground(false);
        Button_plus->setStyleSheet(QString::fromUtf8(""));
        Button_plus->setAutoDefault(false);
        Button_plus->setFlat(false);
        Button_minus = new QPushButton(centralwidget);
        Button_minus->setObjectName("Button_minus");
        Button_minus->setGeometry(QRect(249, 336, 80, 60));
        QFont font4;
        font4.setPointSize(24);
        font4.setBold(false);
        Button_minus->setFont(font4);
        Button_minus->setAutoFillBackground(false);
        Button_minus->setStyleSheet(QString::fromUtf8(""));
        Button_mult = new QPushButton(centralwidget);
        Button_mult->setObjectName("Button_mult");
        Button_mult->setGeometry(QRect(249, 274, 80, 60));
        QFont font5;
        font5.setPointSize(12);
        Button_mult->setFont(font5);
        Button_mult->setAutoFillBackground(false);
        Button_mult->setStyleSheet(QString::fromUtf8(""));
        Button_div = new QPushButton(centralwidget);
        Button_div->setObjectName("Button_div");
        Button_div->setGeometry(QRect(249, 212, 80, 60));
        QFont font6;
        font6.setPointSize(12);
        font6.setBold(true);
        Button_div->setFont(font6);
        Button_div->setAutoFillBackground(false);
        Button_div->setStyleSheet(QString::fromUtf8(""));
        Button_Coma = new QPushButton(centralwidget);
        Button_Coma->setObjectName("Button_Coma");
        Button_Coma->setGeometry(QRect(166, 460, 80, 60));
        QFont font7;
        font7.setPointSize(20);
        Button_Coma->setFont(font7);
        Button_Coma->setAutoFillBackground(false);
        Button_Coma->setStyleSheet(QString::fromUtf8(""));
        Button_L_Bracket = new QPushButton(centralwidget);
        Button_L_Bracket->setObjectName("Button_L_Bracket");
        Button_L_Bracket->setGeometry(QRect(2, 212, 80, 60));
        QFont font8;
        font8.setPointSize(15);
        font8.setBold(false);
        Button_L_Bracket->setFont(font8);
        Button_L_Bracket->setAutoFillBackground(false);
        Button_L_Bracket->setStyleSheet(QString::fromUtf8(""));
        Button_R_Bracket = new QPushButton(centralwidget);
        Button_R_Bracket->setObjectName("Button_R_Bracket");
        Button_R_Bracket->setGeometry(QRect(84, 212, 80, 60));
        Button_R_Bracket->setFont(font);
        Button_R_Bracket->setAutoFillBackground(false);
        Button_R_Bracket->setStyleSheet(QString::fromUtf8(""));
        Button_Exponent = new QPushButton(centralwidget);
        Button_Exponent->setObjectName("Button_Exponent");
        Button_Exponent->setGeometry(QRect(166, 212, 80, 60));
        Button_Exponent->setFont(font3);
        Button_Exponent->setAutoFillBackground(false);
        Button_Exponent->setStyleSheet(QString::fromUtf8(""));
        label_str = new QLabel(centralwidget);
        label_str->setObjectName("label_str");
        label_str->setGeometry(QRect(2, 35, 327, 66));
        QFont font9;
        font9.setPointSize(30);
        font9.setBold(false);
        label_str->setFont(font9);
        label_str->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_str->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        label_str->setWordWrap(false);
        label_str->setOpenExternalLinks(false);
        label_res = new QLabel(centralwidget);
        label_res->setObjectName("label_res");
        label_res->setGeometry(QRect(2, 91, 327, 56));
        QFont font10;
        font10.setPointSize(35);
        font10.setBold(false);
        label_res->setFont(font10);
        label_res->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_res->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        label_res->setWordWrap(false);
        label_res->setOpenExternalLinks(false);
        Button_Clear = new QPushButton(centralwidget);
        Button_Clear->setObjectName("Button_Clear");
        Button_Clear->setGeometry(QRect(166, 150, 80, 60));
        Button_Clear->setFont(font);
        Button_Clear->setAutoFillBackground(false);
        Button_Clear->setStyleSheet(QString::fromUtf8(""));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 331, 32));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(35, 35, 35);\n"
"color: rgb(184, 184, 184);\n"
"padding: 5px;"));
        Button_exit = new QPushButton(centralwidget);
        Button_exit->setObjectName("Button_exit");
        Button_exit->setGeometry(QRect(284, 2, 45, 30));
        Button_exit->setFont(font);
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::ApplicationExit));
        Button_exit->setIcon(icon);
        Button_exit->setIconSize(QSize(15, 15));
        Button_minimaze = new QPushButton(centralwidget);
        Button_minimaze->setObjectName("Button_minimaze");
        Button_minimaze->setGeometry(QRect(243, 2, 40, 30));
        Button_minimaze->setFont(font7);
        Button_minimaze->setStyleSheet(QString::fromUtf8(""));
        QIcon icon1(QIcon::fromTheme(QIcon::ThemeIcon::ListRemove));
        Button_minimaze->setIcon(icon1);
        Button_minimaze->setIconSize(QSize(11, 15));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        Button_8->setDefault(false);
        Button_plus->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Calculator", nullptr));
        Button_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
#if QT_CONFIG(shortcut)
        Button_1->setShortcut(QCoreApplication::translate("MainWindow", "1", nullptr));
#endif // QT_CONFIG(shortcut)
        Button_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
#if QT_CONFIG(shortcut)
        Button_2->setShortcut(QCoreApplication::translate("MainWindow", "2", nullptr));
#endif // QT_CONFIG(shortcut)
        Button_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
#if QT_CONFIG(shortcut)
        Button_3->setShortcut(QCoreApplication::translate("MainWindow", "3", nullptr));
#endif // QT_CONFIG(shortcut)
        Button_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
#if QT_CONFIG(shortcut)
        Button_4->setShortcut(QCoreApplication::translate("MainWindow", "4", nullptr));
#endif // QT_CONFIG(shortcut)
        Button_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
#if QT_CONFIG(shortcut)
        Button_5->setShortcut(QCoreApplication::translate("MainWindow", "5", nullptr));
#endif // QT_CONFIG(shortcut)
        Button_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
#if QT_CONFIG(shortcut)
        Button_6->setShortcut(QCoreApplication::translate("MainWindow", "6", nullptr));
#endif // QT_CONFIG(shortcut)
        Button_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
#if QT_CONFIG(shortcut)
        Button_7->setShortcut(QCoreApplication::translate("MainWindow", "7", nullptr));
#endif // QT_CONFIG(shortcut)
        Button_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
#if QT_CONFIG(shortcut)
        Button_8->setShortcut(QCoreApplication::translate("MainWindow", "8", nullptr));
#endif // QT_CONFIG(shortcut)
        Button_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
#if QT_CONFIG(shortcut)
        Button_9->setShortcut(QCoreApplication::translate("MainWindow", "9", nullptr));
#endif // QT_CONFIG(shortcut)
        Button_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
#if QT_CONFIG(shortcut)
        Button_0->setShortcut(QCoreApplication::translate("MainWindow", "0", nullptr));
#endif // QT_CONFIG(shortcut)
        Button_del->setText(QCoreApplication::translate("MainWindow", "<-", nullptr));
#if QT_CONFIG(shortcut)
        Button_del->setShortcut(QCoreApplication::translate("MainWindow", "Backspace", nullptr));
#endif // QT_CONFIG(shortcut)
        Button_Result->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
#if QT_CONFIG(shortcut)
        Button_Result->setShortcut(QCoreApplication::translate("MainWindow", "Enter", nullptr));
#endif // QT_CONFIG(shortcut)
        Button_plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
#if QT_CONFIG(shortcut)
        Button_plus->setShortcut(QCoreApplication::translate("MainWindow", "+", nullptr));
#endif // QT_CONFIG(shortcut)
        Button_minus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
#if QT_CONFIG(shortcut)
        Button_minus->setShortcut(QCoreApplication::translate("MainWindow", "-", nullptr));
#endif // QT_CONFIG(shortcut)
        Button_mult->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
#if QT_CONFIG(shortcut)
        Button_mult->setShortcut(QCoreApplication::translate("MainWindow", "*", nullptr));
#endif // QT_CONFIG(shortcut)
        Button_div->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
#if QT_CONFIG(shortcut)
        Button_div->setShortcut(QCoreApplication::translate("MainWindow", "/", nullptr));
#endif // QT_CONFIG(shortcut)
        Button_Coma->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
#if QT_CONFIG(shortcut)
        Button_Coma->setShortcut(QCoreApplication::translate("MainWindow", ".", nullptr));
#endif // QT_CONFIG(shortcut)
        Button_L_Bracket->setText(QCoreApplication::translate("MainWindow", "(", nullptr));
#if QT_CONFIG(shortcut)
        Button_L_Bracket->setShortcut(QCoreApplication::translate("MainWindow", "(", nullptr));
#endif // QT_CONFIG(shortcut)
        Button_R_Bracket->setText(QCoreApplication::translate("MainWindow", ")", nullptr));
#if QT_CONFIG(shortcut)
        Button_R_Bracket->setShortcut(QCoreApplication::translate("MainWindow", ")", nullptr));
#endif // QT_CONFIG(shortcut)
        Button_Exponent->setText(QCoreApplication::translate("MainWindow", "^", nullptr));
#if QT_CONFIG(shortcut)
        Button_Exponent->setShortcut(QCoreApplication::translate("MainWindow", "^", nullptr));
#endif // QT_CONFIG(shortcut)
        label_str->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_res->setText(QString());
        Button_Clear->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
#if QT_CONFIG(shortcut)
        Button_Clear->setShortcut(QCoreApplication::translate("MainWindow", "Esc", nullptr));
#endif // QT_CONFIG(shortcut)
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><img src=\":/img/icon.png\" width=\"15\" height=\"15\"/><span style=\" font-size:11pt; font-weight:700;\">  \320\241alculator</span></p></body></html>", nullptr));
        Button_exit->setText(QString());
        Button_minimaze->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
