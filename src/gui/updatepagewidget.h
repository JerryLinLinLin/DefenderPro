#ifndef UPDATEPAGEWIDGET_H
#define UPDATEPAGEWIDGET_H

#include <QWidget>

namespace Ui {
class UpdatePageWidget;
}

class UpdatePageWidget : public QWidget
{
    Q_OBJECT

public:
    explicit UpdatePageWidget(QWidget *parent = nullptr);
    ~UpdatePageWidget();

private:
    Ui::UpdatePageWidget *ui;
};

#endif // UPDATEPAGEWIDGET_H
