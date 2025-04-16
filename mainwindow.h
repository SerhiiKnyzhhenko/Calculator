#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <func.h>
#include <QMainWindow>
#include <QWidget>
#include <QPushButton>
#include <QVBoxLayout>
#include <QMouseEvent>
#include <QLabel>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    Environment my_en;
    void TextAndFontsChange();
    QPoint m_dragPosition;



protected:
    void mousePressEvent(QMouseEvent *event) override
    {
        if (event->button() == Qt::LeftButton) {
            m_dragPosition = event->globalPos() - frameGeometry().topLeft();
            event->accept();
        }
    }

    void mouseMoveEvent(QMouseEvent *event) override
    {
        if (event->buttons() & Qt::LeftButton) {
            move(event->globalPos() - m_dragPosition);
            event->accept();
        }
    }

private slots:

    void on_Button_0_clicked();

    void on_Button_1_clicked();

    void on_Button_2_clicked();

    void on_Button_3_clicked();

    void on_Button_4_clicked();

    void on_Button_5_clicked();

    void on_Button_6_clicked();

    void on_Button_7_clicked();

    void on_Button_8_clicked();

    void on_Button_9_clicked();

    void on_Button_del_clicked();

    void on_Button_Result_clicked();

    void on_Button_plus_clicked();

    void on_Button_minus_clicked();

    void on_Button_mult_clicked();

    void on_Button_div_clicked();

    void on_Button_Coma_clicked();

    void on_Button_Clear_clicked();

    void on_Button_L_Bracket_clicked();

    void on_Button_R_Bracket_clicked();

    void on_Button_Exponent_clicked();

    void on_Button_exit_clicked();

    void on_Button_minimaze_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
