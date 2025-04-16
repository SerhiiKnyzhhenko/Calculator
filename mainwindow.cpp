#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <func.h>
#include <iostream>
#include <QDebug>
#include <cmath>
#include <QVBoxLayout>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    this->setWindowFlags(Qt::FramelessWindowHint);

    ui->setupUi(this);

    ui->Button_exit->setStyleSheet(
        "QPushButton {"
        "   background-color: rgb(35, 35, 35);"
        "   color: rgb(255, 255, 255);"
        "   border: none;"
        "   border-radius: 4px;"
        "   padding: 5px 10px;"
        "}"
        "QPushButton:hover {"
        "   background-color: rgb(232, 17, 35);"
        "}"
        );

    ui->Button_minimaze->setStyleSheet(
        "QPushButton {"
        "   background-color: rgb(35, 35, 35);"
        "   color: rgb(255, 255, 255);"
        "   border: none;"
        "   border-radius: 4px;"
        "   padding: 5px 10px;"
        "}"
        "QPushButton:hover {"
        "   background-color: rgb(54, 54, 54);"
        "}"
        );


    ui->label_str->setStyleSheet("font-size: 30px;"
                                 "background-color: rgb(37, 37, 37);"
                                 "border-radius: 10px;"
                                 "color: rgb(255, 255, 255);"
                                 "padding: 5px 10px;");

    ui->label_res->setStyleSheet("font-size: 40px;"
                                 "background-color: rgb(37, 37, 37);"
                                 "border-radius: 10px;"
                                 "color: rgb(255, 255, 255);"
                                 "padding: 5px 15px;");

    QString setStyleSheet1 =
        "QPushButton {"
        "border-radius: 7px;"
        "background: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:1, "
        "                                stop:0 rgb(65, 65, 65), "
        "                                stop:1 rgb(55, 55, 55));"
        "color: rgb(255, 255, 255);"
        "padding: 5px 10px;"
        "font-size: 25px;"
        "}"

        "QPushButton:hover {"
        "    background-color: rgb(75, 75, 75);"
        "}"
        "QPushButton:pressed {"
        "    background-color: rgb(80, 80, 80);"
        "}";

    QString setStyleSheet2 =
        "QPushButton {"
        "border-radius: 7px;"
        "background: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:1, "
        "                                stop:0 rgb(55, 55, 55), "
        "                                stop:1 rgb(45, 45, 45));"
        "color: rgb(255, 255, 255);"
        "padding: 5px 10px;"
        "font-size: 27px;"
        "}"

        "QPushButton:hover {"
        "    background-color: rgb(65, 65, 65);"
        "}"
        "QPushButton:pressed {"
        "    background-color: rgb(80, 80, 80);"
        "}";

    ui->Button_0->setStyleSheet(setStyleSheet1);
    ui->Button_1->setStyleSheet(setStyleSheet1);
    ui->Button_2->setStyleSheet(setStyleSheet1);
    ui->Button_3->setStyleSheet(setStyleSheet1);
    ui->Button_4->setStyleSheet(setStyleSheet1);
    ui->Button_5->setStyleSheet(setStyleSheet1);
    ui->Button_6->setStyleSheet(setStyleSheet1);
    ui->Button_7->setStyleSheet(setStyleSheet1);
    ui->Button_8->setStyleSheet(setStyleSheet1);
    ui->Button_9->setStyleSheet(setStyleSheet1);
    ui->Button_Clear->setStyleSheet(setStyleSheet2);
    ui->Button_Coma->setStyleSheet(setStyleSheet2);
    ui->Button_Exponent->setStyleSheet(setStyleSheet2);
    ui->Button_L_Bracket->setStyleSheet(setStyleSheet2);
    ui->Button_Result->setStyleSheet(setStyleSheet2);
    ui->Button_del->setStyleSheet(setStyleSheet2);
    ui->Button_R_Bracket->setStyleSheet(setStyleSheet2);
    ui->Button_div->setStyleSheet(setStyleSheet2);
    ui->Button_minus->setStyleSheet(setStyleSheet2);
    ui->Button_mult->setStyleSheet(setStyleSheet2);
    ui->Button_plus->setStyleSheet(setStyleSheet2);


}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::TextAndFontsChange()
{
    if (my_en.get_str().length() > 22)
        ui->label_str->setStyleSheet("font-size: 20px;"
                                     "background-color: rgb(37, 37, 37);"
                                     "border-radius: 4px;"
                                     "color: rgb(255, 255, 255);"
                                     "padding: 5px 5px;");
    else if (my_en.get_str().length() > 19)
        ui->label_str->setStyleSheet("font-size: 25px;"
                                     "background-color: rgb(37, 37, 37);"
                                     "border-radius: 4px;"
                                     "color: rgb(255, 255, 255);"
                                     "padding: 5px 5px;");
    else
        ui->label_str->setStyleSheet("font-size: 30px;"
                                     "background-color: rgb(37, 37, 37);"
                                     "border-radius: 4px;"
                                     "color: rgb(255, 255, 255);"
                                     "padding: 5px 5px;");

    if (my_en.get_str().length() == 0)
        ui->label_str->setText("0");
    else
        ui->label_str->setText(QString::fromStdString(my_en.get_str()));

    ui->label_res->setText("");
}
void MainWindow::on_Button_0_clicked()
{
    my_en.get_str().push_back('0');
    TextAndFontsChange();
}

