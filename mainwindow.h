#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtCore>
#include <QtGui>
#include <QTextStream>
#include <QTime>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void readFile(const QString &fileName);
    int random(const int &low, const int &high);

    bool checkWords(const QString &word1, const QString &word2);
    
private:
    Ui::MainWindow *ui;

    QStringList spanish;
    QStringList slovak;
    int vocabLen;
    bool checked;
    int randNum;

private slots:
    void refresh_clicked();
    void change_clicked();
};

#endif // MAINWINDOW_H
