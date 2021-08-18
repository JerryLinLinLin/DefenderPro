#include "settingpagewidget.h"
#include "ui_settingpagewidget.h"

SettingPageWidget::SettingPageWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SettingPageWidget)
{
    ui->setupUi(this);
}

SettingPageWidget::~SettingPageWidget()
{
    delete ui;
}
