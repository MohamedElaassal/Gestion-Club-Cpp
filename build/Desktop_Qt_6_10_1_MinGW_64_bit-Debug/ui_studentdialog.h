/********************************************************************************
** Form generated from reading UI file 'studentdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTDIALOG_H
#define UI_STUDENTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_StudentDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *nomEdit;
    QLabel *label_2;
    QLineEdit *prenomEdit;
    QLabel *label_3;
    QLineEdit *teleEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *StudentDialog)
    {
        if (StudentDialog->objectName().isEmpty())
            StudentDialog->setObjectName("StudentDialog");
        StudentDialog->resize(400, 200);
        verticalLayout = new QVBoxLayout(StudentDialog);
        verticalLayout->setObjectName("verticalLayout");
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        label = new QLabel(StudentDialog);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, label);

        nomEdit = new QLineEdit(StudentDialog);
        nomEdit->setObjectName("nomEdit");

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, nomEdit);

        label_2 = new QLabel(StudentDialog);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, label_2);

        prenomEdit = new QLineEdit(StudentDialog);
        prenomEdit->setObjectName("prenomEdit");

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, prenomEdit);

        label_3 = new QLabel(StudentDialog);
        label_3->setObjectName("label_3");

        formLayout->setWidget(2, QFormLayout::ItemRole::LabelRole, label_3);

        teleEdit = new QLineEdit(StudentDialog);
        teleEdit->setObjectName("teleEdit");

        formLayout->setWidget(2, QFormLayout::ItemRole::FieldRole, teleEdit);


        verticalLayout->addLayout(formLayout);

        buttonBox = new QDialogButtonBox(StudentDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(StudentDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, StudentDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, StudentDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(StudentDialog);
    } // setupUi

    void retranslateUi(QDialog *StudentDialog)
    {
        StudentDialog->setWindowTitle(QCoreApplication::translate("StudentDialog", "Student Details", nullptr));
        label->setText(QCoreApplication::translate("StudentDialog", "Name:", nullptr));
        label_2->setText(QCoreApplication::translate("StudentDialog", "First Name:", nullptr));
        label_3->setText(QCoreApplication::translate("StudentDialog", "Phone:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StudentDialog: public Ui_StudentDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTDIALOG_H
