#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QButtonGroup>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
public slots:
    void move(int i);
    void clear();

private:
    Ui::MainWindow *ui;
    QPushButton * reset;
    QButtonGroup * buttons;
    int player=0;
};
#endif // MAINWINDOW_H
