#include "caleditorwindow.h"
#include "ui_caleditorwindow.h"

CalEditorWindow::CalEditorWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CalEditorWindow)
{
    ui->setupUi(this);
}

CalEditorWindow::~CalEditorWindow()
{
    delete ui;
}
