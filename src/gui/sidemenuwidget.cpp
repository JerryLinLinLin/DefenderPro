#include "sidemenuwidget.h"
#include "ui_sidemenuwidget.h"

SideMenuWidget::SideMenuWidget(QWidget *parent)
    : QWidget(parent), ui(new Ui::SideMenuWidget) {
  ui->setupUi(this);
}

SideMenuWidget::~SideMenuWidget() { delete ui; }

/*
 *   https://stackoverflow.com/a/8817908
 */
void SideMenuWidget::paintEvent(QPaintEvent *) {
  QStyleOption opt;
  opt.initFrom(this);
  QPainter p(this);
  style()->drawPrimitive(QStyle::PE_Widget, &opt, &p, this);
}

void SideMenuWidget::deSelectAll() {
  ui->home_pushButton->setChecked(false);
  ui->scan_pushButton->setChecked(false);
  ui->update_pushButton->setChecked(false);
  ui->threat_pushButton->setChecked(false);
  ui->setting_pushButton->setChecked(false);
  ui->about_pushButton->setChecked(false);
}

void SideMenuWidget::on_home_pushButton_released() {

  ui->home_pushButton->setChecked(true);
}

void SideMenuWidget::on_scan_pushButton_released() {
  ui->scan_pushButton->setChecked(true);
}

void SideMenuWidget::on_update_pushButton_released() {
  ui->update_pushButton->setChecked(true);
}

void SideMenuWidget::on_threat_pushButton_released() {
  ui->threat_pushButton->setChecked(true);
}

void SideMenuWidget::on_setting_pushButton_released() {
  ui->setting_pushButton->setChecked(true);
}

void SideMenuWidget::on_about_pushButton_released() {
  ui->about_pushButton->setChecked(true);
}

void SideMenuWidget::on_home_pushButton_pressed() {
  deSelectAll();
  ui->home_pushButton->setChecked(true);
  emit updateChoice(Component::HOME_PAGE);
}

void SideMenuWidget::on_scan_pushButton_pressed() {
  deSelectAll();
  ui->scan_pushButton->setChecked(true);
  emit updateChoice(Component::SCAN_PAGE);
}

void SideMenuWidget::on_update_pushButton_pressed() {
  deSelectAll();
  ui->update_pushButton->setChecked(true);
  emit updateChoice(Component::UPDATE_PAGE);
}

void SideMenuWidget::on_threat_pushButton_pressed() {
  deSelectAll();
  ui->threat_pushButton->setChecked(true);
  emit updateChoice(Component::THREAT_PAGE);
}

void SideMenuWidget::on_setting_pushButton_pressed() {
  deSelectAll();
  ui->setting_pushButton->setChecked(true);
  emit updateChoice(Component::SETTING_PAGE);
}

void SideMenuWidget::on_about_pushButton_pressed() {
  deSelectAll();
  ui->about_pushButton->setChecked(true);
  emit updateChoice(Component::ABOUT_PAGE);
}
