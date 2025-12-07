/********************************************************************************
** Form generated from reading UI file 'registerdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERDIALOG_H
#define UI_REGISTERDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_RegisterDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *titleLabel;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *usernameEdit;
    QLabel *label_2;
    QLineEdit *passwordEdit;
    QLabel *label_3;
    QLineEdit *confirmPasswordEdit;
    QPushButton *registerButton;

    void setupUi(QDialog *RegisterDialog)
    {
        if (RegisterDialog->objectName().isEmpty())
            RegisterDialog->setObjectName("RegisterDialog");
        RegisterDialog->resize(450, 350);
        RegisterDialog->setMinimumSize(QSize(450, 350));
        verticalLayout = new QVBoxLayout(RegisterDialog);
        verticalLayout->setSpacing(20);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(30, 30, 30, 30);
        titleLabel = new QLabel(RegisterDialog);
        titleLabel->setObjectName("titleLabel");
        titleLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(titleLabel);

        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        formLayout->setHorizontalSpacing(15);
        formLayout->setVerticalSpacing(15);
        label = new QLabel(RegisterDialog);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, label);

        usernameEdit = new QLineEdit(RegisterDialog);
        usernameEdit->setObjectName("usernameEdit");

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, usernameEdit);

        label_2 = new QLabel(RegisterDialog);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, label_2);

        passwordEdit = new QLineEdit(RegisterDialog);
        passwordEdit->setObjectName("passwordEdit");
        passwordEdit->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, passwordEdit);

        label_3 = new QLabel(RegisterDialog);
        label_3->setObjectName("label_3");

        formLayout->setWidget(2, QFormLayout::ItemRole::LabelRole, label_3);

        confirmPasswordEdit = new QLineEdit(RegisterDialog);
        confirmPasswordEdit->setObjectName("confirmPasswordEdit");
        confirmPasswordEdit->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(2, QFormLayout::ItemRole::FieldRole, confirmPasswordEdit);


        verticalLayout->addLayout(formLayout);

        registerButton = new QPushButton(RegisterDialog);
        registerButton->setObjectName("registerButton");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/register.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        registerButton->setIcon(icon);

        verticalLayout->addWidget(registerButton);


        retranslateUi(RegisterDialog);

        QMetaObject::connectSlotsByName(RegisterDialog);
    } // setupUi

    void retranslateUi(QDialog *RegisterDialog)
    {
        RegisterDialog->setWindowTitle(QCoreApplication::translate("RegisterDialog", "Club Management - Register", nullptr));
        titleLabel->setText(QCoreApplication::translate("RegisterDialog", "Create New Account", nullptr));
        titleLabel->setStyleSheet(QCoreApplication::translate("RegisterDialog", "font-size: 18pt; font-weight: bold; color: #10b981;", nullptr));
        label->setText(QCoreApplication::translate("RegisterDialog", "Username:", nullptr));
        label->setStyleSheet(QCoreApplication::translate("RegisterDialog", "font-weight: 600;", nullptr));
        usernameEdit->setPlaceholderText(QCoreApplication::translate("RegisterDialog", "Choose a username", nullptr));
        label_2->setText(QCoreApplication::translate("RegisterDialog", "Password:", nullptr));
        label_2->setStyleSheet(QCoreApplication::translate("RegisterDialog", "font-weight: 600;", nullptr));
        passwordEdit->setPlaceholderText(QCoreApplication::translate("RegisterDialog", "Create a strong password", nullptr));
        label_3->setText(QCoreApplication::translate("RegisterDialog", "Confirm Password:", nullptr));
        label_3->setStyleSheet(QCoreApplication::translate("RegisterDialog", "font-weight: 600;", nullptr));
        confirmPasswordEdit->setPlaceholderText(QCoreApplication::translate("RegisterDialog", "Re-enter your password", nullptr));
        registerButton->setText(QCoreApplication::translate("RegisterDialog", "Register", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegisterDialog: public Ui_RegisterDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERDIALOG_H
