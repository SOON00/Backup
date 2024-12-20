/********************************************************************************
** Form generated from reading UI file 'urdf_editor_panel.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_URDF_EDITOR_PANEL_H
#define UI_URDF_EDITOR_PANEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_URDFEditorPanelUI
{
public:
    QAction *AddLinkAction;
    QAction *RemoveLinkAction;
    QAction *CloneLinkAction;
    QVBoxLayout *verticalLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLabel *PathLabel;
    QHBoxLayout *horizontalLayout;
    QPushButton *NewButton;
    QPushButton *LoadButton;
    QPushButton *SaveButton;
    QPushButton *SaveAsButton;
    QTreeWidget *LinkTreeWidget;

    void setupUi(QWidget *URDFEditorPanelUI)
    {
        if (URDFEditorPanelUI->objectName().isEmpty())
            URDFEditorPanelUI->setObjectName(QString::fromUtf8("URDFEditorPanelUI"));
        URDFEditorPanelUI->resize(423, 486);
        AddLinkAction = new QAction(URDFEditorPanelUI);
        AddLinkAction->setObjectName(QString::fromUtf8("AddLinkAction"));
        RemoveLinkAction = new QAction(URDFEditorPanelUI);
        RemoveLinkAction->setObjectName(QString::fromUtf8("RemoveLinkAction"));
        CloneLinkAction = new QAction(URDFEditorPanelUI);
        CloneLinkAction->setObjectName(QString::fromUtf8("CloneLinkAction"));
        verticalLayout = new QVBoxLayout(URDFEditorPanelUI);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        scrollArea = new QScrollArea(URDFEditorPanelUI);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 403, 466));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(50, 16777215));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        horizontalLayout_2->addWidget(label);

        PathLabel = new QLabel(scrollAreaWidgetContents);
        PathLabel->setObjectName(QString::fromUtf8("PathLabel"));
        PathLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(PathLabel);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        NewButton = new QPushButton(scrollAreaWidgetContents);
        NewButton->setObjectName(QString::fromUtf8("NewButton"));

        horizontalLayout->addWidget(NewButton);

        LoadButton = new QPushButton(scrollAreaWidgetContents);
        LoadButton->setObjectName(QString::fromUtf8("LoadButton"));

        horizontalLayout->addWidget(LoadButton);

        SaveButton = new QPushButton(scrollAreaWidgetContents);
        SaveButton->setObjectName(QString::fromUtf8("SaveButton"));

        horizontalLayout->addWidget(SaveButton);

        SaveAsButton = new QPushButton(scrollAreaWidgetContents);
        SaveAsButton->setObjectName(QString::fromUtf8("SaveAsButton"));

        horizontalLayout->addWidget(SaveAsButton);


        verticalLayout_2->addLayout(horizontalLayout);

        LinkTreeWidget = new QTreeWidget(scrollAreaWidgetContents);
        LinkTreeWidget->setObjectName(QString::fromUtf8("LinkTreeWidget"));
        LinkTreeWidget->setContextMenuPolicy(Qt::CustomContextMenu);
        LinkTreeWidget->setSortingEnabled(true);

        verticalLayout_2->addWidget(LinkTreeWidget);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);


        retranslateUi(URDFEditorPanelUI);

        QMetaObject::connectSlotsByName(URDFEditorPanelUI);
    } // setupUi

    void retranslateUi(QWidget *URDFEditorPanelUI)
    {
        URDFEditorPanelUI->setWindowTitle(QApplication::translate("URDFEditorPanelUI", "Form", nullptr));
        AddLinkAction->setText(QApplication::translate("URDFEditorPanelUI", "Add Link", nullptr));
        RemoveLinkAction->setText(QApplication::translate("URDFEditorPanelUI", "Remove Link", nullptr));
        CloneLinkAction->setText(QApplication::translate("URDFEditorPanelUI", "Clone Link", nullptr));
        label->setText(QApplication::translate("URDFEditorPanelUI", "Path", nullptr));
        PathLabel->setText(QString());
        NewButton->setText(QApplication::translate("URDFEditorPanelUI", "New", nullptr));
        LoadButton->setText(QApplication::translate("URDFEditorPanelUI", "Load", nullptr));
        SaveButton->setText(QApplication::translate("URDFEditorPanelUI", "Save", nullptr));
        SaveAsButton->setText(QApplication::translate("URDFEditorPanelUI", "Save As", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = LinkTreeWidget->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("URDFEditorPanelUI", "Link", nullptr));
    } // retranslateUi

};

namespace Ui {
    class URDFEditorPanelUI: public Ui_URDFEditorPanelUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_URDF_EDITOR_PANEL_H