void MainWindow::on_Button_1_clicked()
{
    my_en.get_str().push_back('1');
    TextAndFontsChange();
}

void MainWindow::on_Button_2_clicked()
{
    my_en.get_str().push_back('2');
    TextAndFontsChange();
}

void MainWindow::on_Button_3_clicked()
{
    my_en.get_str().push_back('3');
    TextAndFontsChange();
}

void MainWindow::on_Button_4_clicked()
{
    my_en.get_str().push_back('4');
    TextAndFontsChange();
}

void MainWindow::on_Button_5_clicked()
{
    my_en.get_str().push_back('5');
    TextAndFontsChange();
}

void MainWindow::on_Button_6_clicked()
{
    my_en.get_str().push_back('6');
    TextAndFontsChange();
}

void MainWindow::on_Button_7_clicked()
{
    my_en.get_str().push_back('7');
    TextAndFontsChange();
}

void MainWindow::on_Button_8_clicked()
{
    my_en.get_str().push_back('8');
    TextAndFontsChange();
}

void MainWindow::on_Button_9_clicked()
{
    my_en.get_str().push_back('9');
    TextAndFontsChange();
}

void MainWindow::on_Button_plus_clicked()
{
    char last = my_en.get_str()[my_en.get_str().length() - 1];

    if (last =='-' || last == 'x' || last == '/' || last == '^')
        my_en.get_str().pop_back();
    if (last != '+' && my_en.get_str().length() > 0)
        my_en.get_str().push_back('+');
    TextAndFontsChange();
}

void MainWindow::on_Button_minus_clicked()
{
    char last = my_en.get_str()[my_en.get_str().length() - 1];

    if (last == '+' || last == 'x' || last == '/' || last == '^')
        my_en.get_str().pop_back();
    if (last != '-')
        my_en.get_str().push_back('-');
    TextAndFontsChange();
}

void MainWindow::on_Button_mult_clicked()
{
    char last = my_en.get_str()[my_en.get_str().length() - 1];

    if (last == '+' || last == '-' || last == '/' || last == '^')
        my_en.get_str().pop_back();
    if (last != 'x' && my_en.get_str().length() > 0)
        my_en.get_str().push_back('x');
    TextAndFontsChange();
}

void MainWindow::on_Button_div_clicked()
{
    char last = my_en.get_str()[my_en.get_str().length() - 1];

    if (last == '+' || last == 'x' || last == '-' || last == '^')
        my_en.get_str().pop_back();
    if (last != '/' && my_en.get_str().length() > 0)
        my_en.get_str().push_back('/');
    TextAndFontsChange();
}

