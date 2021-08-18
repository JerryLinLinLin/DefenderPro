#ifndef SETTINGPAGEWIDGET_H
#define SETTINGPAGEWIDGET_H

#include <QWidget>

namespace Ui {
class SettingPageWidget;
}

class SettingPageWidget : public QWidget
{
    Q_OBJECT

public:
    explicit SettingPageWidget(QWidget *parent = nullptr);
    ~SettingPageWidget();

private:
    Ui::SettingPageWidget *ui;
};

#endif // SETTINGPAGEWIDGET_H
