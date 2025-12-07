#ifndef STUDENTDIALOG_H
#define STUDENTDIALOG_H

#include <QDialog>
#include <QSqlQuery>

namespace Ui {
class StudentDialog;
}

class StudentDialog : public QDialog
{
    Q_OBJECT

public:
    explicit StudentDialog(QWidget *parent = nullptr);
    ~StudentDialog();
    void loadData(int id);

private slots:
    void on_buttonBox_accepted();

private:
    Ui::StudentDialog *ui;
    int m_id;
};

#endif // STUDENTDIALOG_H
