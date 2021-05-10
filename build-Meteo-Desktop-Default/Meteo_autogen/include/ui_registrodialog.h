/********************************************************************************
** Form generated from reading UI file 'registrodialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTRODIALOG_H
#define UI_REGISTRODIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_registroDialog
{
public:
    QGroupBox *groupBox;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_9;
    QLineEdit *name;
    QLabel *label_10;
    QLineEdit *las;
    QLabel *label;
    QLineEdit *user;
    QLabel *label_2;
    QLineEdit *pass;
    QLabel *label_4;
    QLineEdit *id;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_8;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *dd;
    QSpacerItem *horizontalSpacer_5;
    QLineEdit *mm;
    QSpacerItem *horizontalSpacer_6;
    QLineEdit *yyyy;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *registro;
    QPushButton *cancelar;

    void setupUi(QDialog *registroDialog)
    {
        if (registroDialog->objectName().isEmpty())
            registroDialog->setObjectName(QStringLiteral("registroDialog"));
        registroDialog->resize(391, 444);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(registroDialog->sizePolicy().hasHeightForWidth());
        registroDialog->setSizePolicy(sizePolicy);
        registroDialog->setMaximumSize(QSize(16777211, 16777215));
        registroDialog->setModal(true);
        groupBox = new QGroupBox(registroDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(0, 0, 381, 441));
        verticalLayoutWidget = new QWidget(groupBox);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 20, 381, 413));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        label_9 = new QLabel(verticalLayoutWidget);
        label_9->setObjectName(QStringLiteral("label_9"));

        verticalLayout->addWidget(label_9);

        name = new QLineEdit(verticalLayoutWidget);
        name->setObjectName(QStringLiteral("name"));

        verticalLayout->addWidget(name);

        label_10 = new QLabel(verticalLayoutWidget);
        label_10->setObjectName(QStringLiteral("label_10"));

        verticalLayout->addWidget(label_10);

        las = new QLineEdit(verticalLayoutWidget);
        las->setObjectName(QStringLiteral("las"));

        verticalLayout->addWidget(las);

        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        user = new QLineEdit(verticalLayoutWidget);
        user->setObjectName(QStringLiteral("user"));

        verticalLayout->addWidget(user);

        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        pass = new QLineEdit(verticalLayoutWidget);
        pass->setObjectName(QStringLiteral("pass"));

        verticalLayout->addWidget(pass);

        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout->addWidget(label_4);

        id = new QLineEdit(verticalLayoutWidget);
        id->setObjectName(QStringLiteral("id"));

        verticalLayout->addWidget(id);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_5 = new QLabel(verticalLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout_2->addWidget(label_5);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_7 = new QLabel(verticalLayoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_3->addWidget(label_7);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        label_6 = new QLabel(verticalLayoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_3->addWidget(label_6);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        label_8 = new QLabel(verticalLayoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_3->addWidget(label_8);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        dd = new QLineEdit(verticalLayoutWidget);
        dd->setObjectName(QStringLiteral("dd"));

        horizontalLayout_2->addWidget(dd);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);

        mm = new QLineEdit(verticalLayoutWidget);
        mm->setObjectName(QStringLiteral("mm"));

        horizontalLayout_2->addWidget(mm);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);

        yyyy = new QLineEdit(verticalLayoutWidget);
        yyyy->setObjectName(QStringLiteral("yyyy"));

        horizontalLayout_2->addWidget(yyyy);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        registro = new QPushButton(verticalLayoutWidget);
        registro->setObjectName(QStringLiteral("registro"));

        horizontalLayout_5->addWidget(registro);

        cancelar = new QPushButton(verticalLayoutWidget);
        cancelar->setObjectName(QStringLiteral("cancelar"));

        horizontalLayout_5->addWidget(cancelar);


        verticalLayout_2->addLayout(horizontalLayout_5);


        verticalLayout->addLayout(verticalLayout_2);


        retranslateUi(registroDialog);

        QMetaObject::connectSlotsByName(registroDialog);
    } // setupUi

    void retranslateUi(QDialog *registroDialog)
    {
        registroDialog->setWindowTitle(QApplication::translate("registroDialog", "Dialog", Q_NULLPTR));
        groupBox->setTitle(QString());
        label_3->setText(QApplication::translate("registroDialog", "SIGN IN", Q_NULLPTR));
        label_9->setText(QApplication::translate("registroDialog", "Name:", Q_NULLPTR));
        label_10->setText(QApplication::translate("registroDialog", "Last name:", Q_NULLPTR));
        label->setText(QApplication::translate("registroDialog", "User:", Q_NULLPTR));
        label_2->setText(QApplication::translate("registroDialog", "Password:", Q_NULLPTR));
        label_4->setText(QApplication::translate("registroDialog", "ID:", Q_NULLPTR));
        label_5->setText(QApplication::translate("registroDialog", "Birthdate: ", Q_NULLPTR));
        label_7->setText(QApplication::translate("registroDialog", "           DD", Q_NULLPTR));
        label_6->setText(QApplication::translate("registroDialog", "MM", Q_NULLPTR));
        label_8->setText(QApplication::translate("registroDialog", "YYYY         ", Q_NULLPTR));
        registro->setText(QApplication::translate("registroDialog", "Sign in", Q_NULLPTR));
        cancelar->setText(QApplication::translate("registroDialog", "Cancell", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class registroDialog: public Ui_registroDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTRODIALOG_H
