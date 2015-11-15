#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDockWidget>
#include <QVBoxLayout>
#include <QListWidget>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT


public:  
    QDockWidget* m_dockleft;
    QDockWidget* m_dockright;
    QGridLayout* m_mainLayout;

    MainWindow(QWidget* parent = 0);
    ~MainWindow();

   /* static MainWindow* getInstance()
      {
        if(!instance)
        {
          instance = new MainWindow();
        }
        return instance;
      }
*/

protected:
   // MainWindow(QWidget* = NULL);
signals:  

private:
    Ui::MainWindow *ui;
    //static MainWindow* instance;
};


#endif // MAINWINDOW_H
