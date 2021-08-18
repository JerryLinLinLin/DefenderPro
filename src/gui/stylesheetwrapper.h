#ifndef STYLESHEETWRAPPER_H
#define STYLESHEETWRAPPER_H

#include <QDebug>
#include <QFile>
#include <QString>

namespace stylesheetWrapper {

namespace theme {
extern const QString LIGHT;
extern const QString DARK;
} // namespace theme

namespace component {
extern const QString GLOBAL;
extern const QString SIDE_WIDGET;
extern const QString HOME_PAGE;
extern const QString SCAN_PAGE;
extern const QString UPDATE_PAGE;
extern const QString THREAT_PAGE;
extern const QString SETTING_PAGE;
extern const QString ABOUT_PAGE;
} // namespace component

QString getStylesheet(QString theme, QString component);
} // namespace stylesheetWrapper

#endif // STYLESHEETWRAPPER_H
