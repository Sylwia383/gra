TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt
INCLUDEPATH += "C:/SFML-2.5.1x/SFML-2.5.1/include"
LIBS += -L"C:/SFML-2.5.1x/SFML-2.5.1/lib"
CONFIG(debug, debug|release){
    LIBS += -lsfml-audio-d -lsfml-graphics-d -lsfml-network-d -lsfml-system-d -lsfml-window-d
} else {
    LIBS += -lsfml-audio -lsfml-graphics -lsfml-network -lsfml-system -lsfml-window
}
SOURCES += \
        icytower.cpp \
        klasy.cpp \
        main.cpp \
        postac.cpp \
        wrogowie_poziom_3.cpp

HEADERS += \
    icytower.h \
    klasy.h \
    postac.h \ \
    wrogowie_poziom_3.h
