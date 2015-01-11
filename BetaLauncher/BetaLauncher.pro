#-------------------------------------------------
#
# Project created by QtCreator 2014-12-13T17:28:58
#
#-------------------------------------------------

QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = BetaLauncher
TEMPLATE = app
INCLUDEPATH += $$PWD/../shared

SOURCES += main.cpp\
        mainwindow.cpp \
    filedownloader.cpp \
    downloadmanager.cpp \
    ../shared/appdata.cpp

HEADERS  += mainwindow.h \
    filedownloader.h \
    downloadmanager.h \
    ../shared/appdata.h

FORMS    += mainwindow.ui

OTHER_FILES += \
    button.css \
    blue_button02.png \
    blue_button03.png

RESOURCES += \
    Resources.qrc
