#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSqlTableModel>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_addStudentButton_clicked();
    void on_editStudentButton_clicked();
    void on_deleteStudentButton_clicked();

    void on_addClubButton_clicked();
    void on_editClubButton_clicked();
    void on_deleteClubButton_clicked();

    void on_studentSearchEdit_textChanged(const QString &arg1);
    void on_clubSearchEdit_textChanged(const QString &arg1);

    void on_addMembershipButton_clicked();
    void on_removeMembershipButton_clicked();

    void on_studentFilterEdit_textChanged(const QString &arg1);
    void on_clubFilterEdit_textChanged(const QString &arg1);
    
    void on_logoutButton_clicked();
private:
    void setupModels();
    void updateMembershipFilter();
    Ui::MainWindow *ui;
    QSqlTableModel *m_studentModel;
    QSqlTableModel *m_clubModel;
    QSqlQueryModel *m_membershipModel;
};
#endif // MAINWINDOW_H
