#ifndef CHOOSESEAT_H
#define CHOOSESEAT_H

#include <QDialog>

namespace Ui {
class chooseseat;
}

class chooseseat : public QDialog
{
    Q_OBJECT

public:
    explicit chooseseat(QWidget *parent = nullptr);
    ~chooseseat();

private:
    Ui::chooseseat *ui;
};

#endif // CHOOSESEAT_H
