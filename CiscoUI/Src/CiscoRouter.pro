#-------------------------------------------------
#
# Project created by QtCreator 2018-06-08T14:05:16
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = CiscoRouter
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

WIN32::RC_ICONS += CiscoIcon.ico
RC_FILE = Icon.rc

#QMAKE_LFLAGS += -static

SOURCES += \
        main.cpp \
        mainwindow.cpp \
    interface.cpp \
    basic.cpp \
    config.cpp \
    setup.cpp \
    StaticRoute.cpp \
    eigrp.cpp \
    ospf.cpp \
    bgp.cpp \
    dhcp.cpp \
    nat.cpp \
    acl.cpp \
    settings.cpp \
    addresschecks.cpp

HEADERS += \
        mainwindow.h \
    interface.h \
    Global.h \
    config.h \
    setup.h \
    StaticRoute.h \
    eigrp.h \
    ospf.h \
    bgp.h \
    dhcp.h \
    nat.h \
    acl.h \
    settings.h \
    addresschecks.h

FORMS += \
        mainwindow.ui \
    interface.ui \
    setup.ui \
    StaticRoute.ui \
    eigrp.ui \
    ospf.ui \
    bgp.ui \
    dhcp.ui \
    nat.ui \
    acl.ui \
    settings.ui
