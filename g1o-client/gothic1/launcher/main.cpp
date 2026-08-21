#include <QApplication>
#include <QDir>
#include <QMessageBox>
#include <QtGlobal>

#include "SLauncher.h"

int main(int argc, char *argv[]) try
{
    QApplication app(argc, argv);

    // Launcher paths are relative to Gothic's Multiplayer/Launcher directory.
    // A shortcut may supply a different working directory, so normalize it to
    // the directory that actually contains GO_Launcher.exe.
    QDir::setCurrent(QCoreApplication::applicationDirPath());

    LAUNCHER.init();

    return app.exec();
}
catch (std::exception exception)
{
    QApplication app(argc, argv);
    QMessageBox::critical(NULL, "GO - Runtime error", exception.what());

    return 1;
}
