#include "updatepagewidget.h"
#include "ui_updatepagewidget.h"

UpdatePageWidget::UpdatePageWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::UpdatePageWidget)
{
    ui->setupUi(this);
}

UpdatePageWidget::~UpdatePageWidget()
{
    delete ui;
}
