#include "huffman.h"
#include "ui_huffman.h"
#include <QDebug>
#include <QString>
#include <QMessageBox>
#include "func.cpp"
huffman::huffman(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::huffman)
{
    ui->setupUi(this);
    connect(this->ui->btn_com, SIGNAL(clicked(bool)),this, SLOT(comp()));
    connect(this->ui->btn_recom, SIGNAL(clicked(bool)),this, SLOT(recomp()));
}

huffman::~huffman()
{
    delete ui;
}
void huffman::comp()
{
    QMessageBox msgbox;
    QString infiletmp = this->ui->infile->text();
    QString outfiletmp = this->ui->outfile->text();
    infile = infiletmp.toStdString();
    outfile = outfiletmp.toStdString();
    bool open = read_File(infile.c_str());
    if(open)
    {
        getQueue();
        getTree();
        getMap("",que.top());
        compress(infile.c_str(),outfile.c_str());
        msgbox.setText("compress successfully!");
        msgbox.exec();
    }
    else
    {
        msgbox.setText("cannot find this file.");
        msgbox.exec();
    }
}
void huffman::recomp()
{
    QMessageBox msgbox;
    QString infiletmp = this->ui->infile->text();
    QString outfiletmp = this->ui->outfile->text();
    infile = infiletmp.toStdString();
    outfile = outfiletmp.toStdString();
    bool open = read_File(infile.c_str());
    if(open)
    {
        msgbox.setText("We are discompress now, please wait for some moment.");
        msgbox.exec();
        recompress(infile.c_str(), outfile.c_str());
        msgbox.setText("recompress successfully!");
        msgbox.exec();
    }
    else
    {
        msgbox.setText("cannot find this file.");
        msgbox.exec();
    }
}
