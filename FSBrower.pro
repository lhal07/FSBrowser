QT       += core gui
QT       += webkitwidgets

greaterThan(QT_MAJOR_VERSION, 4){
  QT += webkitwidgets
} else {
  QT += webkit
}
QT += mobility multimediakit phonon
QT += QAudioOutput
LIB += gstreamer ffmpeg

INCLUDEPATH += /usr/include/QtMobility
INCLUDEPATH += /usr/include/QtMultimediaKit

CONFIG += mobility
MOBILITY += multimedia

TARGET = FSBrowser
TEMPLATE = app

SOURCES += main.cpp
