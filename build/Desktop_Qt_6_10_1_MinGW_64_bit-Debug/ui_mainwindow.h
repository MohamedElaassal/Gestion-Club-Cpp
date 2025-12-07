/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *studentTab;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *studentSearchEdit;
    QPushButton *studentSearchButton;
    QTableView *studentTableView;
    QHBoxLayout *horizontalLayout;
    QPushButton *addStudentButton;
    QPushButton *editStudentButton;
    QPushButton *deleteStudentButton;
    QWidget *clubTab;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *clubSearchEdit;
    QPushButton *clubSearchButton;
    QTableView *clubTableView;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *addClubButton;
    QPushButton *editClubButton;
    QPushButton *deleteClubButton;
    QWidget *membershipTab;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_6;
    QLineEdit *studentFilterEdit;
    QLineEdit *clubFilterEdit;
    QTableView *membershipTableView;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *addMembershipButton;
    QPushButton *removeMembershipButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        studentTab = new QWidget();
        studentTab->setObjectName("studentTab");
        verticalLayout_2 = new QVBoxLayout(studentTab);
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        studentSearchEdit = new QLineEdit(studentTab);
        studentSearchEdit->setObjectName("studentSearchEdit");

        horizontalLayout_3->addWidget(studentSearchEdit);

        studentSearchButton = new QPushButton(studentTab);
        studentSearchButton->setObjectName("studentSearchButton");

        horizontalLayout_3->addWidget(studentSearchButton);


        verticalLayout_2->addLayout(horizontalLayout_3);

        studentTableView = new QTableView(studentTab);
        studentTableView->setObjectName("studentTableView");
        studentTableView->setAlternatingRowColors(true);

        verticalLayout_2->addWidget(studentTableView);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        addStudentButton = new QPushButton(studentTab);
        addStudentButton->setObjectName("addStudentButton");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/add.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        addStudentButton->setIcon(icon);

        horizontalLayout->addWidget(addStudentButton);

        editStudentButton = new QPushButton(studentTab);
        editStudentButton->setObjectName("editStudentButton");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/edit.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        editStudentButton->setIcon(icon1);

        horizontalLayout->addWidget(editStudentButton);

        deleteStudentButton = new QPushButton(studentTab);
        deleteStudentButton->setObjectName("deleteStudentButton");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/delete.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        deleteStudentButton->setIcon(icon2);

        horizontalLayout->addWidget(deleteStudentButton);


        verticalLayout_2->addLayout(horizontalLayout);

        tabWidget->addTab(studentTab, QString());
        clubTab = new QWidget();
        clubTab->setObjectName("clubTab");
        verticalLayout_3 = new QVBoxLayout(clubTab);
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        clubSearchEdit = new QLineEdit(clubTab);
        clubSearchEdit->setObjectName("clubSearchEdit");

        horizontalLayout_4->addWidget(clubSearchEdit);

        clubSearchButton = new QPushButton(clubTab);
        clubSearchButton->setObjectName("clubSearchButton");

        horizontalLayout_4->addWidget(clubSearchButton);


        verticalLayout_3->addLayout(horizontalLayout_4);

        clubTableView = new QTableView(clubTab);
        clubTableView->setObjectName("clubTableView");
        clubTableView->setAlternatingRowColors(true);

        verticalLayout_3->addWidget(clubTableView);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        addClubButton = new QPushButton(clubTab);
        addClubButton->setObjectName("addClubButton");
        addClubButton->setIcon(icon);

        horizontalLayout_2->addWidget(addClubButton);

        editClubButton = new QPushButton(clubTab);
        editClubButton->setObjectName("editClubButton");
        editClubButton->setIcon(icon1);

        horizontalLayout_2->addWidget(editClubButton);

        deleteClubButton = new QPushButton(clubTab);
        deleteClubButton->setObjectName("deleteClubButton");
        deleteClubButton->setIcon(icon2);

        horizontalLayout_2->addWidget(deleteClubButton);


        verticalLayout_3->addLayout(horizontalLayout_2);

        tabWidget->addTab(clubTab, QString());
        membershipTab = new QWidget();
        membershipTab->setObjectName("membershipTab");
        verticalLayout_4 = new QVBoxLayout(membershipTab);
        verticalLayout_4->setObjectName("verticalLayout_4");
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        studentFilterEdit = new QLineEdit(membershipTab);
        studentFilterEdit->setObjectName("studentFilterEdit");

        horizontalLayout_6->addWidget(studentFilterEdit);

        clubFilterEdit = new QLineEdit(membershipTab);
        clubFilterEdit->setObjectName("clubFilterEdit");

        horizontalLayout_6->addWidget(clubFilterEdit);


        verticalLayout_4->addLayout(horizontalLayout_6);

        membershipTableView = new QTableView(membershipTab);
        membershipTableView->setObjectName("membershipTableView");
        membershipTableView->setAlternatingRowColors(true);

        verticalLayout_4->addWidget(membershipTableView);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        addMembershipButton = new QPushButton(membershipTab);
        addMembershipButton->setObjectName("addMembershipButton");
        addMembershipButton->setIcon(icon);

        horizontalLayout_5->addWidget(addMembershipButton);

        removeMembershipButton = new QPushButton(membershipTab);
        removeMembershipButton->setObjectName("removeMembershipButton");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/remove.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        removeMembershipButton->setIcon(icon3);

        horizontalLayout_5->addWidget(removeMembershipButton);


        verticalLayout_4->addLayout(horizontalLayout_5);

        tabWidget->addTab(membershipTab, QString());

        verticalLayout->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Gestion Club", nullptr));
        studentSearchButton->setText(QCoreApplication::translate("MainWindow", "Search", nullptr));
        addStudentButton->setText(QCoreApplication::translate("MainWindow", "Add Student", nullptr));
        editStudentButton->setText(QCoreApplication::translate("MainWindow", "Edit Student", nullptr));
        deleteStudentButton->setText(QCoreApplication::translate("MainWindow", "Delete Student", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(studentTab), QCoreApplication::translate("MainWindow", "Students", nullptr));
        clubSearchButton->setText(QCoreApplication::translate("MainWindow", "Search", nullptr));
        addClubButton->setText(QCoreApplication::translate("MainWindow", "Add Club", nullptr));
        editClubButton->setText(QCoreApplication::translate("MainWindow", "Edit Club", nullptr));
        deleteClubButton->setText(QCoreApplication::translate("MainWindow", "Delete Club", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(clubTab), QCoreApplication::translate("MainWindow", "Clubs", nullptr));
        studentFilterEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "Filter by student...", nullptr));
        clubFilterEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "Filter by club...", nullptr));
        addMembershipButton->setText(QCoreApplication::translate("MainWindow", "Add Membership", nullptr));
        removeMembershipButton->setText(QCoreApplication::translate("MainWindow", "Remove Membership", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(membershipTab), QCoreApplication::translate("MainWindow", "Memberships", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
