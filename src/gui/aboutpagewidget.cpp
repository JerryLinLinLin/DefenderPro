#include "aboutpagewidget.h"
#include "ui_aboutpagewidget.h"

AboutPageWidget::AboutPageWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AboutPageWidget)
{
    ui->setupUi(this);
}

AboutPageWidget::~AboutPageWidget()
{
    delete ui;
}
