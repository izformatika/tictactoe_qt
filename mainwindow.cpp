#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->resize(350,450);
    reset=new QPushButton(this);
    reset->setText("Restart");
    reset->resize(150,50);
    reset->move(50,50);
}

MainWindow::~MainWindow()
{
    delete ui;
}

