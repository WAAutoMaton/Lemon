TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        realjudge.c

unix:TARGET = realjudge_linux

win32:TARGET = readljudge_win32
