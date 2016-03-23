#-------------------------------------------------
#
# Project created by QtCreator 2016-03-19T13:29:05
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

QT       += widgets
TARGET = monopoly
TEMPLATE = app


SOURCES += main.cpp\
        widget.cpp \
    startupdialog.cpp \
    winner.cpp

HEADERS  += widget.h \
    startupdialog.h \
    winner.h

FORMS    += widget.ui \
    startupdialog.ui \
    winner.ui

