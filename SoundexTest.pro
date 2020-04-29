GOOGLETEST_DIR =  C:\dev\env\googletest
include(gtest_dependency.pri)

TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG += thread
CONFIG -= qt

HEADERS += \
        tst_retainssoleletterofoneletterword.h

SOURCES += \
        main.cpp
