/********************************************************************************
** Form generated from reading UI file 'logindialog.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDIALOG_H
#define UI_LOGINDIALOG_H

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

class Ui_LoginDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *titleLabel;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *usernameEdit;
    QLabel *label_2;
    QLineEdit *passwordEdit;
    QPushButton *loginButton;
    QPushButton *registerButton;

    void setupUi(QDialog *LoginDialog)
    {
        if (LoginDialog->objectName().isEmpty())
            LoginDialog->setObjectName("LoginDialog");
        LoginDialog->resize(450, 280);
        LoginDialog->setMinimumSize(QSize(450, 280));
        verticalLayout = new QVBoxLayout(LoginDialog);
        verticalLayout->setSpacing(20);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(30, 30, 30, 30);
        titleLabel = new QLabel(LoginDialog);
        titleLabel->setObjectName("titleLabel");
        titleLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(titleLabel);

        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        formLayout->setHorizontalSpacing(15);
        formLayout->setVerticalSpacing(15);
        label = new QLabel(LoginDialog);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, label);

        usernameEdit = new QLineEdit(LoginDialog);
        usernameEdit->setObjectName("usernameEdit");

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, usernameEdit);

        label_2 = new QLabel(LoginDialog);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, label_2);

        passwordEdit = new QLineEdit(LoginDialog);
        passwordEdit->setObjectName("passwordEdit");
        passwordEdit->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, passwordEdit);


        verticalLayout->addLayout(formLayout);

        loginButton = new QPushButton(LoginDialog);
        loginButton->setObjectName("loginButton");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/login.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        loginButton->setIcon(icon);

        verticalLayout->addWidget(loginButton);

        registerButton = new QPushButton(LoginDialog);
        registerButton->setObjectName("registerButton");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/register.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        registerButton->setIcon(icon1);

        verticalLayout->addWidget(registerButton);


        retranslateUi(LoginDialog);

        QMetaObject::connectSlotsByName(LoginDialog);
    } // setupUi

    void retranslateUi(QDialog *LoginDialog)
    {
        LoginDialog->setWindowTitle(QCoreApplication::translate("LoginDialog", "Club Management - Login", nullptr));
        titleLabel->setText(QCoreApplication::translate("LoginDialog", "Welcome Back!", nullptr));
        titleLabel->setStyleSheet(QCoreApplication::translate("LoginDialog", "font-size: 18pt; font-weight: bold; color: #6366f1;", nullptr));
        label->setText(QCoreApplication::translate("LoginDialog", "Username:", nullptr));
        label->setStyleSheet(QCoreApplication::translate("LoginDialog", "font-weight: 600;", nullptr));
        usernameEdit->setPlaceholderText(QCoreApplication::translate("LoginDialog", "Enter your username", nullptr));
        label_2->setText(QCoreApplication::translate("LoginDialog", "Password:", nullptr));
        label_2->setStyleSheet(QCoreApplication::translate("LoginDialog", "font-weight: 600;", nullptr));
        passwordEdit->setPlaceholderText(QCoreApplication::translate("LoginDialog", "Enter your password", nullptr));
        loginButton->setText(QCoreApplication::translate("LoginDialog", "Login", nullptr));
        registerButton->setText(QCoreApplication::translate("LoginDialog", "Register", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginDialog: public Ui_LoginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG_H
