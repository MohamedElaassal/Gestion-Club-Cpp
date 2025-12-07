/********************************************************************************
** Form generated from reading UI file 'clubdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLUBDIALOG_H
#define UI_CLUBDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ClubDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *nomEdit;
    QLabel *label_2;
    QTextEdit *descriptionEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ClubDialog)
    {
        if (ClubDialog->objectName().isEmpty())
            ClubDialog->setObjectName("ClubDialog");
        ClubDialog->resize(400, 250);
        verticalLayout = new QVBoxLayout(ClubDialog);
        verticalLayout->setObjectName("verticalLayout");
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        label = new QLabel(ClubDialog);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, label);

        nomEdit = new QLineEdit(ClubDialog);
        nomEdit->setObjectName("nomEdit");

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, nomEdit);

        label_2 = new QLabel(ClubDialog);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, label_2);

        descriptionEdit = new QTextEdit(ClubDialog);
        descriptionEdit->setObjectName("descriptionEdit");

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, descriptionEdit);


        verticalLayout->addLayout(formLayout);

        buttonBox = new QDialogButtonBox(ClubDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(ClubDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, ClubDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, ClubDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(ClubDialog);
    } // setupUi

    void retranslateUi(QDialog *ClubDialog)
    {
        ClubDialog->setWindowTitle(QCoreApplication::translate("ClubDialog", "Club Details", nullptr));
        label->setText(QCoreApplication::translate("ClubDialog", "Name:", nullptr));
        label_2->setText(QCoreApplication::translate("ClubDialog", "Description:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ClubDialog: public Ui_ClubDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLUBDIALOG_H
