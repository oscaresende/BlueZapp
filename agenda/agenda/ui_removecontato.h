/********************************************************************************
** Form generated from reading UI file 'removecontato.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REMOVECONTATO_H
#define UI_REMOVECONTATO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_removecontato
{
public:
    QDialogButtonBox *buttonBox;
    QComboBox *comboBox;
    QLabel *label;

    void setupUi(QDialog *removecontato)
    {
        if (removecontato->objectName().isEmpty())
            removecontato->setObjectName(QStringLiteral("removecontato"));
        removecontato->resize(402, 133);
        buttonBox = new QDialogButtonBox(removecontato);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(50, 100, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        comboBox = new QComboBox(removecontato);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(140, 40, 251, 22));
        label = new QLabel(removecontato);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 40, 101, 16));

        retranslateUi(removecontato);
        QObject::connect(buttonBox, SIGNAL(accepted()), removecontato, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), removecontato, SLOT(reject()));

        QMetaObject::connectSlotsByName(removecontato);
    } // setupUi

    void retranslateUi(QDialog *removecontato)
    {
        removecontato->setWindowTitle(QApplication::translate("removecontato", "Dialog", nullptr));
        label->setText(QApplication::translate("removecontato", "Nome do Contato", nullptr));
    } // retranslateUi

};

namespace Ui {
    class removecontato: public Ui_removecontato {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REMOVECONTATO_H
