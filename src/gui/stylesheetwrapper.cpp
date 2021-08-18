#include "stylesheetwrapper.h"

const QString stylesheetWrapper::theme::LIGHT = "Light";
const QString stylesheetWrapper::theme::DARK = "Dark";

const QString stylesheetWrapper::component::GLOBAL = "Global";
const QString stylesheetWrapper::component::SIDE_WIDGET = "SideWidget";
const QString stylesheetWrapper::component::HOME_PAGE = "HomePage";
const QString stylesheetWrapper::component::SCAN_PAGE = "ScanPage";
const QString stylesheetWrapper::component::UPDATE_PAGE = "UpdatePage";
const QString stylesheetWrapper::component::THREAT_PAGE = "ThreatPage";
const QString stylesheetWrapper::component::SETTING_PAGE = "SettingPage";
const QString stylesheetWrapper::component::ABOUT_PAGE = "AboutPage";

QString stylesheetWrapper::getStylesheet(QString theme, QString component) {
  QFile file(QString(":/Themes/%1/%2.css").arg(theme, component));
  QString css{};
  if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
    QTextStream in(&file);
    css = in.readAll();
    qDebug() << "Success load stylesheet:" << theme << component;
    return css;
  }
  return css;
}
