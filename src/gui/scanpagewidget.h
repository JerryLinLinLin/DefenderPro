#ifndef SCANPAGEWIDGET_H
#define SCANPAGEWIDGET_H

#include <QWidget>

namespace Ui {
class ScanPageWidget;
}

class ScanPageWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ScanPageWidget(QWidget *parent = nullptr);
    ~ScanPageWidget();

private:
    Ui::ScanPageWidget *ui;
};

#endif // SCANPAGEWIDGET_H
