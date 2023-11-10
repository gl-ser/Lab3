#----------------------------------------------------------------------------#
#                       *** ЛАБОРАТОРНАЯ РАБОТА № 3 ***                      #
#                                                                            #
# Проект для Qt 5                                                            #
#                                                                            #
# Автор ГЛУЩЕНКО Сергей Юрьевич                                              #
#                                                                            #
#                                                   Москва, НИИ ТП, 2023 год #
#----------------------------------------------------------------------------#

QT -= gui

CONFIG += c++11 console

TARGET = Lab3

TEMPLATE = app

DEFINES += QT_DEPRECATED_WARNINGS

DESTDIR = $$PWD/APP  #Размещение исполняемого файла

SOURCES += \
    main.cpp \
    TelemetricFile.cpp

HEADERS += \
    TelemetricFile.h
