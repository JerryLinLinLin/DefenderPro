#ifndef ABOUTPAGEWIDGET_H
#define ABOUTPAGEWIDGET_H

#include <QWidget>

namespace Ui {
class AboutPageWidget;
}

class AboutPageWidget : public QWidget
{
    Q_OBJECT

public:
    explicit AboutPageWidget(QWidget *parent = nullptr);
    ~AboutPageWidget();

private:
    Ui::AboutPageWidget *ui;
};

#endif // ABOUTPAGEWIDGET_H
