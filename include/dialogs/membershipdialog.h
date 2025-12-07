#ifndef MEMBERSHIPDIALOG_H
#define MEMBERSHIPDIALOG_H

#include <QDialog>
#include <QSqlQueryModel>

namespace Ui {
class MembershipDialog;
}

class MembershipDialog : public QDialog
{
    Q_OBJECT

public:
    explicit MembershipDialog(QWidget *parent = nullptr);
    ~MembershipDialog();

private slots:
    void on_buttonBox_accepted();

private:
    void setupModels();
    Ui::MembershipDialog *ui;
    QSqlQueryModel *m_studentModel;
    QSqlQueryModel *m_clubModel;
};

#endif // MEMBERSHIPDIALOG_H
