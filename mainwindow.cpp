#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton1_pressed()
{
     ui->myTextEdit->setText(ui->myTextEdit->toPlainText()+"1");
}

void MainWindow::on_pushButton2_pressed()
{
    ui->myTextEdit->setText(ui->myTextEdit->toPlainText()+"2");
}

void MainWindow::on_pushButton3_pressed()
{
    ui->myTextEdit->setText(ui->myTextEdit->toPlainText()+"3");
}

void MainWindow::on_pushButton4_pressed()
{
    ui->myTextEdit->setText(ui->myTextEdit->toPlainText()+"4");
}

void MainWindow::on_pushButton5_pressed()
{
    ui->myTextEdit->setText(ui->myTextEdit->toPlainText()+"5");
}

void MainWindow::on_pushButton6_pressed()
{
    ui->myTextEdit->setText(ui->myTextEdit->toPlainText()+"6");
}

void MainWindow::on_pushButton7_pressed()
{
    ui->myTextEdit->setText(ui->myTextEdit->toPlainText()+"7");
}

void MainWindow::on_pushButton8_2_pressed()
{
    ui->myTextEdit->setText(ui->myTextEdit->toPlainText()+"8");
}

void MainWindow::on_pushButton9_pressed()
{
    ui->myTextEdit->setText(ui->myTextEdit->toPlainText()+"9");
}

void MainWindow::on_pushButton0_pressed()
{
    ui->myTextEdit->setText(ui->myTextEdit->toPlainText()+"0");
}

void MainWindow::on_pushButtonUA_pressed()
{

}

void MainWindow::on_pushButtonDA_pressed()
{

}

void MainWindow::on_pushButtonEsc_pressed()
{
    ui->myTextEdit->clear();
}

void MainWindow::on_pushButtonEnt_pressed()
{
    ui->myTextEdit->setText(ui->myTextEdit->toPlainText()+"\n");
}

void MainWindow::on_pushButtonRA_pressed()
{

}

void MainWindow::on_pushButtonLA_pressed()
{

}

void MainWindow::on_pushButtonPower_pressed()
{
    if( QMessageBox::Yes == QMessageBox(QMessageBox::Warning, "Shutdown!", "Are you sure to shutdown?",QMessageBox::Yes|QMessageBox::No).exec() )
    {
        system("/sbin/poweroff");
    }
}

void MainWindow::on_pushButtonReset_pressed()
{
    if( QMessageBox::Yes == QMessageBox(QMessageBox::Question, "Reboot!", "Are you sure to reboot?",QMessageBox::Yes|QMessageBox::No).exec() )
    {
        system("/sbin/reboot");
    }
}
