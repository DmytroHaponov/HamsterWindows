#-------------------------------------------------
#
# Project created by QtCreator 2012-10-20T12:16:36
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = NiceApp
TEMPLATE = app


SOURCES += main.cpp\
        nicewnd.cpp \
    windowdragger.cpp \
    customshadoweffect.cpp

HEADERS  += nicewnd.h \
    windowdragger.h \
    customshadoweffect.h

FORMS    += nicewnd.ui

DISTFILES +=

RESOURCES += hamres.qrc
