#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QTime time = QTime::currentTime();
    qsrand((uint)time.msec());

    readFile("C:/Users/KA/Desktop/SP_SJ_slovnik/vocabulario.txt");

    qDebug() << spanish;
    qDebug() << slovak;

    ui->spanishRB->setChecked(true);
    vocabLen = spanish.size();
    checked = true;

    randNum = random(0, vocabLen);

    connect(ui->refreshButton, SIGNAL(clicked()), this, SLOT(refresh_clicked()));
    connect(ui->changeButton, SIGNAL(clicked()), this, SLOT(change_clicked()));
    connect(ui->spanish_lineEdit, SIGNAL(returnPressed()), this, SLOT(refresh_clicked()));
    connect(ui->slovak_lineEdit, SIGNAL(returnPressed()), this, SLOT(refresh_clicked()));

    refresh_clicked();
}

MainWindow::~MainWindow()
{
    delete ui;
}

int MainWindow::random(const int &low, const int &high)
{
    return qrand() % ((high) - low) + low;
}

bool MainWindow::checkWords(const QString &word1, const QString &word2)
{
    bool equal = false;

    if(word1 == word2)
    {
        equal = true;
    }
    else
    {
        equal = false;
    }

    return equal;
}

void MainWindow::refresh_clicked()
{
    if(!checked)
    {
        if(ui->spanishRB->isChecked())
        {
            ui->slovak_label->setText(slovak.at(randNum));

            bool equal = checkWords(ui->slovak_lineEdit->text(), slovak.at(randNum));

            if(equal)
            {
                ui->slovak_label->setStyleSheet("QLabel {color : green; }");
            }
            else
            {
                ui->slovak_label->setStyleSheet("QLabel {color : red; }");
            }
        }
        else if(ui->slovakRB->isChecked())
        {
            ui->spanish_label->setText(spanish.at(randNum));

            bool equal = checkWords(ui->spanish_lineEdit->text(), spanish.at(randNum));

            if(equal)
            {
                ui->spanish_label->setStyleSheet("QLabel {color : green; }");
            }
            else
            {
                ui->spanish_label->setStyleSheet("QLabel {color : red; }");
            }
        }



        checked = true;
    }
    else
    {
        randNum = random(0, vocabLen);
        ui->spanish_label->clear();
        ui->slovak_label->clear();

        if(ui->spanishRB->isChecked())
        {
            ui->slovak_lineEdit->clear();
            ui->spanish_lineEdit->setText(spanish.at(randNum));
        }
        else if(ui->slovakRB->isChecked())
        {
            ui->spanish_lineEdit->clear();
            ui->slovak_lineEdit->setText(slovak.at(randNum));
        }

        checked = false;
    }
}

void MainWindow::change_clicked()
{
    if(ui->slovakRB->isChecked())
    {
        ui->spanishRB->setChecked(true);
    }
    else if(ui->spanishRB->isChecked())
    {
        ui->slovakRB->setChecked(true);
    }
}

void MainWindow::readFile(const QString &fileName)
{
    QFile file(fileName);
    if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        qDebug() << "Cannot open file: " << file.fileName() << " for reading!";
    }

    QTextStream stream(&file);
    QString line;

    while(!stream.atEnd())
    {
        line = stream.readLine();
        QStringList lineList = line.split(":");
        spanish.append(lineList.at(0));
        slovak.append(lineList.at(1));
    }
}
