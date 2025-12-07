#ifndef CLUBDIALOG_H
#define CLUBDIALOG_H

#include <QDialog>
#include <QSqlQuery>

namespace Ui {
class ClubDialog;
}

class ClubDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ClubDialog(QWidget *parent = nullptr);
    ~ClubDialog();
    void loadData(int id);

private slots:
    void on_buttonBox_accepted();

private:
    Ui::ClubDialog *ui;
    int m_id;
};

#endif // CLUBDIALOG_H
