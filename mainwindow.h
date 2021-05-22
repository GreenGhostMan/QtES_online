#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton1_pressed();

    void on_pushButton2_pressed();

    void on_pushButton3_pressed();

    void on_pushButton4_pressed();

    void on_pushButton5_pressed();

    void on_pushButton6_pressed();

    void on_pushButton7_pressed();

    void on_pushButton8_2_pressed();

    void on_pushButton9_pressed();

    void on_pushButton0_pressed();

    void on_pushButtonUA_pressed();

    void on_pushButtonDA_pressed();

    void on_pushButtonEsc_pressed();

    void on_pushButtonEnt_pressed();

    void on_pushButtonRA_pressed();

    void on_pushButtonLA_pressed();

    void on_pushButtonPower_pressed();

    void on_pushButtonReset_pressed();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
