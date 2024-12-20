/********************************************************************************
** Form generated from reading UI file 'add_link_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_LINK_DIALOG_H
#define UI_ADD_LINK_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AddLinkDialogUI
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QLabel *NameLabel;
    QLineEdit *LinkNameLineEdit;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_53;
    QLineEdit *JointNameLineEdit;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_55;
    QComboBox *JointParentLinkComboBox;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AddLinkDialogUI)
    {
        if (AddLinkDialogUI->objectName().isEmpty())
            AddLinkDialogUI->setObjectName(QString::fromUtf8("AddLinkDialogUI"));
        AddLinkDialogUI->resize(281, 156);
        verticalLayout = new QVBoxLayout(AddLinkDialogUI);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        NameLabel = new QLabel(AddLinkDialogUI);
        NameLabel->setObjectName(QString::fromUtf8("NameLabel"));
        NameLabel->setMinimumSize(QSize(84, 0));
        NameLabel->setMaximumSize(QSize(80, 28));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        NameLabel->setFont(font);

        horizontalLayout_4->addWidget(NameLabel);

        LinkNameLineEdit = new QLineEdit(AddLinkDialogUI);
        LinkNameLineEdit->setObjectName(QString::fromUtf8("LinkNameLineEdit"));

        horizontalLayout_4->addWidget(LinkNameLineEdit);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        label_53 = new QLabel(AddLinkDialogUI);
        label_53->setObjectName(QString::fromUtf8("label_53"));
        label_53->setMinimumSize(QSize(84, 0));
        label_53->setMaximumSize(QSize(80, 16777215));
        label_53->setFont(font);

        horizontalLayout_14->addWidget(label_53);

        JointNameLineEdit = new QLineEdit(AddLinkDialogUI);
        JointNameLineEdit->setObjectName(QString::fromUtf8("JointNameLineEdit"));

        horizontalLayout_14->addWidget(JointNameLineEdit);


        verticalLayout->addLayout(horizontalLayout_14);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        label_55 = new QLabel(AddLinkDialogUI);
        label_55->setObjectName(QString::fromUtf8("label_55"));
        label_55->setMinimumSize(QSize(84, 0));
        label_55->setMaximumSize(QSize(80, 16777215));
        label_55->setFont(font);

        horizontalLayout_16->addWidget(label_55);

        JointParentLinkComboBox = new QComboBox(AddLinkDialogUI);
        JointParentLinkComboBox->setObjectName(QString::fromUtf8("JointParentLinkComboBox"));

        horizontalLayout_16->addWidget(JointParentLinkComboBox);


        verticalLayout->addLayout(horizontalLayout_16);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(AddLinkDialogUI);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

        QWidget::setTabOrder(LinkNameLineEdit, JointNameLineEdit);
        QWidget::setTabOrder(JointNameLineEdit, JointParentLinkComboBox);

        retranslateUi(AddLinkDialogUI);
        QObject::connect(buttonBox, SIGNAL(accepted()), AddLinkDialogUI, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AddLinkDialogUI, SLOT(reject()));

        QMetaObject::connectSlotsByName(AddLinkDialogUI);
    } // setupUi

    void retranslateUi(QDialog *AddLinkDialogUI)
    {
        AddLinkDialogUI->setWindowTitle(QApplication::translate("AddLinkDialogUI", "Dialog", nullptr));
        NameLabel->setText(QApplication::translate("AddLinkDialogUI", "Link Name", nullptr));
        LinkNameLineEdit->setText(QString());
        label_53->setText(QApplication::translate("AddLinkDialogUI", "Joint Name", nullptr));
        label_55->setText(QApplication::translate("AddLinkDialogUI", "Parent", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddLinkDialogUI: public Ui_AddLinkDialogUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_LINK_DIALOG_H
