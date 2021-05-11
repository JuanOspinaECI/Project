/********************************************************************************
** Form generated from reading UI file 'autenticacion.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTENTICACION_H
#define UI_AUTENTICACION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_autenticacion
{
public:
    QGroupBox *groupBox;
    QWidget *gridLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_2;
    QLineEdit *usuario;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *contras;
    QRadioButton *show_pas;
    QPushButton *Ingresar;
    QPushButton *Registrarse;
    QPushButton *salirr;

    void setupUi(QWidget *autenticacion)
    {
        if (autenticacion->objectName().isEmpty())
            autenticacion->setObjectName(QStringLiteral("autenticacion"));
        autenticacion->setEnabled(true);
        autenticacion->resize(307, 231);
        groupBox = new QGroupBox(autenticacion);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(0, 0, 301, 221));
        gridLayoutWidget = new QWidget(groupBox);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(0, 20, 301, 233));
        verticalLayout = new QVBoxLayout(gridLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        usuario = new QLineEdit(gridLayoutWidget);
        usuario->setObjectName(QStringLiteral("usuario"));

        verticalLayout->addWidget(usuario);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        contras = new QLineEdit(gridLayoutWidget);
        contras->setObjectName(QStringLiteral("contras"));
        contras->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(contras);

        show_pas = new QRadioButton(gridLayoutWidget);
        show_pas->setObjectName(QStringLiteral("show_pas"));

        horizontalLayout_2->addWidget(show_pas);


        verticalLayout->addLayout(horizontalLayout_2);

        Ingresar = new QPushButton(gridLayoutWidget);
        Ingresar->setObjectName(QStringLiteral("Ingresar"));

        verticalLayout->addWidget(Ingresar);

        Registrarse = new QPushButton(gridLayoutWidget);
        Registrarse->setObjectName(QStringLiteral("Registrarse"));

        verticalLayout->addWidget(Registrarse);

        salirr = new QPushButton(gridLayoutWidget);
        salirr->setObjectName(QStringLiteral("salirr"));

        verticalLayout->addWidget(salirr);


        retranslateUi(autenticacion);

        QMetaObject::connectSlotsByName(autenticacion);
    } // setupUi

    void retranslateUi(QWidget *autenticacion)
    {
        autenticacion->setWindowTitle(QApplication::translate("autenticacion", "Form", Q_NULLPTR));
        groupBox->setTitle(QString());
        label->setText(QApplication::translate("autenticacion", "ESTACION METEREOLIGA", Q_NULLPTR));
        label_2->setText(QApplication::translate("autenticacion", "User:", Q_NULLPTR));
        label_3->setText(QApplication::translate("autenticacion", "Password:", Q_NULLPTR));
        show_pas->setText(QApplication::translate("autenticacion", "show password", Q_NULLPTR));
        Ingresar->setText(QApplication::translate("autenticacion", "Ingresar", Q_NULLPTR));
        Registrarse->setText(QApplication::translate("autenticacion", "Registrarse", Q_NULLPTR));
        salirr->setText(QApplication::translate("autenticacion", "Salir", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class autenticacion: public Ui_autenticacion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTENTICACION_H
