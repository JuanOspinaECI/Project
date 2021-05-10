/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_4;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_15;
    QSpacerItem *horizontalSpacer_10;
    QPushButton *exit;
    QLabel *label_18;
    QHBoxLayout *horizontalLayout_16;
    QLineEdit *txtest;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *horizontalSpacer_9;
    QSpacerItem *horizontalSpacer_7;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *txtLat;
    QLabel *label_13;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *txtLong;
    QLabel *label_14;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *txtAlt;
    QLabel *label_15;
    QHBoxLayout *horizontalLayout_11;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_4;
    QLineEdit *txtVel;
    QLabel *label_16;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_5;
    QLineEdit *txtDir;
    QLabel *label_17;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_8;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_6;
    QLineEdit *txtTemp;
    QLabel *label_11;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_7;
    QLineEdit *txtHum;
    QLabel *label_12;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_12;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label_8;
    QLineEdit *txtpreci;
    QLabel *label_10;
    QSpacerItem *horizontalSpacer_5;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_9;
    QHBoxLayout *horizontalLayout_13;
    QPushButton *prev;
    QPushButton *next;
    QPushButton *pushButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(744, 484);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_4 = new QGridLayout(centralWidget);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setSpacing(6);
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_10);

        exit = new QPushButton(centralWidget);
        exit->setObjectName(QStringLiteral("exit"));

        horizontalLayout_15->addWidget(exit);


        verticalLayout_2->addLayout(horizontalLayout_15);

        label_18 = new QLabel(centralWidget);
        label_18->setObjectName(QStringLiteral("label_18"));

        verticalLayout_2->addWidget(label_18);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setSpacing(6);
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        txtest = new QLineEdit(centralWidget);
        txtest->setObjectName(QStringLiteral("txtest"));

        horizontalLayout_16->addWidget(txtest);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_16->addItem(horizontalSpacer_8);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_16->addItem(horizontalSpacer_9);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_16->addItem(horizontalSpacer_7);


        verticalLayout_2->addLayout(horizontalLayout_16);

        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        txtLat = new QLineEdit(groupBox);
        txtLat->setObjectName(QStringLiteral("txtLat"));

        horizontalLayout->addWidget(txtLat);

        label_13 = new QLabel(groupBox);
        label_13->setObjectName(QStringLiteral("label_13"));

        horizontalLayout->addWidget(label_13);


        horizontalLayout_4->addLayout(horizontalLayout);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        txtLong = new QLineEdit(groupBox);
        txtLong->setObjectName(QStringLiteral("txtLong"));

        horizontalLayout_2->addWidget(txtLong);

        label_14 = new QLabel(groupBox);
        label_14->setObjectName(QStringLiteral("label_14"));

        horizontalLayout_2->addWidget(label_14);


        horizontalLayout_4->addLayout(horizontalLayout_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        txtAlt = new QLineEdit(groupBox);
        txtAlt->setObjectName(QStringLiteral("txtAlt"));

        horizontalLayout_3->addWidget(txtAlt);

        label_15 = new QLabel(groupBox);
        label_15->setObjectName(QStringLiteral("label_15"));

        horizontalLayout_3->addWidget(label_15);


        horizontalLayout_4->addLayout(horizontalLayout_3);


        gridLayout->addLayout(horizontalLayout_4, 1, 0, 1, 1);


        verticalLayout_2->addWidget(groupBox);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_6->addWidget(label_4);

        txtVel = new QLineEdit(groupBox_2);
        txtVel->setObjectName(QStringLiteral("txtVel"));

        horizontalLayout_6->addWidget(txtVel);

        label_16 = new QLabel(groupBox_2);
        label_16->setObjectName(QStringLiteral("label_16"));

        horizontalLayout_6->addWidget(label_16);


        horizontalLayout_5->addLayout(horizontalLayout_6);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_7->addWidget(label_5);

        txtDir = new QLineEdit(groupBox_2);
        txtDir->setObjectName(QStringLiteral("txtDir"));

        horizontalLayout_7->addWidget(txtDir);

        label_17 = new QLabel(groupBox_2);
        label_17->setObjectName(QStringLiteral("label_17"));

        horizontalLayout_7->addWidget(label_17);


        horizontalLayout_5->addLayout(horizontalLayout_7);


        gridLayout_2->addLayout(horizontalLayout_5, 0, 0, 1, 1);


        verticalLayout->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        gridLayout_3 = new QGridLayout(groupBox_3);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_6 = new QLabel(groupBox_3);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_9->addWidget(label_6);

        txtTemp = new QLineEdit(groupBox_3);
        txtTemp->setObjectName(QStringLiteral("txtTemp"));

        horizontalLayout_9->addWidget(txtTemp);

        label_11 = new QLabel(groupBox_3);
        label_11->setObjectName(QStringLiteral("label_11"));

        horizontalLayout_9->addWidget(label_11);


        horizontalLayout_8->addLayout(horizontalLayout_9);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_4);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        label_7 = new QLabel(groupBox_3);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_10->addWidget(label_7);

        txtHum = new QLineEdit(groupBox_3);
        txtHum->setObjectName(QStringLiteral("txtHum"));

        horizontalLayout_10->addWidget(txtHum);

        label_12 = new QLabel(groupBox_3);
        label_12->setObjectName(QStringLiteral("label_12"));

        horizontalLayout_10->addWidget(label_12);


        horizontalLayout_8->addLayout(horizontalLayout_10);


        gridLayout_3->addLayout(horizontalLayout_8, 0, 0, 1, 1);


        verticalLayout->addWidget(groupBox_3);


        horizontalLayout_11->addLayout(verticalLayout);


        verticalLayout_2->addLayout(horizontalLayout_11);

        groupBox_4 = new QGroupBox(centralWidget);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        verticalLayout_3 = new QVBoxLayout(groupBox_4);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_6);

        label_8 = new QLabel(groupBox_4);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_12->addWidget(label_8);

        txtpreci = new QLineEdit(groupBox_4);
        txtpreci->setObjectName(QStringLiteral("txtpreci"));

        horizontalLayout_12->addWidget(txtpreci);

        label_10 = new QLabel(groupBox_4);
        label_10->setObjectName(QStringLiteral("label_10"));

        horizontalLayout_12->addWidget(label_10);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_5);


        verticalLayout_3->addLayout(horizontalLayout_12);


        verticalLayout_2->addWidget(groupBox_4);


        gridLayout_4->addLayout(verticalLayout_2, 1, 0, 2, 1);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QStringLiteral("label_9"));

        verticalLayout_5->addWidget(label_9);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        prev = new QPushButton(centralWidget);
        prev->setObjectName(QStringLiteral("prev"));

        horizontalLayout_13->addWidget(prev);

        next = new QPushButton(centralWidget);
        next->setObjectName(QStringLiteral("next"));

        horizontalLayout_13->addWidget(next);


        verticalLayout_5->addLayout(horizontalLayout_13);


        verticalLayout_6->addLayout(verticalLayout_5);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout_6->addWidget(pushButton);


        gridLayout_4->addLayout(verticalLayout_6, 3, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 744, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Meteorol\303\263gico", Q_NULLPTR));
        exit->setText(QApplication::translate("MainWindow", "Exit", Q_NULLPTR));
        label_18->setText(QApplication::translate("MainWindow", "Estado", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindow", "GPS", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Lat:", Q_NULLPTR));
        label_13->setText(QApplication::translate("MainWindow", "\302\260.", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Lon:", Q_NULLPTR));
        label_14->setText(QApplication::translate("MainWindow", "\302\260.", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Alt:", Q_NULLPTR));
        label_15->setText(QApplication::translate("MainWindow", "msnv.", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Velocidad del viento", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "Vel:", Q_NULLPTR));
        label_16->setText(QApplication::translate("MainWindow", "m/s.", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "Dir:", Q_NULLPTR));
        label_17->setText(QApplication::translate("MainWindow", "\302\260Norte.", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "Temperatura y Humedad", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "Tem:", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "\302\260C.", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "Hum:", Q_NULLPTR));
        label_12->setText(QApplication::translate("MainWindow", "%.", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "Precipitaci\303\263n", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "precip:", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "mm.", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "Cambiar informacion", Q_NULLPTR));
        prev->setText(QApplication::translate("MainWindow", "previous", Q_NULLPTR));
        next->setText(QApplication::translate("MainWindow", "next", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "Connect to DB", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
