#include "threatpagewidget.h"
#include "ui_threatpagewidget.h"

ThreatPageWidget::ThreatPageWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ThreatPageWidget)
{
    ui->setupUi(this);
}

ThreatPageWidget::~ThreatPageWidget()
{
    delete ui;
}
