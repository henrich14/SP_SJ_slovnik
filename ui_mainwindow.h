/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Sun 7. Feb 22:01:37 2016
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *openLineEdit;
    QPushButton *openButton;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QRadioButton *spanishRB;
    QSpacerItem *horizontalSpacer;
    QRadioButton *slovakRB;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QLineEdit *spanish_lineEdit;
    QLabel *spanish_label;
    QVBoxLayout *verticalLayout_3;
    QLabel *correctLabel;
    QPushButton *changeButton;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *slovak_lineEdit;
    QLabel *slovak_label;
    QSpacerItem *verticalSpacer;
    QPushButton *refreshButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(613, 278);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout_4 = new QVBoxLayout(centralWidget);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        openLineEdit = new QLineEdit(centralWidget);
        openLineEdit->setObjectName(QString::fromUtf8("openLineEdit"));

        horizontalLayout_3->addWidget(openLineEdit);

        openButton = new QPushButton(centralWidget);
        openButton->setObjectName(QString::fromUtf8("openButton"));

        horizontalLayout_3->addWidget(openButton);


        verticalLayout_4->addLayout(horizontalLayout_3);

        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        spanishRB = new QRadioButton(groupBox);
        spanishRB->setObjectName(QString::fromUtf8("spanishRB"));

        horizontalLayout->addWidget(spanishRB);

        horizontalSpacer = new QSpacerItem(346, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        slovakRB = new QRadioButton(groupBox);
        slovakRB->setObjectName(QString::fromUtf8("slovakRB"));

        horizontalLayout->addWidget(slovakRB);


        verticalLayout_4->addWidget(groupBox);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        spanish_lineEdit = new QLineEdit(centralWidget);
        spanish_lineEdit->setObjectName(QString::fromUtf8("spanish_lineEdit"));
        spanish_lineEdit->setMinimumSize(QSize(250, 50));
        QFont font;
        font.setPointSize(12);
        spanish_lineEdit->setFont(font);
        spanish_lineEdit->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(spanish_lineEdit);

        spanish_label = new QLabel(centralWidget);
        spanish_label->setObjectName(QString::fromUtf8("spanish_label"));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        spanish_label->setFont(font1);
        spanish_label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(spanish_label);


        horizontalLayout_2->addLayout(verticalLayout);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        correctLabel = new QLabel(centralWidget);
        correctLabel->setObjectName(QString::fromUtf8("correctLabel"));
        QFont font2;
        font2.setPointSize(16);
        font2.setBold(true);
        font2.setWeight(75);
        correctLabel->setFont(font2);
        correctLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(correctLabel);

        changeButton = new QPushButton(centralWidget);
        changeButton->setObjectName(QString::fromUtf8("changeButton"));

        verticalLayout_3->addWidget(changeButton);


        horizontalLayout_2->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        slovak_lineEdit = new QLineEdit(centralWidget);
        slovak_lineEdit->setObjectName(QString::fromUtf8("slovak_lineEdit"));
        slovak_lineEdit->setMinimumSize(QSize(250, 50));
        slovak_lineEdit->setFont(font);
        slovak_lineEdit->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(slovak_lineEdit);

        slovak_label = new QLabel(centralWidget);
        slovak_label->setObjectName(QString::fromUtf8("slovak_label"));
        slovak_label->setFont(font1);
        slovak_label->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(slovak_label);


        horizontalLayout_2->addLayout(verticalLayout_2);


        verticalLayout_4->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 3, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);

        refreshButton = new QPushButton(centralWidget);
        refreshButton->setObjectName(QString::fromUtf8("refreshButton"));

        verticalLayout_4->addWidget(refreshButton);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 613, 20));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        openButton->setText(QApplication::translate("MainWindow", "open", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("MainWindow", "GroupBox", 0, QApplication::UnicodeUTF8));
        spanishRB->setText(QApplication::translate("MainWindow", "spanish", 0, QApplication::UnicodeUTF8));
        slovakRB->setText(QApplication::translate("MainWindow", "slovak", 0, QApplication::UnicodeUTF8));
        spanish_label->setText(QString());
        correctLabel->setText(QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
        changeButton->setText(QApplication::translate("MainWindow", "CHANGE", 0, QApplication::UnicodeUTF8));
        slovak_label->setText(QString());
        refreshButton->setText(QApplication::translate("MainWindow", "REFRESH", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
