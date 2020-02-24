#ifndef HUFFMAN_H
#define HUFFMAN_H

#include <QMainWindow>
#include <iostream>
QT_BEGIN_NAMESPACE
namespace Ui { class huffman; }
QT_END_NAMESPACE

static std::string infile;
static std::string outfile;
static bool choose;
class huffman : public QMainWindow
{
    Q_OBJECT

public:
    huffman(QWidget *parent = nullptr);
    ~huffman();
private slots:
    void  comp();
    void  recomp();
private:
    Ui::huffman *ui;
};

//void compress(const char* infile, const char* out);
//void read_File(const char* file) ;
//void getQueue();
//void getTree();
//void getMap(std::string c, Node node);
//void compress(const char* infile, const char* out);
//void recompress(const char* infile, const char* out);
#endif // HUFFMAN_H
