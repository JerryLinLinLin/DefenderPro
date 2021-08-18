#include "mainwidget.h"
#include "ui_mainwidget.h"

MainWidget::MainWidget(QWidget *parent)
    : QWidget(parent), ui(new Ui::MainWidget) {
  setWindowFlags(Qt::FramelessWindowHint | Qt::WindowSystemMenuHint);
  setWindowFlags(windowFlags() | Qt::WindowMinimizeButtonHint);

  ui->setupUi(this);

  cssStyle = stylesheetWrapper::theme::LIGHT;
  changeStylesheet();

  QObject::connect(ui->sidemenu_widget, &SideMenuWidget::updateChoice, this,
                   &MainWidget::updateChoice);
}

MainWidget::~MainWidget() { delete ui; }

void MainWidget::mousePressEvent(QMouseEvent *evt) {
  oldPos = evt->globalPosition();
}

void MainWidget::mouseMoveEvent(QMouseEvent *evt) {
  const QPointF offset = evt->globalPosition() - oldPos;
  move(x() + offset.x(), y() + offset.y());
  oldPos = evt->globalPosition();
}

void MainWidget::changeStylesheet() {
  this->setStyleSheet(stylesheetWrapper::getStylesheet(
      cssStyle, stylesheetWrapper::component::GLOBAL));
  ui->sidemenu_widget->setStyleSheet(stylesheetWrapper::getStylesheet(
      cssStyle, stylesheetWrapper::component::SIDE_WIDGET));
  ui->home_page_widget->setStyleSheet(stylesheetWrapper::getStylesheet(
      cssStyle, stylesheetWrapper::component::HOME_PAGE));
  ui->scan_page_widget->setStyleSheet(stylesheetWrapper::getStylesheet(
      cssStyle, stylesheetWrapper::component::SCAN_PAGE));
  ui->update_page_widget->setStyleSheet(stylesheetWrapper::getStylesheet(
      cssStyle, stylesheetWrapper::component::UPDATE_PAGE));
  ui->threat_page_widget->setStyleSheet(stylesheetWrapper::getStylesheet(
      cssStyle, stylesheetWrapper::component::THREAT_PAGE));
  ui->setting_page_widget->setStyleSheet(stylesheetWrapper::getStylesheet(
      cssStyle, stylesheetWrapper::component::SETTING_PAGE));
  ui->about_page_widget->setStyleSheet(stylesheetWrapper::getStylesheet(
      cssStyle, stylesheetWrapper::component::ABOUT_PAGE));
}

void MainWidget::updateChoice(Component myChoice) {
  ui->pages_widget->setCurrentIndex(static_cast<int>(myChoice));
}
