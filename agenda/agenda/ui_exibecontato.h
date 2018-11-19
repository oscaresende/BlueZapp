/********************************************************************************
** Form generated from reading UI file 'exibecontato.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXIBECONTATO_H
#define UI_EXIBECONTATO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QPlainTextEdit>

QT_BEGIN_NAMESPACE

class Ui_exibecontato
{
public:
    QDialogButtonBox *buttonBox;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QDialog *exibecontato)
    {
        if (exibecontato->objectName().isEmpty())
            exibecontato->setObjectName(QStringLiteral("exibecontato"));
        exibecontato->resize(353, 230);
        buttonBox = new QDialogButtonBox(exibecontato);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(80, 190, 241, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        plainTextEdit = new QPlainTextEdit(exibecontato);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(30, 20, 291, 161));

        retranslateUi(exibecontato);
        QObject::connect(buttonBox, SIGNAL(accepted()), exibecontato, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), exibecontato, SLOT(reject()));

        QMetaObject::connectSlotsByName(exibecontato);
    } // setupUi

    void retranslateUi(QDialog *exibecontato)
    {
        exibecontato->setWindowTitle(QApplication::translate("exibecontato", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class exibecontato: public Ui_exibecontato {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXIBECONTATO_H
