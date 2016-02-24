/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindowClass
{
public:
    QAction *actionNewSketch;
    QAction *actionLoadSketch;
    QAction *actionSaveSketch;
    QAction *actionSaveImage;
    QAction *actionExit;
    QAction *actionRandomGeneration;
    QAction *actionMCTS;
    QAction *actionOptions;
    QAction *actionPenColorBranch;
    QAction *actionPenColorLeaf;
    QAction *actionPenWidth20;
    QAction *actionPenWidth10;
    QAction *actionPenWidth5;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuGrammar;
    QMenu *menuPen;
    QMenu *menuColor;
    QMenu *menuWidth;
    QMenu *menuWindow;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindowClass)
    {
        if (MainWindowClass->objectName().isEmpty())
            MainWindowClass->setObjectName(QStringLiteral("MainWindowClass"));
        MainWindowClass->resize(600, 600);
        actionNewSketch = new QAction(MainWindowClass);
        actionNewSketch->setObjectName(QStringLiteral("actionNewSketch"));
        actionLoadSketch = new QAction(MainWindowClass);
        actionLoadSketch->setObjectName(QStringLiteral("actionLoadSketch"));
        actionSaveSketch = new QAction(MainWindowClass);
        actionSaveSketch->setObjectName(QStringLiteral("actionSaveSketch"));
        actionSaveImage = new QAction(MainWindowClass);
        actionSaveImage->setObjectName(QStringLiteral("actionSaveImage"));
        actionExit = new QAction(MainWindowClass);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionRandomGeneration = new QAction(MainWindowClass);
        actionRandomGeneration->setObjectName(QStringLiteral("actionRandomGeneration"));
        actionMCTS = new QAction(MainWindowClass);
        actionMCTS->setObjectName(QStringLiteral("actionMCTS"));
        actionOptions = new QAction(MainWindowClass);
        actionOptions->setObjectName(QStringLiteral("actionOptions"));
        actionPenColorBranch = new QAction(MainWindowClass);
        actionPenColorBranch->setObjectName(QStringLiteral("actionPenColorBranch"));
        actionPenColorLeaf = new QAction(MainWindowClass);
        actionPenColorLeaf->setObjectName(QStringLiteral("actionPenColorLeaf"));
        actionPenWidth20 = new QAction(MainWindowClass);
        actionPenWidth20->setObjectName(QStringLiteral("actionPenWidth20"));
        actionPenWidth10 = new QAction(MainWindowClass);
        actionPenWidth10->setObjectName(QStringLiteral("actionPenWidth10"));
        actionPenWidth5 = new QAction(MainWindowClass);
        actionPenWidth5->setObjectName(QStringLiteral("actionPenWidth5"));
        centralWidget = new QWidget(MainWindowClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        MainWindowClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindowClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuGrammar = new QMenu(menuBar);
        menuGrammar->setObjectName(QStringLiteral("menuGrammar"));
        menuPen = new QMenu(menuBar);
        menuPen->setObjectName(QStringLiteral("menuPen"));
        menuColor = new QMenu(menuPen);
        menuColor->setObjectName(QStringLiteral("menuColor"));
        menuWidth = new QMenu(menuPen);
        menuWidth->setObjectName(QStringLiteral("menuWidth"));
        menuWindow = new QMenu(menuBar);
        menuWindow->setObjectName(QStringLiteral("menuWindow"));
        MainWindowClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindowClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindowClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindowClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindowClass->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuGrammar->menuAction());
        menuBar->addAction(menuPen->menuAction());
        menuBar->addAction(menuWindow->menuAction());
        menuFile->addAction(actionNewSketch);
        menuFile->addAction(actionLoadSketch);
        menuFile->addAction(actionSaveSketch);
        menuFile->addSeparator();
        menuFile->addAction(actionSaveImage);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuGrammar->addAction(actionRandomGeneration);
        menuGrammar->addAction(actionMCTS);
        menuPen->addAction(menuColor->menuAction());
        menuPen->addAction(menuWidth->menuAction());
        menuColor->addAction(actionPenColorBranch);
        menuColor->addAction(actionPenColorLeaf);
        menuWidth->addAction(actionPenWidth20);
        menuWidth->addAction(actionPenWidth10);
        menuWidth->addAction(actionPenWidth5);
        menuWindow->addAction(actionOptions);

        retranslateUi(MainWindowClass);

        QMetaObject::connectSlotsByName(MainWindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowClass)
    {
        MainWindowClass->setWindowTitle(QApplication::translate("MainWindowClass", "MainWindow", 0));
        actionNewSketch->setText(QApplication::translate("MainWindowClass", "New Sketch", 0));
        actionLoadSketch->setText(QApplication::translate("MainWindowClass", "Load Sketch", 0));
        actionSaveSketch->setText(QApplication::translate("MainWindowClass", "Save Sketch", 0));
        actionSaveImage->setText(QApplication::translate("MainWindowClass", "Save Image", 0));
        actionExit->setText(QApplication::translate("MainWindowClass", "Exit", 0));
        actionRandomGeneration->setText(QApplication::translate("MainWindowClass", "Random Generation", 0));
        actionMCTS->setText(QApplication::translate("MainWindowClass", "MCTS", 0));
        actionOptions->setText(QApplication::translate("MainWindowClass", "Options", 0));
        actionPenColorBranch->setText(QApplication::translate("MainWindowClass", "Branch", 0));
        actionPenColorLeaf->setText(QApplication::translate("MainWindowClass", "Leaf", 0));
        actionPenWidth20->setText(QApplication::translate("MainWindowClass", "20", 0));
        actionPenWidth10->setText(QApplication::translate("MainWindowClass", "10", 0));
        actionPenWidth5->setText(QApplication::translate("MainWindowClass", "5", 0));
        menuFile->setTitle(QApplication::translate("MainWindowClass", "File", 0));
        menuGrammar->setTitle(QApplication::translate("MainWindowClass", "Grammar", 0));
        menuPen->setTitle(QApplication::translate("MainWindowClass", "Pen", 0));
        menuColor->setTitle(QApplication::translate("MainWindowClass", "Color", 0));
        menuWidth->setTitle(QApplication::translate("MainWindowClass", "Width", 0));
        menuWindow->setTitle(QApplication::translate("MainWindowClass", "Window", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindowClass: public Ui_MainWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
