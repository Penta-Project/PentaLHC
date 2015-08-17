#ifndef VIDEOWINDOW_H
#define VIDEOWINDOW_H

#include <QtGui>
#include <QtNetwork>
#include "clientmodel.h"

namespace Ui {
class VideoWindow;
}
class ClientModel;

class VideoWindow : public QWidget
{
    Q_OBJECT

public:
    VideoWindow(QWidget *parent = 0);
    ~VideoWindow();
    void setModel(ClientModel *model);

private:
    Ui::VideoWindow *ui;
    ClientModel *model;
};

#endif // VIDEOWINDOW_H
