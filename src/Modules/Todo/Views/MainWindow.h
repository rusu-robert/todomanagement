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

    QTableWidget* tableOfItems;

    QComboBox* listsSelector;

    QLabel* itemFormNameLabel;

    QLineEdit* itemFormNameInput;

    QLabel* itemFormDescriptionLabel;

    QLineEdit* itemFormDescriptionInput;

    QPushButton* addItemButton;

    QCheckBox* itemFormIsCompleted;

    QWidget* itemForm;

    void initLeftPart();

    void initRightPart();

    void initTableOfItems();

    void initListsSelector();

    void initItemForm();

    void populateTableOfItems(List* list);

    void alertMessage(string message);

    void clearFormItem();

private slots:
	void selectedListChanged();

	void addItem();

	void removeItem(int idList, int id);

public:
    MainWindow(ListController* listController, QWidget *parent = 0);

    ~MainWindow();
};

#endif // MAINWINDOW_H
