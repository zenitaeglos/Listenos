#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QApplication>
#include "gui/mainwindow.h"

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;

    engine.load(QUrl(QStringLiteral("qrc:/gui/qml/main.qml")));
    if (engine.rootObjects().isEmpty())
        return -1;

    return app.exec();

    /*
    //widget
    QApplication app(argc, argv);
    //call the main window
    MainWindow w;
    w.show();

    return app.exec();
    */
}
