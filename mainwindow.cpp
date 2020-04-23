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
    connect(reset,SIGNAL(clicked()),this,SLOT(clear()));

    buttons=new QButtonGroup(this);
    for (int i=0; i<9; i++)
    {
        QPushButton * btn=new QPushButton(this);
        btn->setText("");
        btn->resize(50,50);
        btn->move(50+(i%3)*100,150+(i/3)*100);
        buttons->addButton(btn,i);
    }
    connect(buttons,SIGNAL(buttonClicked(int)),this,SLOT(move(int)));
}

void MainWindow::move(int i)
{
    if (buttons->button(i)->text()=="")
    {
        buttons->button(i)->setText("X");
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::clear()
{
    for (int i=0; i<9; i++)
    {
        buttons->button(i)->setText("");
    }
}
