#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "centerframe.h"
#include <QMainWindow>

class QLabel;
class QComboBox;
class QSpinBox;
class QToolButton;

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
     MainWindow(QWidget *parent = 0);

     ~MainWindow();

     void createToolBar();
 public slots:
     void penStyleChangged(int index=0);

    void penColorChangged();
    void on_pushButton_clicked();

 private:
     CenterFrame *centerFrame;
     QLabel *styleLabel;
     QComboBox *styleComboBox;
     QLabel *widthLabel;
     QSpinBox *widthSpinBox;
     QToolButton *colorBtn;
     QToolButton *clearBtn;
     QToolButton *imgBtn;
     QToolButton *saveBtn;
 };
 #endif // MAINWINDOW_H
