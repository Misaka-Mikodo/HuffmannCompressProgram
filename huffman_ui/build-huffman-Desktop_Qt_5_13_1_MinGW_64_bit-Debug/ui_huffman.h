/********************************************************************************
** Form generated from reading UI file 'huffman.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HUFFMAN_H
#define UI_HUFFMAN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_huffman
{
public:
    QWidget *centralwidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btn_com;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_recom;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_2;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout_2;
    QLabel *label_3;
    QLineEdit *infile;
    QLabel *label_4;
    QLineEdit *outfile;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer;
    QLabel *label_5;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *huffman)
    {
        if (huffman->objectName().isEmpty())
            huffman->setObjectName(QString::fromUtf8("huffman"));
        huffman->resize(800, 600);
        huffman->setLayoutDirection(Qt::LeftToRight);
        huffman->setAutoFillBackground(true);
        huffman->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(huffman);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8(""));
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(170, 380, 471, 91));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        btn_com = new QPushButton(horizontalLayoutWidget);
        btn_com->setObjectName(QString::fromUtf8("btn_com"));
        btn_com->setMaximumSize(QSize(93, 28));

        horizontalLayout->addWidget(btn_com);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btn_recom = new QPushButton(horizontalLayoutWidget);
        btn_recom->setObjectName(QString::fromUtf8("btn_recom"));
        btn_recom->setEnabled(true);
        btn_recom->setMinimumSize(QSize(93, 28));

        horizontalLayout->addWidget(btn_recom);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(220, 60, 381, 141));
        formLayoutWidget = new QWidget(centralwidget);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(170, 280, 471, 101));
        formLayout_2 = new QFormLayout(formLayoutWidget);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_3);

        infile = new QLineEdit(formLayoutWidget);
        infile->setObjectName(QString::fromUtf8("infile"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, infile);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_4);

        outfile = new QLineEdit(formLayoutWidget);
        outfile->setObjectName(QString::fromUtf8("outfile"));

        formLayout_2->setWidget(3, QFormLayout::FieldRole, outfile);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout_2->setItem(4, QFormLayout::FieldRole, verticalSpacer_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout_2->setItem(1, QFormLayout::FieldRole, verticalSpacer);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(0, 0, 791, 571));
        label_5->setStyleSheet(QString::fromUtf8("border-image: url(:/func.cpp.png);"));
        huffman->setCentralWidget(centralwidget);
        label_5->raise();
        horizontalLayoutWidget->raise();
        label_2->raise();
        formLayoutWidget->raise();
        menubar = new QMenuBar(huffman);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        huffman->setMenuBar(menubar);
        statusbar = new QStatusBar(huffman);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        huffman->setStatusBar(statusbar);

        retranslateUi(huffman);

        QMetaObject::connectSlotsByName(huffman);
    } // setupUi

    void retranslateUi(QMainWindow *huffman)
    {
        huffman->setWindowTitle(QCoreApplication::translate("huffman", "\345\223\210\345\244\253\346\233\274\345\216\213\347\274\251\347\250\213\345\272\217", nullptr));
        btn_com->setText(QCoreApplication::translate("huffman", "\345\216\213\347\274\251", nullptr));
        btn_recom->setText(QCoreApplication::translate("huffman", "\350\247\243\345\216\213\347\274\251", nullptr));
        label_2->setText(QCoreApplication::translate("huffman", "<html><head/><body><p align=\"center\"><span style=\" font-size:36pt; font-weight:600; color:#00ffff;\">huffman\345\216\213\347\274\251</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("huffman", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:600;\">\350\276\223\345\205\245\346\226\207\344\273\266\345\234\260\345\235\200</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("huffman", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:600;\">\350\276\223\345\207\272\346\226\207\344\273\266\345\234\260\345\235\200</span></p></body></html>", nullptr));
        label_5->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class huffman: public Ui_huffman {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HUFFMAN_H
