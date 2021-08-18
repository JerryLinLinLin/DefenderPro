QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    src/gui/aboutpagewidget.cpp \
    src/gui/scanpagewidget.cpp \
    src/gui/settingpagewidget.cpp \
    src/gui/sidemenuwidget.cpp \
    src/gui/homepagewidget.cpp \
    src/main.cpp \
    src/gui/mainwidget.cpp \
    src/gui/stylesheetwrapper.cpp \
    src/gui/threatpagewidget.cpp \
    src/gui/updatepagewidget.cpp

HEADERS += \
    src/gui/aboutpagewidget.h \
    src/gui/scanpagewidget.h \
    src/gui/settingpagewidget.h \
    src/gui/sidemenuwidget.h \
    src/gui/homepagewidget.h \
    src/gui/mainwidget.h \
    src/gui/stylesheetwrapper.h \
    src/gui/threatpagewidget.h \
    src/gui/updatepagewidget.h

FORMS += \
    resource/homepagewidget.ui \
    resource/mainwidget.ui \
    resource/sidemenuwidget.ui \
    resource/aboutpagewidget.ui \
    resource/scanpagewidget.ui \
    resource/settingpagewidget.ui \
    resource/threatpagewidget.ui \
    resource/updatepagewidget.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resource/resource.qrc
