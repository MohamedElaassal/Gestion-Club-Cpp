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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
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
    QHBoxLayout *headerLayout;
    QLabel *welcomeLabel;
    QSpacerItem *headerSpacer;
    QPushButton *logoutButton;
    QTabWidget *tabWidget;
    QWidget *studentTab;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *studentSearchEdit;
    QPushButton *studentSearchButton;
    QTableView *studentTableView;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
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
    QSpacerItem *horizontalSpacer_2;
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
    QSpacerItem *horizontalSpacer_3;
    QPushButton *addMembershipButton;
    QPushButton *removeMembershipButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1100, 700);
        MainWindow->setMinimumSize(QSize(900, 600));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setSpacing(10);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(15, 15, 15, 15);
        headerLayout = new QHBoxLayout();
        headerLayout->setSpacing(10);
        headerLayout->setObjectName("headerLayout");
        welcomeLabel = new QLabel(centralwidget);
        welcomeLabel->setObjectName("welcomeLabel");
        welcomeLabel->setStyleSheet(QString::fromUtf8("font-size: 18px; font-weight: bold; color: #2c3e50;"));

        headerLayout->addWidget(welcomeLabel);

        headerSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        headerLayout->addItem(headerSpacer);

        logoutButton = new QPushButton(centralwidget);
        logoutButton->setObjectName("logoutButton");
        logoutButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #e74c3c, stop:1 #c0392b);\n"
"    color: white;\n"
"    border: none;\n"
"    padding: 8px 20px;\n"
"    border-radius: 6px;\n"
"    font-weight: bold;\n"
"    min-width: 120px;\n"
"}\n"
"QPushButton:hover {\n"
"    background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #c0392b, stop:1 #a93226);\n"
"}\n"
"QPushButton:pressed {\n"
"    background: #922b21;\n"
"}"));

        headerLayout->addWidget(logoutButton);


        verticalLayout->addLayout(headerLayout);

        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        studentTab = new QWidget();
        studentTab->setObjectName("studentTab");
        verticalLayout_2 = new QVBoxLayout(studentTab);
        verticalLayout_2->setSpacing(15);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(15, 15, 15, 15);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(10);
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
        horizontalLayout->setSpacing(10);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

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
        verticalLayout_3->setSpacing(15);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(15, 15, 15, 15);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(10);
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
        horizontalLayout_2->setSpacing(10);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

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
        verticalLayout_4->setSpacing(15);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(15, 15, 15, 15);
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(10);
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
        horizontalLayout_5->setSpacing(10);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);

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
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Club Management System", nullptr));
        welcomeLabel->setText(QCoreApplication::translate("MainWindow", "\360\237\216\223 Club Management System", nullptr));
        logoutButton->setText(QCoreApplication::translate("MainWindow", "\360\237\232\252 D\303\251connexion", nullptr));
        studentSearchEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "\360\237\224\215 Search students by name, phone...", nullptr));
        studentSearchButton->setText(QCoreApplication::translate("MainWindow", "Search", nullptr));
        addStudentButton->setText(QCoreApplication::translate("MainWindow", "\342\236\225 Add Student", nullptr));
        editStudentButton->setText(QCoreApplication::translate("MainWindow", "\342\234\217\357\270\217 Edit Student", nullptr));
        deleteStudentButton->setText(QCoreApplication::translate("MainWindow", "\360\237\227\221\357\270\217 Delete Student", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(studentTab), QCoreApplication::translate("MainWindow", "\360\237\223\232 Students", nullptr));
        clubSearchEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "\360\237\224\215 Search clubs by name, description...", nullptr));
        clubSearchButton->setText(QCoreApplication::translate("MainWindow", "Search", nullptr));
        addClubButton->setText(QCoreApplication::translate("MainWindow", "\342\236\225 Add Club", nullptr));
        editClubButton->setText(QCoreApplication::translate("MainWindow", "\342\234\217\357\270\217 Edit Club", nullptr));
        deleteClubButton->setText(QCoreApplication::translate("MainWindow", "\360\237\227\221\357\270\217 Delete Club", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(clubTab), QCoreApplication::translate("MainWindow", "\360\237\216\257 Clubs", nullptr));
        studentFilterEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "\360\237\224\215 Filter by student...", nullptr));
        clubFilterEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "\360\237\224\215 Filter by club...", nullptr));
        addMembershipButton->setText(QCoreApplication::translate("MainWindow", "\342\236\225 Add Membership", nullptr));
        removeMembershipButton->setText(QCoreApplication::translate("MainWindow", "\342\236\226 Remove Membership", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(membershipTab), QCoreApplication::translate("MainWindow", "\360\237\221\245 Memberships", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
