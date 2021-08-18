#ifndef SIDEMENUWIDGET_H
#define SIDEMENUWIDGET_H

#include <QPainter>
#include <QStyleOption>
#include <QWidget>

enum class Component {
  HOME_PAGE,
  SCAN_PAGE,
  UPDATE_PAGE,
  THREAT_PAGE,
  SETTING_PAGE,
  ABOUT_PAGE
};

namespace Ui {
class SideMenuWidget;
}

class SideMenuWidget : public QWidget {
  Q_OBJECT

public:
  explicit SideMenuWidget(QWidget *parent = nullptr);
  ~SideMenuWidget();

signals:
  void updateChoice(Component myChoice);

private slots:

  void on_home_pushButton_released();

  void on_scan_pushButton_released();

  void on_update_pushButton_released();

  void on_threat_pushButton_released();

  void on_setting_pushButton_released();

  void on_about_pushButton_released();

  void on_home_pushButton_pressed();

  void on_scan_pushButton_pressed();

  void on_update_pushButton_pressed();

  void on_threat_pushButton_pressed();

  void on_setting_pushButton_pressed();

  void on_about_pushButton_pressed();

private:
  Ui::SideMenuWidget *ui;

  void paintEvent(QPaintEvent *);
  void deSelectAll();
};

#endif // SIDEMENUWIDGET_H