void MainWindow::on_Button_Result_clicked()
{
    if (my_en.get_bracket() > 0)
    {
        while (my_en.get_bracket() != 0)
        {
            my_en.get_str().push_back(')');
            --my_en.get_bracket();
        }
        TextAndFontsChange();
    }

    my_en.str_parsing();

    bool res = false;
    // bool num = false;
    std::string str = my_en.get_str();
    int i = str[str.length() - 1];

    // if(str[i] == '1' || str[i] == '2' || str[i] == '3' || str[i] == '4' || str[i] == '5'
    //     || str[i] == '6' || str[i] == '7' || str[i] == '8' || str[i] == '9' || str[i] == '0' || str[i] == ')')
    //      num = true;

     if(str[i] == '+' || str[i] == '-' || str[i] == 'x' || str[i] == '/' || str[i] == '^')
    {
        my_en.get_arr_oper().pop_back();
        my_en.get_str().pop_back();
        if (my_en.get_str().length() == 0)
         ui->label_str->setText("0");
        else
         ui->label_str->setText(QString::fromStdString(my_en.get_str()));
    }


    size_t pos = str.find('=');

    if (pos != std::string::npos)
        res = true;

    if (res == false && my_en.get_arr_num().size() > 0)
        my_en.get_str().push_back('=');


    my_en.str_parsing();
    my_en.get_res() = my_en.result();
    if (hasFractionalPart(my_en.get_res()) == true)
        ui->label_res->setText(QString::number(my_en.get_res(), 'f', 2));
    else
        ui->label_res->setText(QString::number(my_en.get_res(), 'f', 0));

    if  (my_en.get_res() > 100000000000.00)
        ui->label_res->setStyleSheet("font-size: 30px;"
                                     "background-color: rgb(37, 37, 37);"
                                     "border-radius: 4px;"
                                     "color: rgb(255, 255, 255);"
                                     "padding: 5px 10px;");
    else
        ui->label_res->setStyleSheet("font-size: 40px;"
                                     "background-color: rgb(37, 37, 37);"
                                     "border-radius: 4px;"
                                     "color: rgb(255, 255, 255);"
                                     "padding: 5px 10px;");

}

void MainWindow::on_Button_del_clicked()
{
    if(my_en.get_str()[my_en.get_str().length() - 1] == ')')
        ++my_en.get_bracket();
    if(my_en.get_str()[my_en.get_str().length() - 1] == '(')
        --my_en.get_bracket();
    if (my_en.get_str().length() != 0)
        my_en.get_str().pop_back();

    TextAndFontsChange();
}

void MainWindow::on_Button_Coma_clicked()
{
    bool coma = false;
    bool double_coma = false;
    std::string str = my_en.get_str();
    for (int i = str.length() - 1; i > -1; --i)
    {
        if(str[i] == '+' || str[i] == '-' || str[i] == 'x' || str[i] == '/' || str[i] == '^')
        {
            break;
        }

        if(str[i] == '.' && coma == false)
        {
            coma = true;
        }

        if(str[i] == '.' && coma == true)
        {
            double_coma = true;
            break;
        }
    }
    if (double_coma == false)
        my_en.get_str().push_back('.');
    TextAndFontsChange();
}

void MainWindow::on_Button_Clear_clicked()
{
    my_en.get_str().clear();
    TextAndFontsChange();
}


void MainWindow::on_Button_L_Bracket_clicked()
{
    bool num = false;
    std::string str = my_en.get_str();
    int i = str.length() - 1;

    my_en.get_bracket() += 1;
    if(str[i] == '+' || str[i] == '-' || str[i] == 'x' || str[i] == '/' || str[i] == '^')
        my_en.get_str().push_back('(');
    else
    {
        if (str.length() > 0)
            my_en.get_str().push_back('x');
        my_en.get_str().push_back('(');
    }
    TextAndFontsChange();
}


void MainWindow::on_Button_R_Bracket_clicked()
{
    if (my_en.get_bracket() > 0)
    {
        my_en.get_bracket() -= 1;
        my_en.get_str().push_back(')');
    }
    TextAndFontsChange();
}


void MainWindow::on_Button_Exponent_clicked()
{
    char last = my_en.get_str()[my_en.get_str().length() - 1];

    if (last =='-' || last == 'x' || last == '/' || last == '+')
        my_en.get_str().pop_back();

    my_en.get_str().push_back('^');
    TextAndFontsChange();
}


void MainWindow::on_Button_exit_clicked()
{
    qApp->quit();
}


void MainWindow::on_Button_minimaze_clicked()
{
    this->showMinimized();
}



