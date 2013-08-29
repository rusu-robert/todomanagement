#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtGui>
#include "ui_MainWindow.h"
#include "../Controllers/ListController.h"
#include <vector>
#include "../Models/Entities/List.h"
#include <iostream>

using namespace std;

class MainWindow : public QWidget
{
    Q_OBJECT

private:
    ListController* listController;

    QLayout* mainLayout;

    void initLeftPart();

    void initRightPart();

    void alertMessage(string message);

private slots:
	void selectedListChanged();

public:
    MainWindow(ListController* listController, QWidget *parent = 0);

    ~MainWindow();
};

#endif // MAINWINDOW_H
