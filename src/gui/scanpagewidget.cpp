#include "scanpagewidget.h"
#include "ui_scanpagewidget.h"

ScanPageWidget::ScanPageWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ScanPageWidget)
{
    ui->setupUi(this);
}

ScanPageWidget::~ScanPageWidget()
{
    delete ui;
}
