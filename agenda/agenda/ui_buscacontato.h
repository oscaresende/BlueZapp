/********************************************************************************
** Form generated from reading UI file 'buscacontato.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUSCACONTATO_H
#define UI_BUSCACONTATO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_buscacontato
{
public:
    QDialogButtonBox *buttonBox;
    QLineEdit *lineEdit;
    QLabel *label;

    void setupUi(QDialog *buscacontato)
    {
        if (buscacontato->objectName().isEmpty())
            buscacontato->setObjectName(QStringLiteral("buscacontato"));
        buscacontato->resize(381, 125);
        buttonBox = new QDialogButtonBox(buscacontato);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(20, 80, 321, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        lineEdit = new QLineEdit(buscacontato);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(30, 40, 311, 20));
        label = new QLabel(buscacontato);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 20, 161, 16));

        retranslateUi(buscacontato);
        QObject::connect(buttonBox, SIGNAL(accepted()), buscacontato, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), buscacontato, SLOT(reject()));

        QMetaObject::connectSlotsByName(buscacontato);
    } // setupUi

    void retranslateUi(QDialog *buscacontato)
    {
        buscacontato->setWindowTitle(QApplication::translate("buscacontato", "Dialog", nullptr));
        label->setText(QApplication::translate("buscacontato", "BUSCAR CONTATO PELO NOME", nullptr));
    } // retranslateUi

};

namespace Ui {
    class buscacontato: public Ui_buscacontato {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUSCACONTATO_H
