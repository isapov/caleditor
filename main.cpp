#include "caleditorwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CalEditorWindow w;
    w.show();

    return a.exec();
}
