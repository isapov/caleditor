#ifndef CALEDITORWINDOW_H
#define CALEDITORWINDOW_H

#include <QMainWindow>

namespace Ui {
class CalEditorWindow;
}

class CalEditorWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit CalEditorWindow(QWidget *parent = nullptr);
    ~CalEditorWindow();

private:
    Ui::CalEditorWindow *ui;
};

#endif // CALEDITORWINDOW_H
