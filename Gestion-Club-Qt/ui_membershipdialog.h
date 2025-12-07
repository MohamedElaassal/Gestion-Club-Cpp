/********************************************************************************
** Form generated from reading UI file 'membershipdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEMBERSHIPDIALOG_H
#define UI_MEMBERSHIPDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_MembershipDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QComboBox *studentComboBox;
    QLabel *label_2;
    QComboBox *clubComboBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *MembershipDialog)
    {
        if (MembershipDialog->objectName().isEmpty())
            MembershipDialog->setObjectName("MembershipDialog");
        MembershipDialog->resize(400, 200);
        verticalLayout = new QVBoxLayout(MembershipDialog);
        verticalLayout->setObjectName("verticalLayout");
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        label = new QLabel(MembershipDialog);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, label);

        studentComboBox = new QComboBox(MembershipDialog);
        studentComboBox->setObjectName("studentComboBox");

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, studentComboBox);

        label_2 = new QLabel(MembershipDialog);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, label_2);

        clubComboBox = new QComboBox(MembershipDialog);
        clubComboBox->setObjectName("clubComboBox");

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, clubComboBox);


        verticalLayout->addLayout(formLayout);

        buttonBox = new QDialogButtonBox(MembershipDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(MembershipDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, MembershipDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, MembershipDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(MembershipDialog);
    } // setupUi

    void retranslateUi(QDialog *MembershipDialog)
    {
        MembershipDialog->setWindowTitle(QCoreApplication::translate("MembershipDialog", "Add Membership", nullptr));
        label->setText(QCoreApplication::translate("MembershipDialog", "Student:", nullptr));
        label_2->setText(QCoreApplication::translate("MembershipDialog", "Club:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MembershipDialog: public Ui_MembershipDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEMBERSHIPDIALOG_H
