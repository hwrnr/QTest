#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ui_dialog.h"
#include <QApplication>
#include <QDialog>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    ui->label->setText("UU");
}

void MainWindow::on_pushButton_2_clicked()
{
    ui->label->setText("OOO");
    QDialog *dialog = new QDialog(0, 0);
    Ui_Dialog dialogUi;
    dialogUi.setupUi(dialog);

    dialog->show();
}
