/********************************************************************************
** Form generated from reading UI file 'update_link_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATE_LINK_DIALOG_H
#define UI_UPDATE_LINK_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UpdateLinkDialogUI
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *TabWidget;
    QWidget *GeneralTab;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *NameLabel;
    QLineEdit *NameLineEdit;
    QSpacerItem *verticalSpacer;
    QWidget *JointTab;
    QVBoxLayout *verticalLayout_10;
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_53;
    QLineEdit *JointNameLineEdit;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_54;
    QComboBox *JointTypeComboBox;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_55;
    QComboBox *JointParentLinkComboBox;
    QGroupBox *JointOriginGroupBox;
    QGridLayout *gridLayout_10;
    QLabel *label_56;
    QDoubleSpinBox *JointOriginPitchSpinBox;
    QLabel *label_57;
    QDoubleSpinBox *JointOriginRollSpinBox;
    QLabel *label_58;
    QDoubleSpinBox *JointOriginYSpinBox;
    QLabel *label_59;
    QDoubleSpinBox *JointOriginZSpinBox;
    QLabel *label_60;
    QDoubleSpinBox *JointOriginYawSpinBox;
    QDoubleSpinBox *JointOriginXSpinBox;
    QLabel *label_61;
    QGroupBox *JointAxisGroupBox;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_62;
    QDoubleSpinBox *JointAxisXSpinBox;
    QLabel *label_63;
    QDoubleSpinBox *JointAxisYSpinBox;
    QLabel *label_64;
    QDoubleSpinBox *JointAxisZSpinBox;
    QGroupBox *JointCalibrationGroupBox;
    QHBoxLayout *horizontalLayout_22;
    QLabel *label_68;
    QDoubleSpinBox *JointCalibrationRisingSpinBox;
    QLabel *label_69;
    QDoubleSpinBox *JointCalibrationFallingSpinBox;
    QGroupBox *JointDynamicsGroupBox;
    QHBoxLayout *horizontalLayout_24;
    QLabel *label_74;
    QDoubleSpinBox *JointDynamicsDamplingSpinBox;
    QLabel *label_75;
    QDoubleSpinBox *JointDynamicsFrictionSpinBox;
    QGroupBox *JointMimicGroupBox;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_28;
    QLabel *label_48;
    QLineEdit *JointMimicJointNameLineEdit;
    QHBoxLayout *horizontalLayout_30;
    QLabel *label_93;
    QDoubleSpinBox *JointMimicOffsetSpinBox;
    QHBoxLayout *horizontalLayout_31;
    QLabel *label_92;
    QDoubleSpinBox *JointMimicMultiplierSpinBox;
    QGroupBox *JointSafetyGroupBox;
    QGridLayout *gridLayout_4;
    QDoubleSpinBox *JointSafetyLowerLimitSpinBox;
    QDoubleSpinBox *JointSafetyUpperLimitSpinBox;
    QLabel *label_78;
    QDoubleSpinBox *JointSafetyKVelocitySpinBox;
    QLabel *label_77;
    QLabel *label_79;
    QDoubleSpinBox *JointSafetyKPositionSpinBox;
    QLabel *label_94;
    QGroupBox *JointLimitGroupBox;
    QGridLayout *gridLayout;
    QLabel *label_86;
    QDoubleSpinBox *JointLimitLowerSpinBox;
    QLabel *label_87;
    QDoubleSpinBox *JointLimitUpperSpinBox;
    QLabel *label_88;
    QDoubleSpinBox *JointLimitEffortSpinBox;
    QDoubleSpinBox *JointLimitVelocitySpinBox;
    QLabel *label_95;
    QSpacerItem *verticalSpacer_6;
    QWidget *VisualTab;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_12;
    QPushButton *AddVisualButton;
    QPushButton *RemoveVisualButton;
    QListWidget *VisualListWidget;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_46;
    QLineEdit *VisualNameLineEdit;
    QGroupBox *VisualOriginGroupBox;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QDoubleSpinBox *VisualOriginPitchSpinBox;
    QLabel *label_6;
    QDoubleSpinBox *VisualOriginRollSpinBox;
    QLabel *label_5;
    QDoubleSpinBox *VisualOriginYSpinBox;
    QLabel *label;
    QDoubleSpinBox *VisualOriginZSpinBox;
    QLabel *label_3;
    QDoubleSpinBox *VisualOriginYawSpinBox;
    QDoubleSpinBox *VisualOriginXSpinBox;
    QLabel *label_16;
    QGroupBox *VisualGeometryGroupBox;
    QGridLayout *gridLayout_3;
    QFrame *VisualGeometryBoxTypeFrame;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QDoubleSpinBox *VisualGeometryBoxWidthSpinBox;
    QLabel *label_8;
    QDoubleSpinBox *VisualGeometryBoxLengthSpinBox;
    QLabel *label_9;
    QDoubleSpinBox *VisualGeometryBoxHeightSpinBox;
    QComboBox *VisualGeometryTypeComboBox;
    QLabel *label_7;
    QFrame *VisualGeometrySphereTypeFrame;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_12;
    QDoubleSpinBox *VisualGeometrySphereRadiusSpinBox;
    QFrame *VisualGeometryCylinderTypeFrame;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_10;
    QDoubleSpinBox *VisualGeometryCylinderRadiusSpinBox;
    QLabel *label_11;
    QDoubleSpinBox *VisualGeometryCylinderLengthSpinBox;
    QFrame *VisualGeometryMeshTypeFrame;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_13;
    QLineEdit *VisualGeometryMeshPathLineEdit;
    QGroupBox *VisualMaterialGroupBox;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_15;
    QLineEdit *MaterialNameLineEdit;
    QHBoxLayout *horizontalLayout_19;
    QLabel *label_42;
    QLineEdit *MaterialTexturePathLineEdit;
    QHBoxLayout *horizontalLayout_20;
    QLabel *label_17;
    QDoubleSpinBox *MaterialColorRedSpinBox;
    QLabel *label_18;
    QDoubleSpinBox *MaterialColorGreenSpinBox;
    QLabel *label_19;
    QDoubleSpinBox *MaterialColorBlueSpinBox;
    QPushButton *MaterialColorPickButton;
    QWidget *CollisionTab;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_13;
    QPushButton *AddCollisionButton;
    QPushButton *RemoveCollisionButton;
    QListWidget *CollisionListWidget;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_47;
    QLineEdit *CollisionNameLineEdit;
    QGroupBox *CollisionOriginGroupBox;
    QGridLayout *gridLayout_5;
    QLabel *label_20;
    QDoubleSpinBox *CollisionOriginPitchSpinBox;
    QLabel *label_21;
    QDoubleSpinBox *CollisionOriginRollSpinBox;
    QLabel *label_22;
    QDoubleSpinBox *CollisionOriginYSpinBox;
    QLabel *label_23;
    QDoubleSpinBox *CollisionOriginZSpinBox;
    QLabel *label_24;
    QDoubleSpinBox *CollisionOriginYawSpinBox;
    QDoubleSpinBox *CollisionOriginXSpinBox;
    QLabel *label_25;
    QGroupBox *CollisionGeometryGroupBox;
    QGridLayout *gridLayout_6;
    QFrame *CollisionGeometryBoxTypeFrame;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_26;
    QDoubleSpinBox *CollisionGeometryBoxWidthSpinBox;
    QLabel *label_27;
    QDoubleSpinBox *CollisionGeometryBoxLengthSpinBox;
    QLabel *label_28;
    QDoubleSpinBox *CollisionGeometryBoxHeightSpinBox;
    QComboBox *CollisionGeometryTypeComboBox;
    QLabel *label_29;
    QFrame *CollisionGeometrySphereTypeFrame;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_30;
    QDoubleSpinBox *CollisionGeometrySphereRadiusSpinBox;
    QFrame *CollisionGeometryCylinderTypeFrame;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_31;
    QDoubleSpinBox *CollisionGeometryCylinderRadiusSpinBox;
    QLabel *label_32;
    QDoubleSpinBox *CollisionGeometryCylinderLengthSpinBox;
    QFrame *CollisionGeometryMeshTypeFrame;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_14;
    QLineEdit *CollisionGeometryMeshPathLineEdit;
    QWidget *InertialTab;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *InertialOriginGroupBox;
    QGridLayout *gridLayout_7;
    QLabel *label_33;
    QDoubleSpinBox *InertialOriginPitchSpinBox;
    QLabel *label_34;
    QDoubleSpinBox *InertialOriginRollSpinBox;
    QLabel *label_35;
    QDoubleSpinBox *InertialOriginYSpinBox;
    QLabel *label_36;
    QDoubleSpinBox *InertialOriginZSpinBox;
    QLabel *label_37;
    QDoubleSpinBox *InertialOriginYawSpinBox;
    QDoubleSpinBox *InertialOriginXSpinBox;
    QLabel *label_38;
    QGroupBox *InertialMassGroupBox;
    QVBoxLayout *verticalLayout_6;
    QDoubleSpinBox *InertialMassSpinBox;
    QGroupBox *InertialInertiaGroupBox;
    QGridLayout *gridLayout_8;
    QDoubleSpinBox *InertiaIXZSpinBox;
    QLabel *label_41;
    QLabel *label_40;
    QLabel *label_39;
    QDoubleSpinBox *InertiaIYYSpinBox;
    QDoubleSpinBox *InertiaIXXSpinBox;
    QLabel *label_44;
    QDoubleSpinBox *InertiaIXYSpinBox;
    QLabel *label_45;
    QDoubleSpinBox *InertiaIYZSpinBox;
    QDoubleSpinBox *InertiaIZZSpinBox;
    QLabel *label_43;
    QHBoxLayout *horizontalLayout_23;
    QPushButton *BuildInertiaBoxButton;
    QPushButton *BuildInertiaCylinderButton;
    QPushButton *BuildInertiaSphereButton;
    QSpacerItem *verticalSpacer_5;

    void setupUi(QDialog *UpdateLinkDialogUI)
    {
        if (UpdateLinkDialogUI->objectName().isEmpty())
            UpdateLinkDialogUI->setObjectName(QString::fromUtf8("UpdateLinkDialogUI"));
        UpdateLinkDialogUI->resize(526, 897);
        verticalLayout = new QVBoxLayout(UpdateLinkDialogUI);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        TabWidget = new QTabWidget(UpdateLinkDialogUI);
        TabWidget->setObjectName(QString::fromUtf8("TabWidget"));
        GeneralTab = new QWidget();
        GeneralTab->setObjectName(QString::fromUtf8("GeneralTab"));
        verticalLayout_4 = new QVBoxLayout(GeneralTab);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        NameLabel = new QLabel(GeneralTab);
        NameLabel->setObjectName(QString::fromUtf8("NameLabel"));
        NameLabel->setMaximumSize(QSize(16777215, 28));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        NameLabel->setFont(font);

        horizontalLayout_4->addWidget(NameLabel);

        NameLineEdit = new QLineEdit(GeneralTab);
        NameLineEdit->setObjectName(QString::fromUtf8("NameLineEdit"));

        horizontalLayout_4->addWidget(NameLineEdit);


        verticalLayout_4->addLayout(horizontalLayout_4);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);

        TabWidget->addTab(GeneralTab, QString());
        JointTab = new QWidget();
        JointTab->setObjectName(QString::fromUtf8("JointTab"));
        verticalLayout_10 = new QVBoxLayout(JointTab);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        label_53 = new QLabel(JointTab);
        label_53->setObjectName(QString::fromUtf8("label_53"));
        label_53->setMinimumSize(QSize(64, 0));
        label_53->setFont(font);

        horizontalLayout_14->addWidget(label_53);

        JointNameLineEdit = new QLineEdit(JointTab);
        JointNameLineEdit->setObjectName(QString::fromUtf8("JointNameLineEdit"));

        horizontalLayout_14->addWidget(JointNameLineEdit);


        verticalLayout_9->addLayout(horizontalLayout_14);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_54 = new QLabel(JointTab);
        label_54->setObjectName(QString::fromUtf8("label_54"));
        label_54->setMinimumSize(QSize(0, 0));
        label_54->setMaximumSize(QSize(64, 16777215));
        label_54->setFont(font);

        horizontalLayout_7->addWidget(label_54);

        JointTypeComboBox = new QComboBox(JointTab);
        JointTypeComboBox->addItem(QString());
        JointTypeComboBox->addItem(QString());
        JointTypeComboBox->addItem(QString());
        JointTypeComboBox->addItem(QString());
        JointTypeComboBox->addItem(QString());
        JointTypeComboBox->addItem(QString());
        JointTypeComboBox->setObjectName(QString::fromUtf8("JointTypeComboBox"));

        horizontalLayout_7->addWidget(JointTypeComboBox);


        verticalLayout_9->addLayout(horizontalLayout_7);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        label_55 = new QLabel(JointTab);
        label_55->setObjectName(QString::fromUtf8("label_55"));
        label_55->setMaximumSize(QSize(64, 16777215));
        label_55->setFont(font);

        horizontalLayout_16->addWidget(label_55);

        JointParentLinkComboBox = new QComboBox(JointTab);
        JointParentLinkComboBox->setObjectName(QString::fromUtf8("JointParentLinkComboBox"));

        horizontalLayout_16->addWidget(JointParentLinkComboBox);


        verticalLayout_9->addLayout(horizontalLayout_16);

        JointOriginGroupBox = new QGroupBox(JointTab);
        JointOriginGroupBox->setObjectName(QString::fromUtf8("JointOriginGroupBox"));
        JointOriginGroupBox->setEnabled(true);
        gridLayout_10 = new QGridLayout(JointOriginGroupBox);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        label_56 = new QLabel(JointOriginGroupBox);
        label_56->setObjectName(QString::fromUtf8("label_56"));
        label_56->setMaximumSize(QSize(50, 16777215));
        label_56->setLayoutDirection(Qt::LeftToRight);
        label_56->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_10->addWidget(label_56, 1, 2, 1, 1);

        JointOriginPitchSpinBox = new QDoubleSpinBox(JointOriginGroupBox);
        JointOriginPitchSpinBox->setObjectName(QString::fromUtf8("JointOriginPitchSpinBox"));
        JointOriginPitchSpinBox->setDecimals(6);
        JointOriginPitchSpinBox->setMinimum(-3.141592000000000);
        JointOriginPitchSpinBox->setMaximum(3.141592000000000);
        JointOriginPitchSpinBox->setSingleStep(0.100000000000000);

        gridLayout_10->addWidget(JointOriginPitchSpinBox, 1, 3, 1, 1);

        label_57 = new QLabel(JointOriginGroupBox);
        label_57->setObjectName(QString::fromUtf8("label_57"));
        label_57->setMaximumSize(QSize(20, 16777215));
        label_57->setLayoutDirection(Qt::LeftToRight);
        label_57->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_10->addWidget(label_57, 2, 0, 1, 1);

        JointOriginRollSpinBox = new QDoubleSpinBox(JointOriginGroupBox);
        JointOriginRollSpinBox->setObjectName(QString::fromUtf8("JointOriginRollSpinBox"));
        JointOriginRollSpinBox->setDecimals(6);
        JointOriginRollSpinBox->setMinimum(-3.141592000000000);
        JointOriginRollSpinBox->setMaximum(3.141592000000000);
        JointOriginRollSpinBox->setSingleStep(0.100000000000000);

        gridLayout_10->addWidget(JointOriginRollSpinBox, 0, 3, 1, 1);

        label_58 = new QLabel(JointOriginGroupBox);
        label_58->setObjectName(QString::fromUtf8("label_58"));
        label_58->setMaximumSize(QSize(20, 16777215));
        label_58->setLayoutDirection(Qt::LeftToRight);
        label_58->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_10->addWidget(label_58, 1, 0, 1, 1);

        JointOriginYSpinBox = new QDoubleSpinBox(JointOriginGroupBox);
        JointOriginYSpinBox->setObjectName(QString::fromUtf8("JointOriginYSpinBox"));
        JointOriginYSpinBox->setDecimals(6);
        JointOriginYSpinBox->setMinimum(-10000.000000000000000);
        JointOriginYSpinBox->setMaximum(10000.000000000000000);
        JointOriginYSpinBox->setSingleStep(0.100000000000000);

        gridLayout_10->addWidget(JointOriginYSpinBox, 1, 1, 1, 1);

        label_59 = new QLabel(JointOriginGroupBox);
        label_59->setObjectName(QString::fromUtf8("label_59"));
        label_59->setMaximumSize(QSize(50, 16777215));
        label_59->setLayoutDirection(Qt::LeftToRight);
        label_59->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_10->addWidget(label_59, 0, 2, 1, 1);

        JointOriginZSpinBox = new QDoubleSpinBox(JointOriginGroupBox);
        JointOriginZSpinBox->setObjectName(QString::fromUtf8("JointOriginZSpinBox"));
        JointOriginZSpinBox->setDecimals(6);
        JointOriginZSpinBox->setMinimum(-10000.000000000000000);
        JointOriginZSpinBox->setMaximum(10000.000000000000000);
        JointOriginZSpinBox->setSingleStep(0.100000000000000);

        gridLayout_10->addWidget(JointOriginZSpinBox, 2, 1, 1, 1);

        label_60 = new QLabel(JointOriginGroupBox);
        label_60->setObjectName(QString::fromUtf8("label_60"));
        label_60->setMaximumSize(QSize(50, 16777215));
        label_60->setLayoutDirection(Qt::LeftToRight);
        label_60->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_10->addWidget(label_60, 2, 2, 1, 1);

        JointOriginYawSpinBox = new QDoubleSpinBox(JointOriginGroupBox);
        JointOriginYawSpinBox->setObjectName(QString::fromUtf8("JointOriginYawSpinBox"));
        JointOriginYawSpinBox->setDecimals(6);
        JointOriginYawSpinBox->setMinimum(-3.141592000000000);
        JointOriginYawSpinBox->setMaximum(3.141592000000000);
        JointOriginYawSpinBox->setSingleStep(0.100000000000000);

        gridLayout_10->addWidget(JointOriginYawSpinBox, 2, 3, 1, 1);

        JointOriginXSpinBox = new QDoubleSpinBox(JointOriginGroupBox);
        JointOriginXSpinBox->setObjectName(QString::fromUtf8("JointOriginXSpinBox"));
        JointOriginXSpinBox->setDecimals(6);
        JointOriginXSpinBox->setMinimum(-10000.000000000000000);
        JointOriginXSpinBox->setMaximum(10000.000000000000000);
        JointOriginXSpinBox->setSingleStep(0.100000000000000);

        gridLayout_10->addWidget(JointOriginXSpinBox, 0, 1, 1, 1);

        label_61 = new QLabel(JointOriginGroupBox);
        label_61->setObjectName(QString::fromUtf8("label_61"));
        label_61->setMaximumSize(QSize(20, 16777215));
        label_61->setLayoutDirection(Qt::LeftToRight);
        label_61->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_10->addWidget(label_61, 0, 0, 1, 1);


        verticalLayout_9->addWidget(JointOriginGroupBox);

        JointAxisGroupBox = new QGroupBox(JointTab);
        JointAxisGroupBox->setObjectName(QString::fromUtf8("JointAxisGroupBox"));
        JointAxisGroupBox->setEnabled(true);
        horizontalLayout_17 = new QHBoxLayout(JointAxisGroupBox);
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        label_62 = new QLabel(JointAxisGroupBox);
        label_62->setObjectName(QString::fromUtf8("label_62"));
        label_62->setMaximumSize(QSize(20, 16777215));
        label_62->setLayoutDirection(Qt::LeftToRight);
        label_62->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_17->addWidget(label_62);

        JointAxisXSpinBox = new QDoubleSpinBox(JointAxisGroupBox);
        JointAxisXSpinBox->setObjectName(QString::fromUtf8("JointAxisXSpinBox"));
        JointAxisXSpinBox->setDecimals(6);
        JointAxisXSpinBox->setMinimum(-10000.000000000000000);
        JointAxisXSpinBox->setMaximum(10000.000000000000000);
        JointAxisXSpinBox->setSingleStep(0.100000000000000);
        JointAxisXSpinBox->setValue(1.000000000000000);

        horizontalLayout_17->addWidget(JointAxisXSpinBox);

        label_63 = new QLabel(JointAxisGroupBox);
        label_63->setObjectName(QString::fromUtf8("label_63"));
        label_63->setMaximumSize(QSize(20, 16777215));
        label_63->setLayoutDirection(Qt::LeftToRight);
        label_63->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_17->addWidget(label_63);

        JointAxisYSpinBox = new QDoubleSpinBox(JointAxisGroupBox);
        JointAxisYSpinBox->setObjectName(QString::fromUtf8("JointAxisYSpinBox"));
        JointAxisYSpinBox->setDecimals(6);
        JointAxisYSpinBox->setMinimum(-10000.000000000000000);
        JointAxisYSpinBox->setMaximum(10000.000000000000000);
        JointAxisYSpinBox->setSingleStep(0.100000000000000);

        horizontalLayout_17->addWidget(JointAxisYSpinBox);

        label_64 = new QLabel(JointAxisGroupBox);
        label_64->setObjectName(QString::fromUtf8("label_64"));
        label_64->setMaximumSize(QSize(20, 16777215));
        label_64->setLayoutDirection(Qt::LeftToRight);
        label_64->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_17->addWidget(label_64);

        JointAxisZSpinBox = new QDoubleSpinBox(JointAxisGroupBox);
        JointAxisZSpinBox->setObjectName(QString::fromUtf8("JointAxisZSpinBox"));
        JointAxisZSpinBox->setDecimals(6);
        JointAxisZSpinBox->setMinimum(-10000.000000000000000);
        JointAxisZSpinBox->setMaximum(10000.000000000000000);
        JointAxisZSpinBox->setSingleStep(0.100000000000000);

        horizontalLayout_17->addWidget(JointAxisZSpinBox);


        verticalLayout_9->addWidget(JointAxisGroupBox);

        JointCalibrationGroupBox = new QGroupBox(JointTab);
        JointCalibrationGroupBox->setObjectName(QString::fromUtf8("JointCalibrationGroupBox"));
        JointCalibrationGroupBox->setEnabled(true);
        horizontalLayout_22 = new QHBoxLayout(JointCalibrationGroupBox);
        horizontalLayout_22->setObjectName(QString::fromUtf8("horizontalLayout_22"));
        label_68 = new QLabel(JointCalibrationGroupBox);
        label_68->setObjectName(QString::fromUtf8("label_68"));
        label_68->setMaximumSize(QSize(16777215, 16777215));
        label_68->setLayoutDirection(Qt::LeftToRight);
        label_68->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_22->addWidget(label_68);

        JointCalibrationRisingSpinBox = new QDoubleSpinBox(JointCalibrationGroupBox);
        JointCalibrationRisingSpinBox->setObjectName(QString::fromUtf8("JointCalibrationRisingSpinBox"));
        JointCalibrationRisingSpinBox->setDecimals(6);
        JointCalibrationRisingSpinBox->setMinimum(-10000.000000000000000);
        JointCalibrationRisingSpinBox->setMaximum(10000.000000000000000);
        JointCalibrationRisingSpinBox->setSingleStep(0.100000000000000);
        JointCalibrationRisingSpinBox->setValue(0.000000000000000);

        horizontalLayout_22->addWidget(JointCalibrationRisingSpinBox);

        label_69 = new QLabel(JointCalibrationGroupBox);
        label_69->setObjectName(QString::fromUtf8("label_69"));
        label_69->setMaximumSize(QSize(16777215, 16777215));
        label_69->setLayoutDirection(Qt::LeftToRight);
        label_69->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_22->addWidget(label_69);

        JointCalibrationFallingSpinBox = new QDoubleSpinBox(JointCalibrationGroupBox);
        JointCalibrationFallingSpinBox->setObjectName(QString::fromUtf8("JointCalibrationFallingSpinBox"));
        JointCalibrationFallingSpinBox->setDecimals(6);
        JointCalibrationFallingSpinBox->setMinimum(-10000.000000000000000);
        JointCalibrationFallingSpinBox->setMaximum(10000.000000000000000);
        JointCalibrationFallingSpinBox->setSingleStep(0.100000000000000);

        horizontalLayout_22->addWidget(JointCalibrationFallingSpinBox);


        verticalLayout_9->addWidget(JointCalibrationGroupBox);

        JointDynamicsGroupBox = new QGroupBox(JointTab);
        JointDynamicsGroupBox->setObjectName(QString::fromUtf8("JointDynamicsGroupBox"));
        JointDynamicsGroupBox->setEnabled(true);
        horizontalLayout_24 = new QHBoxLayout(JointDynamicsGroupBox);
        horizontalLayout_24->setObjectName(QString::fromUtf8("horizontalLayout_24"));
        label_74 = new QLabel(JointDynamicsGroupBox);
        label_74->setObjectName(QString::fromUtf8("label_74"));
        label_74->setMaximumSize(QSize(16777215, 16777215));
        label_74->setLayoutDirection(Qt::LeftToRight);
        label_74->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_24->addWidget(label_74);

        JointDynamicsDamplingSpinBox = new QDoubleSpinBox(JointDynamicsGroupBox);
        JointDynamicsDamplingSpinBox->setObjectName(QString::fromUtf8("JointDynamicsDamplingSpinBox"));
        JointDynamicsDamplingSpinBox->setDecimals(6);
        JointDynamicsDamplingSpinBox->setMinimum(-10000.000000000000000);
        JointDynamicsDamplingSpinBox->setMaximum(10000.000000000000000);
        JointDynamicsDamplingSpinBox->setSingleStep(0.100000000000000);
        JointDynamicsDamplingSpinBox->setValue(0.000000000000000);

        horizontalLayout_24->addWidget(JointDynamicsDamplingSpinBox);

        label_75 = new QLabel(JointDynamicsGroupBox);
        label_75->setObjectName(QString::fromUtf8("label_75"));
        label_75->setMaximumSize(QSize(16777215, 16777215));
        label_75->setLayoutDirection(Qt::LeftToRight);
        label_75->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_24->addWidget(label_75);

        JointDynamicsFrictionSpinBox = new QDoubleSpinBox(JointDynamicsGroupBox);
        JointDynamicsFrictionSpinBox->setObjectName(QString::fromUtf8("JointDynamicsFrictionSpinBox"));
        JointDynamicsFrictionSpinBox->setDecimals(6);
        JointDynamicsFrictionSpinBox->setMinimum(-10000.000000000000000);
        JointDynamicsFrictionSpinBox->setMaximum(10000.000000000000000);
        JointDynamicsFrictionSpinBox->setSingleStep(0.100000000000000);

        horizontalLayout_24->addWidget(JointDynamicsFrictionSpinBox);


        verticalLayout_9->addWidget(JointDynamicsGroupBox);

        JointMimicGroupBox = new QGroupBox(JointTab);
        JointMimicGroupBox->setObjectName(QString::fromUtf8("JointMimicGroupBox"));
        JointMimicGroupBox->setEnabled(true);
        verticalLayout_8 = new QVBoxLayout(JointMimicGroupBox);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        horizontalLayout_28 = new QHBoxLayout();
        horizontalLayout_28->setObjectName(QString::fromUtf8("horizontalLayout_28"));
        label_48 = new QLabel(JointMimicGroupBox);
        label_48->setObjectName(QString::fromUtf8("label_48"));
        label_48->setMinimumSize(QSize(70, 0));
        label_48->setMaximumSize(QSize(64, 16777215));
        label_48->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_28->addWidget(label_48);

        JointMimicJointNameLineEdit = new QLineEdit(JointMimicGroupBox);
        JointMimicJointNameLineEdit->setObjectName(QString::fromUtf8("JointMimicJointNameLineEdit"));

        horizontalLayout_28->addWidget(JointMimicJointNameLineEdit);


        verticalLayout_8->addLayout(horizontalLayout_28);

        horizontalLayout_30 = new QHBoxLayout();
        horizontalLayout_30->setObjectName(QString::fromUtf8("horizontalLayout_30"));
        label_93 = new QLabel(JointMimicGroupBox);
        label_93->setObjectName(QString::fromUtf8("label_93"));
        label_93->setMinimumSize(QSize(70, 0));
        label_93->setMaximumSize(QSize(64, 16777215));
        label_93->setLayoutDirection(Qt::LeftToRight);
        label_93->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_30->addWidget(label_93);

        JointMimicOffsetSpinBox = new QDoubleSpinBox(JointMimicGroupBox);
        JointMimicOffsetSpinBox->setObjectName(QString::fromUtf8("JointMimicOffsetSpinBox"));
        JointMimicOffsetSpinBox->setDecimals(6);
        JointMimicOffsetSpinBox->setMinimum(-10000.000000000000000);
        JointMimicOffsetSpinBox->setMaximum(10000.000000000000000);
        JointMimicOffsetSpinBox->setSingleStep(0.100000000000000);

        horizontalLayout_30->addWidget(JointMimicOffsetSpinBox);


        verticalLayout_8->addLayout(horizontalLayout_30);

        horizontalLayout_31 = new QHBoxLayout();
        horizontalLayout_31->setObjectName(QString::fromUtf8("horizontalLayout_31"));
        label_92 = new QLabel(JointMimicGroupBox);
        label_92->setObjectName(QString::fromUtf8("label_92"));
        label_92->setMinimumSize(QSize(70, 0));
        label_92->setMaximumSize(QSize(64, 16777215));
        label_92->setLayoutDirection(Qt::LeftToRight);
        label_92->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_31->addWidget(label_92);

        JointMimicMultiplierSpinBox = new QDoubleSpinBox(JointMimicGroupBox);
        JointMimicMultiplierSpinBox->setObjectName(QString::fromUtf8("JointMimicMultiplierSpinBox"));
        JointMimicMultiplierSpinBox->setDecimals(6);
        JointMimicMultiplierSpinBox->setMinimum(-10000.000000000000000);
        JointMimicMultiplierSpinBox->setMaximum(10000.000000000000000);
        JointMimicMultiplierSpinBox->setSingleStep(0.100000000000000);
        JointMimicMultiplierSpinBox->setValue(0.000000000000000);

        horizontalLayout_31->addWidget(JointMimicMultiplierSpinBox);


        verticalLayout_8->addLayout(horizontalLayout_31);


        verticalLayout_9->addWidget(JointMimicGroupBox);

        JointSafetyGroupBox = new QGroupBox(JointTab);
        JointSafetyGroupBox->setObjectName(QString::fromUtf8("JointSafetyGroupBox"));
        JointSafetyGroupBox->setEnabled(true);
        gridLayout_4 = new QGridLayout(JointSafetyGroupBox);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        JointSafetyLowerLimitSpinBox = new QDoubleSpinBox(JointSafetyGroupBox);
        JointSafetyLowerLimitSpinBox->setObjectName(QString::fromUtf8("JointSafetyLowerLimitSpinBox"));
        JointSafetyLowerLimitSpinBox->setDecimals(6);
        JointSafetyLowerLimitSpinBox->setMinimum(-10000.000000000000000);
        JointSafetyLowerLimitSpinBox->setMaximum(10000.000000000000000);
        JointSafetyLowerLimitSpinBox->setSingleStep(0.100000000000000);
        JointSafetyLowerLimitSpinBox->setValue(0.000000000000000);

        gridLayout_4->addWidget(JointSafetyLowerLimitSpinBox, 0, 1, 1, 1);

        JointSafetyUpperLimitSpinBox = new QDoubleSpinBox(JointSafetyGroupBox);
        JointSafetyUpperLimitSpinBox->setObjectName(QString::fromUtf8("JointSafetyUpperLimitSpinBox"));
        JointSafetyUpperLimitSpinBox->setDecimals(6);
        JointSafetyUpperLimitSpinBox->setMinimum(-10000.000000000000000);
        JointSafetyUpperLimitSpinBox->setMaximum(10000.000000000000000);
        JointSafetyUpperLimitSpinBox->setSingleStep(0.100000000000000);

        gridLayout_4->addWidget(JointSafetyUpperLimitSpinBox, 0, 3, 1, 1);

        label_78 = new QLabel(JointSafetyGroupBox);
        label_78->setObjectName(QString::fromUtf8("label_78"));
        label_78->setMaximumSize(QSize(16777215, 16777215));
        label_78->setLayoutDirection(Qt::LeftToRight);
        label_78->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_78, 0, 2, 1, 1);

        JointSafetyKVelocitySpinBox = new QDoubleSpinBox(JointSafetyGroupBox);
        JointSafetyKVelocitySpinBox->setObjectName(QString::fromUtf8("JointSafetyKVelocitySpinBox"));
        JointSafetyKVelocitySpinBox->setDecimals(6);
        JointSafetyKVelocitySpinBox->setMinimum(-10000.000000000000000);
        JointSafetyKVelocitySpinBox->setMaximum(10000.000000000000000);
        JointSafetyKVelocitySpinBox->setSingleStep(0.100000000000000);

        gridLayout_4->addWidget(JointSafetyKVelocitySpinBox, 1, 3, 1, 1);

        label_77 = new QLabel(JointSafetyGroupBox);
        label_77->setObjectName(QString::fromUtf8("label_77"));
        label_77->setMaximumSize(QSize(16777215, 16777215));
        label_77->setLayoutDirection(Qt::LeftToRight);
        label_77->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_77, 0, 0, 1, 1);

        label_79 = new QLabel(JointSafetyGroupBox);
        label_79->setObjectName(QString::fromUtf8("label_79"));
        label_79->setMaximumSize(QSize(16777215, 16777215));
        label_79->setLayoutDirection(Qt::LeftToRight);
        label_79->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_79, 1, 2, 1, 1);

        JointSafetyKPositionSpinBox = new QDoubleSpinBox(JointSafetyGroupBox);
        JointSafetyKPositionSpinBox->setObjectName(QString::fromUtf8("JointSafetyKPositionSpinBox"));
        JointSafetyKPositionSpinBox->setDecimals(6);
        JointSafetyKPositionSpinBox->setMinimum(-10000.000000000000000);
        JointSafetyKPositionSpinBox->setMaximum(10000.000000000000000);
        JointSafetyKPositionSpinBox->setSingleStep(0.100000000000000);

        gridLayout_4->addWidget(JointSafetyKPositionSpinBox, 1, 1, 1, 1);

        label_94 = new QLabel(JointSafetyGroupBox);
        label_94->setObjectName(QString::fromUtf8("label_94"));
        label_94->setMaximumSize(QSize(16777215, 16777215));
        label_94->setLayoutDirection(Qt::LeftToRight);
        label_94->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_94, 1, 0, 1, 1);


        verticalLayout_9->addWidget(JointSafetyGroupBox);

        JointLimitGroupBox = new QGroupBox(JointTab);
        JointLimitGroupBox->setObjectName(QString::fromUtf8("JointLimitGroupBox"));
        JointLimitGroupBox->setEnabled(true);
        gridLayout = new QGridLayout(JointLimitGroupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_86 = new QLabel(JointLimitGroupBox);
        label_86->setObjectName(QString::fromUtf8("label_86"));
        label_86->setMaximumSize(QSize(16777215, 16777215));
        label_86->setLayoutDirection(Qt::LeftToRight);
        label_86->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_86, 0, 0, 1, 1);

        JointLimitLowerSpinBox = new QDoubleSpinBox(JointLimitGroupBox);
        JointLimitLowerSpinBox->setObjectName(QString::fromUtf8("JointLimitLowerSpinBox"));
        JointLimitLowerSpinBox->setDecimals(6);
        JointLimitLowerSpinBox->setMinimum(-10000.000000000000000);
        JointLimitLowerSpinBox->setMaximum(10000.000000000000000);
        JointLimitLowerSpinBox->setSingleStep(0.100000000000000);
        JointLimitLowerSpinBox->setValue(0.000000000000000);

        gridLayout->addWidget(JointLimitLowerSpinBox, 0, 1, 1, 1);

        label_87 = new QLabel(JointLimitGroupBox);
        label_87->setObjectName(QString::fromUtf8("label_87"));
        label_87->setMaximumSize(QSize(16777215, 16777215));
        label_87->setLayoutDirection(Qt::LeftToRight);
        label_87->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_87, 0, 2, 1, 1);

        JointLimitUpperSpinBox = new QDoubleSpinBox(JointLimitGroupBox);
        JointLimitUpperSpinBox->setObjectName(QString::fromUtf8("JointLimitUpperSpinBox"));
        JointLimitUpperSpinBox->setDecimals(6);
        JointLimitUpperSpinBox->setMinimum(-10000.000000000000000);
        JointLimitUpperSpinBox->setMaximum(10000.000000000000000);
        JointLimitUpperSpinBox->setSingleStep(0.100000000000000);

        gridLayout->addWidget(JointLimitUpperSpinBox, 0, 3, 1, 1);

        label_88 = new QLabel(JointLimitGroupBox);
        label_88->setObjectName(QString::fromUtf8("label_88"));
        label_88->setMaximumSize(QSize(16777215, 16777215));
        label_88->setLayoutDirection(Qt::LeftToRight);
        label_88->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_88, 1, 0, 1, 1);

        JointLimitEffortSpinBox = new QDoubleSpinBox(JointLimitGroupBox);
        JointLimitEffortSpinBox->setObjectName(QString::fromUtf8("JointLimitEffortSpinBox"));
        JointLimitEffortSpinBox->setDecimals(6);
        JointLimitEffortSpinBox->setMinimum(-10000.000000000000000);
        JointLimitEffortSpinBox->setMaximum(10000.000000000000000);
        JointLimitEffortSpinBox->setSingleStep(0.100000000000000);
        JointLimitEffortSpinBox->setValue(0.000000000000000);

        gridLayout->addWidget(JointLimitEffortSpinBox, 1, 1, 1, 1);

        JointLimitVelocitySpinBox = new QDoubleSpinBox(JointLimitGroupBox);
        JointLimitVelocitySpinBox->setObjectName(QString::fromUtf8("JointLimitVelocitySpinBox"));
        JointLimitVelocitySpinBox->setDecimals(6);
        JointLimitVelocitySpinBox->setMinimum(-10000.000000000000000);
        JointLimitVelocitySpinBox->setMaximum(10000.000000000000000);
        JointLimitVelocitySpinBox->setSingleStep(0.100000000000000);

        gridLayout->addWidget(JointLimitVelocitySpinBox, 1, 3, 1, 1);

        label_95 = new QLabel(JointLimitGroupBox);
        label_95->setObjectName(QString::fromUtf8("label_95"));
        label_95->setMaximumSize(QSize(16777215, 16777215));
        label_95->setLayoutDirection(Qt::LeftToRight);
        label_95->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_95, 1, 2, 1, 1);


        verticalLayout_9->addWidget(JointLimitGroupBox);


        verticalLayout_10->addLayout(verticalLayout_9);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_10->addItem(verticalSpacer_6);

        TabWidget->addTab(JointTab, QString());
        VisualTab = new QWidget();
        VisualTab->setObjectName(QString::fromUtf8("VisualTab"));
        verticalLayout_2 = new QVBoxLayout(VisualTab);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        AddVisualButton = new QPushButton(VisualTab);
        AddVisualButton->setObjectName(QString::fromUtf8("AddVisualButton"));

        horizontalLayout_12->addWidget(AddVisualButton);

        RemoveVisualButton = new QPushButton(VisualTab);
        RemoveVisualButton->setObjectName(QString::fromUtf8("RemoveVisualButton"));

        horizontalLayout_12->addWidget(RemoveVisualButton);


        verticalLayout_2->addLayout(horizontalLayout_12);

        VisualListWidget = new QListWidget(VisualTab);
        VisualListWidget->setObjectName(QString::fromUtf8("VisualListWidget"));

        verticalLayout_2->addWidget(VisualListWidget);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        label_46 = new QLabel(VisualTab);
        label_46->setObjectName(QString::fromUtf8("label_46"));
        label_46->setMinimumSize(QSize(64, 0));
        label_46->setFont(font);

        horizontalLayout_15->addWidget(label_46);

        VisualNameLineEdit = new QLineEdit(VisualTab);
        VisualNameLineEdit->setObjectName(QString::fromUtf8("VisualNameLineEdit"));

        horizontalLayout_15->addWidget(VisualNameLineEdit);


        verticalLayout_2->addLayout(horizontalLayout_15);

        VisualOriginGroupBox = new QGroupBox(VisualTab);
        VisualOriginGroupBox->setObjectName(QString::fromUtf8("VisualOriginGroupBox"));
        VisualOriginGroupBox->setEnabled(true);
        gridLayout_2 = new QGridLayout(VisualOriginGroupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_2 = new QLabel(VisualOriginGroupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMaximumSize(QSize(50, 16777215));
        label_2->setLayoutDirection(Qt::LeftToRight);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_2, 1, 2, 1, 1);

        VisualOriginPitchSpinBox = new QDoubleSpinBox(VisualOriginGroupBox);
        VisualOriginPitchSpinBox->setObjectName(QString::fromUtf8("VisualOriginPitchSpinBox"));
        VisualOriginPitchSpinBox->setDecimals(6);
        VisualOriginPitchSpinBox->setMinimum(-3.141592000000000);
        VisualOriginPitchSpinBox->setMaximum(3.141592000000000);
        VisualOriginPitchSpinBox->setSingleStep(0.100000000000000);

        gridLayout_2->addWidget(VisualOriginPitchSpinBox, 1, 3, 1, 1);

        label_6 = new QLabel(VisualOriginGroupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMaximumSize(QSize(20, 16777215));
        label_6->setLayoutDirection(Qt::LeftToRight);
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_6, 2, 0, 1, 1);

        VisualOriginRollSpinBox = new QDoubleSpinBox(VisualOriginGroupBox);
        VisualOriginRollSpinBox->setObjectName(QString::fromUtf8("VisualOriginRollSpinBox"));
        VisualOriginRollSpinBox->setDecimals(6);
        VisualOriginRollSpinBox->setMinimum(-3.141592000000000);
        VisualOriginRollSpinBox->setMaximum(3.141592000000000);
        VisualOriginRollSpinBox->setSingleStep(0.100000000000000);

        gridLayout_2->addWidget(VisualOriginRollSpinBox, 0, 3, 1, 1);

        label_5 = new QLabel(VisualOriginGroupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMaximumSize(QSize(20, 16777215));
        label_5->setLayoutDirection(Qt::LeftToRight);
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_5, 1, 0, 1, 1);

        VisualOriginYSpinBox = new QDoubleSpinBox(VisualOriginGroupBox);
        VisualOriginYSpinBox->setObjectName(QString::fromUtf8("VisualOriginYSpinBox"));
        VisualOriginYSpinBox->setDecimals(6);
        VisualOriginYSpinBox->setMinimum(-10000.000000000000000);
        VisualOriginYSpinBox->setMaximum(10000.000000000000000);
        VisualOriginYSpinBox->setSingleStep(0.100000000000000);

        gridLayout_2->addWidget(VisualOriginYSpinBox, 1, 1, 1, 1);

        label = new QLabel(VisualOriginGroupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(50, 16777215));
        label->setLayoutDirection(Qt::LeftToRight);
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label, 0, 2, 1, 1);

        VisualOriginZSpinBox = new QDoubleSpinBox(VisualOriginGroupBox);
        VisualOriginZSpinBox->setObjectName(QString::fromUtf8("VisualOriginZSpinBox"));
        VisualOriginZSpinBox->setDecimals(6);
        VisualOriginZSpinBox->setMinimum(-10000.000000000000000);
        VisualOriginZSpinBox->setMaximum(10000.000000000000000);
        VisualOriginZSpinBox->setSingleStep(0.100000000000000);

        gridLayout_2->addWidget(VisualOriginZSpinBox, 2, 1, 1, 1);

        label_3 = new QLabel(VisualOriginGroupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMaximumSize(QSize(50, 16777215));
        label_3->setLayoutDirection(Qt::LeftToRight);
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_3, 2, 2, 1, 1);

        VisualOriginYawSpinBox = new QDoubleSpinBox(VisualOriginGroupBox);
        VisualOriginYawSpinBox->setObjectName(QString::fromUtf8("VisualOriginYawSpinBox"));
        VisualOriginYawSpinBox->setDecimals(6);
        VisualOriginYawSpinBox->setMinimum(-3.141592000000000);
        VisualOriginYawSpinBox->setMaximum(3.141592000000000);
        VisualOriginYawSpinBox->setSingleStep(0.100000000000000);

        gridLayout_2->addWidget(VisualOriginYawSpinBox, 2, 3, 1, 1);

        VisualOriginXSpinBox = new QDoubleSpinBox(VisualOriginGroupBox);
        VisualOriginXSpinBox->setObjectName(QString::fromUtf8("VisualOriginXSpinBox"));
        VisualOriginXSpinBox->setDecimals(6);
        VisualOriginXSpinBox->setMinimum(-10000.000000000000000);
        VisualOriginXSpinBox->setMaximum(10000.000000000000000);
        VisualOriginXSpinBox->setSingleStep(0.100000000000000);

        gridLayout_2->addWidget(VisualOriginXSpinBox, 0, 1, 1, 1);

        label_16 = new QLabel(VisualOriginGroupBox);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setMaximumSize(QSize(20, 16777215));
        label_16->setLayoutDirection(Qt::LeftToRight);
        label_16->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_16, 0, 0, 1, 1);


        verticalLayout_2->addWidget(VisualOriginGroupBox);

        VisualGeometryGroupBox = new QGroupBox(VisualTab);
        VisualGeometryGroupBox->setObjectName(QString::fromUtf8("VisualGeometryGroupBox"));
        VisualGeometryGroupBox->setEnabled(true);
        gridLayout_3 = new QGridLayout(VisualGeometryGroupBox);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        VisualGeometryBoxTypeFrame = new QFrame(VisualGeometryGroupBox);
        VisualGeometryBoxTypeFrame->setObjectName(QString::fromUtf8("VisualGeometryBoxTypeFrame"));
        VisualGeometryBoxTypeFrame->setFrameShape(QFrame::StyledPanel);
        VisualGeometryBoxTypeFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(VisualGeometryBoxTypeFrame);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_4 = new QLabel(VisualGeometryBoxTypeFrame);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMaximumSize(QSize(50, 16777215));
        label_4->setLayoutDirection(Qt::LeftToRight);
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label_4);

        VisualGeometryBoxWidthSpinBox = new QDoubleSpinBox(VisualGeometryBoxTypeFrame);
        VisualGeometryBoxWidthSpinBox->setObjectName(QString::fromUtf8("VisualGeometryBoxWidthSpinBox"));
        VisualGeometryBoxWidthSpinBox->setDecimals(4);

        horizontalLayout->addWidget(VisualGeometryBoxWidthSpinBox);

        label_8 = new QLabel(VisualGeometryBoxTypeFrame);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setMaximumSize(QSize(50, 16777215));
        label_8->setLayoutDirection(Qt::LeftToRight);
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label_8);

        VisualGeometryBoxLengthSpinBox = new QDoubleSpinBox(VisualGeometryBoxTypeFrame);
        VisualGeometryBoxLengthSpinBox->setObjectName(QString::fromUtf8("VisualGeometryBoxLengthSpinBox"));
        VisualGeometryBoxLengthSpinBox->setDecimals(4);

        horizontalLayout->addWidget(VisualGeometryBoxLengthSpinBox);

        label_9 = new QLabel(VisualGeometryBoxTypeFrame);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setMaximumSize(QSize(50, 16777215));
        label_9->setLayoutDirection(Qt::LeftToRight);
        label_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label_9);

        VisualGeometryBoxHeightSpinBox = new QDoubleSpinBox(VisualGeometryBoxTypeFrame);
        VisualGeometryBoxHeightSpinBox->setObjectName(QString::fromUtf8("VisualGeometryBoxHeightSpinBox"));
        VisualGeometryBoxHeightSpinBox->setDecimals(4);

        horizontalLayout->addWidget(VisualGeometryBoxHeightSpinBox);


        gridLayout_3->addWidget(VisualGeometryBoxTypeFrame, 2, 0, 1, 2);

        VisualGeometryTypeComboBox = new QComboBox(VisualGeometryGroupBox);
        VisualGeometryTypeComboBox->addItem(QString());
        VisualGeometryTypeComboBox->addItem(QString());
        VisualGeometryTypeComboBox->addItem(QString());
        VisualGeometryTypeComboBox->addItem(QString());
        VisualGeometryTypeComboBox->setObjectName(QString::fromUtf8("VisualGeometryTypeComboBox"));

        gridLayout_3->addWidget(VisualGeometryTypeComboBox, 0, 1, 1, 1);

        label_7 = new QLabel(VisualGeometryGroupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setMaximumSize(QSize(34, 16777215));

        gridLayout_3->addWidget(label_7, 0, 0, 1, 1);

        VisualGeometrySphereTypeFrame = new QFrame(VisualGeometryGroupBox);
        VisualGeometrySphereTypeFrame->setObjectName(QString::fromUtf8("VisualGeometrySphereTypeFrame"));
        VisualGeometrySphereTypeFrame->setFrameShape(QFrame::StyledPanel);
        VisualGeometrySphereTypeFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(VisualGeometrySphereTypeFrame);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_12 = new QLabel(VisualGeometrySphereTypeFrame);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setMaximumSize(QSize(50, 16777215));
        label_12->setLayoutDirection(Qt::LeftToRight);
        label_12->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(label_12);

        VisualGeometrySphereRadiusSpinBox = new QDoubleSpinBox(VisualGeometrySphereTypeFrame);
        VisualGeometrySphereRadiusSpinBox->setObjectName(QString::fromUtf8("VisualGeometrySphereRadiusSpinBox"));
        VisualGeometrySphereRadiusSpinBox->setDecimals(4);

        horizontalLayout_3->addWidget(VisualGeometrySphereRadiusSpinBox);


        gridLayout_3->addWidget(VisualGeometrySphereTypeFrame, 4, 0, 1, 2);

        VisualGeometryCylinderTypeFrame = new QFrame(VisualGeometryGroupBox);
        VisualGeometryCylinderTypeFrame->setObjectName(QString::fromUtf8("VisualGeometryCylinderTypeFrame"));
        VisualGeometryCylinderTypeFrame->setFrameShape(QFrame::StyledPanel);
        VisualGeometryCylinderTypeFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(VisualGeometryCylinderTypeFrame);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_10 = new QLabel(VisualGeometryCylinderTypeFrame);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setMaximumSize(QSize(50, 16777215));
        label_10->setLayoutDirection(Qt::LeftToRight);
        label_10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label_10);

        VisualGeometryCylinderRadiusSpinBox = new QDoubleSpinBox(VisualGeometryCylinderTypeFrame);
        VisualGeometryCylinderRadiusSpinBox->setObjectName(QString::fromUtf8("VisualGeometryCylinderRadiusSpinBox"));
        VisualGeometryCylinderRadiusSpinBox->setDecimals(4);

        horizontalLayout_2->addWidget(VisualGeometryCylinderRadiusSpinBox);

        label_11 = new QLabel(VisualGeometryCylinderTypeFrame);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setMaximumSize(QSize(50, 16777215));
        label_11->setLayoutDirection(Qt::LeftToRight);
        label_11->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label_11);

        VisualGeometryCylinderLengthSpinBox = new QDoubleSpinBox(VisualGeometryCylinderTypeFrame);
        VisualGeometryCylinderLengthSpinBox->setObjectName(QString::fromUtf8("VisualGeometryCylinderLengthSpinBox"));
        VisualGeometryCylinderLengthSpinBox->setDecimals(4);

        horizontalLayout_2->addWidget(VisualGeometryCylinderLengthSpinBox);


        gridLayout_3->addWidget(VisualGeometryCylinderTypeFrame, 3, 0, 1, 2);

        VisualGeometryMeshTypeFrame = new QFrame(VisualGeometryGroupBox);
        VisualGeometryMeshTypeFrame->setObjectName(QString::fromUtf8("VisualGeometryMeshTypeFrame"));
        VisualGeometryMeshTypeFrame->setFrameShape(QFrame::StyledPanel);
        VisualGeometryMeshTypeFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout_6 = new QHBoxLayout(VisualGeometryMeshTypeFrame);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_13 = new QLabel(VisualGeometryMeshTypeFrame);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        horizontalLayout_6->addWidget(label_13);

        VisualGeometryMeshPathLineEdit = new QLineEdit(VisualGeometryMeshTypeFrame);
        VisualGeometryMeshPathLineEdit->setObjectName(QString::fromUtf8("VisualGeometryMeshPathLineEdit"));

        horizontalLayout_6->addWidget(VisualGeometryMeshPathLineEdit);


        gridLayout_3->addWidget(VisualGeometryMeshTypeFrame, 1, 0, 1, 2);


        verticalLayout_2->addWidget(VisualGeometryGroupBox);

        VisualMaterialGroupBox = new QGroupBox(VisualTab);
        VisualMaterialGroupBox->setObjectName(QString::fromUtf8("VisualMaterialGroupBox"));
        VisualMaterialGroupBox->setEnabled(true);
        verticalLayout_7 = new QVBoxLayout(VisualMaterialGroupBox);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_15 = new QLabel(VisualMaterialGroupBox);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setMinimumSize(QSize(60, 0));
        label_15->setMaximumSize(QSize(40, 28));

        horizontalLayout_5->addWidget(label_15);

        MaterialNameLineEdit = new QLineEdit(VisualMaterialGroupBox);
        MaterialNameLineEdit->setObjectName(QString::fromUtf8("MaterialNameLineEdit"));

        horizontalLayout_5->addWidget(MaterialNameLineEdit);


        verticalLayout_7->addLayout(horizontalLayout_5);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName(QString::fromUtf8("horizontalLayout_19"));
        label_42 = new QLabel(VisualMaterialGroupBox);
        label_42->setObjectName(QString::fromUtf8("label_42"));
        label_42->setMinimumSize(QSize(60, 0));
        label_42->setMaximumSize(QSize(40, 28));

        horizontalLayout_19->addWidget(label_42);

        MaterialTexturePathLineEdit = new QLineEdit(VisualMaterialGroupBox);
        MaterialTexturePathLineEdit->setObjectName(QString::fromUtf8("MaterialTexturePathLineEdit"));

        horizontalLayout_19->addWidget(MaterialTexturePathLineEdit);


        verticalLayout_7->addLayout(horizontalLayout_19);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setObjectName(QString::fromUtf8("horizontalLayout_20"));
        label_17 = new QLabel(VisualMaterialGroupBox);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setMaximumSize(QSize(10, 16777215));
        label_17->setLayoutDirection(Qt::LeftToRight);
        label_17->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_20->addWidget(label_17);

        MaterialColorRedSpinBox = new QDoubleSpinBox(VisualMaterialGroupBox);
        MaterialColorRedSpinBox->setObjectName(QString::fromUtf8("MaterialColorRedSpinBox"));

        horizontalLayout_20->addWidget(MaterialColorRedSpinBox);

        label_18 = new QLabel(VisualMaterialGroupBox);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setMaximumSize(QSize(10, 16777215));
        label_18->setLayoutDirection(Qt::LeftToRight);
        label_18->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_20->addWidget(label_18);

        MaterialColorGreenSpinBox = new QDoubleSpinBox(VisualMaterialGroupBox);
        MaterialColorGreenSpinBox->setObjectName(QString::fromUtf8("MaterialColorGreenSpinBox"));

        horizontalLayout_20->addWidget(MaterialColorGreenSpinBox);

        label_19 = new QLabel(VisualMaterialGroupBox);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setMaximumSize(QSize(10, 16777215));
        label_19->setLayoutDirection(Qt::LeftToRight);
        label_19->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_20->addWidget(label_19);

        MaterialColorBlueSpinBox = new QDoubleSpinBox(VisualMaterialGroupBox);
        MaterialColorBlueSpinBox->setObjectName(QString::fromUtf8("MaterialColorBlueSpinBox"));

        horizontalLayout_20->addWidget(MaterialColorBlueSpinBox);

        MaterialColorPickButton = new QPushButton(VisualMaterialGroupBox);
        MaterialColorPickButton->setObjectName(QString::fromUtf8("MaterialColorPickButton"));

        horizontalLayout_20->addWidget(MaterialColorPickButton);


        verticalLayout_7->addLayout(horizontalLayout_20);


        verticalLayout_2->addWidget(VisualMaterialGroupBox);

        TabWidget->addTab(VisualTab, QString());
        CollisionTab = new QWidget();
        CollisionTab->setObjectName(QString::fromUtf8("CollisionTab"));
        verticalLayout_3 = new QVBoxLayout(CollisionTab);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        AddCollisionButton = new QPushButton(CollisionTab);
        AddCollisionButton->setObjectName(QString::fromUtf8("AddCollisionButton"));

        horizontalLayout_13->addWidget(AddCollisionButton);

        RemoveCollisionButton = new QPushButton(CollisionTab);
        RemoveCollisionButton->setObjectName(QString::fromUtf8("RemoveCollisionButton"));

        horizontalLayout_13->addWidget(RemoveCollisionButton);


        verticalLayout_3->addLayout(horizontalLayout_13);

        CollisionListWidget = new QListWidget(CollisionTab);
        CollisionListWidget->setObjectName(QString::fromUtf8("CollisionListWidget"));

        verticalLayout_3->addWidget(CollisionListWidget);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        label_47 = new QLabel(CollisionTab);
        label_47->setObjectName(QString::fromUtf8("label_47"));
        label_47->setMinimumSize(QSize(64, 0));
        label_47->setFont(font);

        horizontalLayout_18->addWidget(label_47);

        CollisionNameLineEdit = new QLineEdit(CollisionTab);
        CollisionNameLineEdit->setObjectName(QString::fromUtf8("CollisionNameLineEdit"));

        horizontalLayout_18->addWidget(CollisionNameLineEdit);


        verticalLayout_3->addLayout(horizontalLayout_18);

        CollisionOriginGroupBox = new QGroupBox(CollisionTab);
        CollisionOriginGroupBox->setObjectName(QString::fromUtf8("CollisionOriginGroupBox"));
        CollisionOriginGroupBox->setEnabled(true);
        gridLayout_5 = new QGridLayout(CollisionOriginGroupBox);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        label_20 = new QLabel(CollisionOriginGroupBox);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setMaximumSize(QSize(50, 16777215));
        label_20->setLayoutDirection(Qt::LeftToRight);
        label_20->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_5->addWidget(label_20, 1, 2, 1, 1);

        CollisionOriginPitchSpinBox = new QDoubleSpinBox(CollisionOriginGroupBox);
        CollisionOriginPitchSpinBox->setObjectName(QString::fromUtf8("CollisionOriginPitchSpinBox"));
        CollisionOriginPitchSpinBox->setDecimals(6);
        CollisionOriginPitchSpinBox->setMinimum(-3.141592000000000);
        CollisionOriginPitchSpinBox->setMaximum(3.141592000000000);
        CollisionOriginPitchSpinBox->setSingleStep(0.100000000000000);

        gridLayout_5->addWidget(CollisionOriginPitchSpinBox, 1, 3, 1, 1);

        label_21 = new QLabel(CollisionOriginGroupBox);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setMaximumSize(QSize(20, 16777215));
        label_21->setLayoutDirection(Qt::LeftToRight);
        label_21->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_5->addWidget(label_21, 2, 0, 1, 1);

        CollisionOriginRollSpinBox = new QDoubleSpinBox(CollisionOriginGroupBox);
        CollisionOriginRollSpinBox->setObjectName(QString::fromUtf8("CollisionOriginRollSpinBox"));
        CollisionOriginRollSpinBox->setDecimals(6);
        CollisionOriginRollSpinBox->setMinimum(-3.141592000000000);
        CollisionOriginRollSpinBox->setMaximum(3.141592000000000);
        CollisionOriginRollSpinBox->setSingleStep(0.100000000000000);

        gridLayout_5->addWidget(CollisionOriginRollSpinBox, 0, 3, 1, 1);

        label_22 = new QLabel(CollisionOriginGroupBox);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setMaximumSize(QSize(20, 16777215));
        label_22->setLayoutDirection(Qt::LeftToRight);
        label_22->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_5->addWidget(label_22, 1, 0, 1, 1);

        CollisionOriginYSpinBox = new QDoubleSpinBox(CollisionOriginGroupBox);
        CollisionOriginYSpinBox->setObjectName(QString::fromUtf8("CollisionOriginYSpinBox"));
        CollisionOriginYSpinBox->setDecimals(6);
        CollisionOriginYSpinBox->setMinimum(-10000.000000000000000);
        CollisionOriginYSpinBox->setMaximum(10000.000000000000000);
        CollisionOriginYSpinBox->setSingleStep(0.100000000000000);

        gridLayout_5->addWidget(CollisionOriginYSpinBox, 1, 1, 1, 1);

        label_23 = new QLabel(CollisionOriginGroupBox);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setMaximumSize(QSize(50, 16777215));
        label_23->setLayoutDirection(Qt::LeftToRight);
        label_23->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_5->addWidget(label_23, 0, 2, 1, 1);

        CollisionOriginZSpinBox = new QDoubleSpinBox(CollisionOriginGroupBox);
        CollisionOriginZSpinBox->setObjectName(QString::fromUtf8("CollisionOriginZSpinBox"));
        CollisionOriginZSpinBox->setDecimals(6);
        CollisionOriginZSpinBox->setMinimum(-10000.000000000000000);
        CollisionOriginZSpinBox->setMaximum(10000.000000000000000);
        CollisionOriginZSpinBox->setSingleStep(0.100000000000000);

        gridLayout_5->addWidget(CollisionOriginZSpinBox, 2, 1, 1, 1);

        label_24 = new QLabel(CollisionOriginGroupBox);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setMaximumSize(QSize(50, 16777215));
        label_24->setLayoutDirection(Qt::LeftToRight);
        label_24->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_5->addWidget(label_24, 2, 2, 1, 1);

        CollisionOriginYawSpinBox = new QDoubleSpinBox(CollisionOriginGroupBox);
        CollisionOriginYawSpinBox->setObjectName(QString::fromUtf8("CollisionOriginYawSpinBox"));
        CollisionOriginYawSpinBox->setDecimals(6);
        CollisionOriginYawSpinBox->setMinimum(-3.141592000000000);
        CollisionOriginYawSpinBox->setMaximum(3.141592000000000);
        CollisionOriginYawSpinBox->setSingleStep(0.100000000000000);

        gridLayout_5->addWidget(CollisionOriginYawSpinBox, 2, 3, 1, 1);

        CollisionOriginXSpinBox = new QDoubleSpinBox(CollisionOriginGroupBox);
        CollisionOriginXSpinBox->setObjectName(QString::fromUtf8("CollisionOriginXSpinBox"));
        CollisionOriginXSpinBox->setDecimals(6);
        CollisionOriginXSpinBox->setMinimum(-10000.000000000000000);
        CollisionOriginXSpinBox->setMaximum(10000.000000000000000);
        CollisionOriginXSpinBox->setSingleStep(0.100000000000000);

        gridLayout_5->addWidget(CollisionOriginXSpinBox, 0, 1, 1, 1);

        label_25 = new QLabel(CollisionOriginGroupBox);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setMaximumSize(QSize(20, 16777215));
        label_25->setLayoutDirection(Qt::LeftToRight);
        label_25->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_5->addWidget(label_25, 0, 0, 1, 1);


        verticalLayout_3->addWidget(CollisionOriginGroupBox);

        CollisionGeometryGroupBox = new QGroupBox(CollisionTab);
        CollisionGeometryGroupBox->setObjectName(QString::fromUtf8("CollisionGeometryGroupBox"));
        CollisionGeometryGroupBox->setEnabled(true);
        gridLayout_6 = new QGridLayout(CollisionGeometryGroupBox);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        CollisionGeometryBoxTypeFrame = new QFrame(CollisionGeometryGroupBox);
        CollisionGeometryBoxTypeFrame->setObjectName(QString::fromUtf8("CollisionGeometryBoxTypeFrame"));
        CollisionGeometryBoxTypeFrame->setFrameShape(QFrame::StyledPanel);
        CollisionGeometryBoxTypeFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout_8 = new QHBoxLayout(CollisionGeometryBoxTypeFrame);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_26 = new QLabel(CollisionGeometryBoxTypeFrame);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setMaximumSize(QSize(50, 16777215));
        label_26->setLayoutDirection(Qt::LeftToRight);
        label_26->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_8->addWidget(label_26);

        CollisionGeometryBoxWidthSpinBox = new QDoubleSpinBox(CollisionGeometryBoxTypeFrame);
        CollisionGeometryBoxWidthSpinBox->setObjectName(QString::fromUtf8("CollisionGeometryBoxWidthSpinBox"));
        CollisionGeometryBoxWidthSpinBox->setDecimals(4);

        horizontalLayout_8->addWidget(CollisionGeometryBoxWidthSpinBox);

        label_27 = new QLabel(CollisionGeometryBoxTypeFrame);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setMaximumSize(QSize(50, 16777215));
        label_27->setLayoutDirection(Qt::LeftToRight);
        label_27->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_8->addWidget(label_27);

        CollisionGeometryBoxLengthSpinBox = new QDoubleSpinBox(CollisionGeometryBoxTypeFrame);
        CollisionGeometryBoxLengthSpinBox->setObjectName(QString::fromUtf8("CollisionGeometryBoxLengthSpinBox"));
        CollisionGeometryBoxLengthSpinBox->setDecimals(4);

        horizontalLayout_8->addWidget(CollisionGeometryBoxLengthSpinBox);

        label_28 = new QLabel(CollisionGeometryBoxTypeFrame);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setMaximumSize(QSize(50, 16777215));
        label_28->setLayoutDirection(Qt::LeftToRight);
        label_28->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_8->addWidget(label_28);

        CollisionGeometryBoxHeightSpinBox = new QDoubleSpinBox(CollisionGeometryBoxTypeFrame);
        CollisionGeometryBoxHeightSpinBox->setObjectName(QString::fromUtf8("CollisionGeometryBoxHeightSpinBox"));
        CollisionGeometryBoxHeightSpinBox->setDecimals(4);

        horizontalLayout_8->addWidget(CollisionGeometryBoxHeightSpinBox);


        gridLayout_6->addWidget(CollisionGeometryBoxTypeFrame, 2, 0, 1, 2);

        CollisionGeometryTypeComboBox = new QComboBox(CollisionGeometryGroupBox);
        CollisionGeometryTypeComboBox->addItem(QString());
        CollisionGeometryTypeComboBox->addItem(QString());
        CollisionGeometryTypeComboBox->addItem(QString());
        CollisionGeometryTypeComboBox->addItem(QString());
        CollisionGeometryTypeComboBox->setObjectName(QString::fromUtf8("CollisionGeometryTypeComboBox"));

        gridLayout_6->addWidget(CollisionGeometryTypeComboBox, 0, 1, 1, 1);

        label_29 = new QLabel(CollisionGeometryGroupBox);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        label_29->setMaximumSize(QSize(34, 16777215));

        gridLayout_6->addWidget(label_29, 0, 0, 1, 1);

        CollisionGeometrySphereTypeFrame = new QFrame(CollisionGeometryGroupBox);
        CollisionGeometrySphereTypeFrame->setObjectName(QString::fromUtf8("CollisionGeometrySphereTypeFrame"));
        CollisionGeometrySphereTypeFrame->setFrameShape(QFrame::StyledPanel);
        CollisionGeometrySphereTypeFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout_9 = new QHBoxLayout(CollisionGeometrySphereTypeFrame);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_30 = new QLabel(CollisionGeometrySphereTypeFrame);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        label_30->setMaximumSize(QSize(50, 16777215));
        label_30->setLayoutDirection(Qt::LeftToRight);
        label_30->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_9->addWidget(label_30);

        CollisionGeometrySphereRadiusSpinBox = new QDoubleSpinBox(CollisionGeometrySphereTypeFrame);
        CollisionGeometrySphereRadiusSpinBox->setObjectName(QString::fromUtf8("CollisionGeometrySphereRadiusSpinBox"));
        CollisionGeometrySphereRadiusSpinBox->setDecimals(4);

        horizontalLayout_9->addWidget(CollisionGeometrySphereRadiusSpinBox);


        gridLayout_6->addWidget(CollisionGeometrySphereTypeFrame, 4, 0, 1, 2);

        CollisionGeometryCylinderTypeFrame = new QFrame(CollisionGeometryGroupBox);
        CollisionGeometryCylinderTypeFrame->setObjectName(QString::fromUtf8("CollisionGeometryCylinderTypeFrame"));
        CollisionGeometryCylinderTypeFrame->setFrameShape(QFrame::StyledPanel);
        CollisionGeometryCylinderTypeFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout_10 = new QHBoxLayout(CollisionGeometryCylinderTypeFrame);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_31 = new QLabel(CollisionGeometryCylinderTypeFrame);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        label_31->setMaximumSize(QSize(50, 16777215));
        label_31->setLayoutDirection(Qt::LeftToRight);
        label_31->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_10->addWidget(label_31);

        CollisionGeometryCylinderRadiusSpinBox = new QDoubleSpinBox(CollisionGeometryCylinderTypeFrame);
        CollisionGeometryCylinderRadiusSpinBox->setObjectName(QString::fromUtf8("CollisionGeometryCylinderRadiusSpinBox"));
        CollisionGeometryCylinderRadiusSpinBox->setDecimals(4);

        horizontalLayout_10->addWidget(CollisionGeometryCylinderRadiusSpinBox);

        label_32 = new QLabel(CollisionGeometryCylinderTypeFrame);
        label_32->setObjectName(QString::fromUtf8("label_32"));
        label_32->setMaximumSize(QSize(50, 16777215));
        label_32->setLayoutDirection(Qt::LeftToRight);
        label_32->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_10->addWidget(label_32);

        CollisionGeometryCylinderLengthSpinBox = new QDoubleSpinBox(CollisionGeometryCylinderTypeFrame);
        CollisionGeometryCylinderLengthSpinBox->setObjectName(QString::fromUtf8("CollisionGeometryCylinderLengthSpinBox"));
        CollisionGeometryCylinderLengthSpinBox->setDecimals(4);

        horizontalLayout_10->addWidget(CollisionGeometryCylinderLengthSpinBox);


        gridLayout_6->addWidget(CollisionGeometryCylinderTypeFrame, 3, 0, 1, 2);

        CollisionGeometryMeshTypeFrame = new QFrame(CollisionGeometryGroupBox);
        CollisionGeometryMeshTypeFrame->setObjectName(QString::fromUtf8("CollisionGeometryMeshTypeFrame"));
        CollisionGeometryMeshTypeFrame->setFrameShape(QFrame::StyledPanel);
        CollisionGeometryMeshTypeFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout_11 = new QHBoxLayout(CollisionGeometryMeshTypeFrame);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        label_14 = new QLabel(CollisionGeometryMeshTypeFrame);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        horizontalLayout_11->addWidget(label_14);

        CollisionGeometryMeshPathLineEdit = new QLineEdit(CollisionGeometryMeshTypeFrame);
        CollisionGeometryMeshPathLineEdit->setObjectName(QString::fromUtf8("CollisionGeometryMeshPathLineEdit"));

        horizontalLayout_11->addWidget(CollisionGeometryMeshPathLineEdit);


        gridLayout_6->addWidget(CollisionGeometryMeshTypeFrame, 1, 0, 1, 2);


        verticalLayout_3->addWidget(CollisionGeometryGroupBox);

        TabWidget->addTab(CollisionTab, QString());
        InertialTab = new QWidget();
        InertialTab->setObjectName(QString::fromUtf8("InertialTab"));
        verticalLayout_5 = new QVBoxLayout(InertialTab);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        InertialOriginGroupBox = new QGroupBox(InertialTab);
        InertialOriginGroupBox->setObjectName(QString::fromUtf8("InertialOriginGroupBox"));
        InertialOriginGroupBox->setEnabled(true);
        gridLayout_7 = new QGridLayout(InertialOriginGroupBox);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        label_33 = new QLabel(InertialOriginGroupBox);
        label_33->setObjectName(QString::fromUtf8("label_33"));
        label_33->setMaximumSize(QSize(50, 16777215));
        label_33->setLayoutDirection(Qt::LeftToRight);
        label_33->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_7->addWidget(label_33, 1, 2, 1, 1);

        InertialOriginPitchSpinBox = new QDoubleSpinBox(InertialOriginGroupBox);
        InertialOriginPitchSpinBox->setObjectName(QString::fromUtf8("InertialOriginPitchSpinBox"));
        InertialOriginPitchSpinBox->setDecimals(6);
        InertialOriginPitchSpinBox->setMinimum(-3.141592000000000);
        InertialOriginPitchSpinBox->setMaximum(3.141592000000000);
        InertialOriginPitchSpinBox->setSingleStep(0.100000000000000);

        gridLayout_7->addWidget(InertialOriginPitchSpinBox, 1, 3, 1, 1);

        label_34 = new QLabel(InertialOriginGroupBox);
        label_34->setObjectName(QString::fromUtf8("label_34"));
        label_34->setMaximumSize(QSize(20, 16777215));
        label_34->setLayoutDirection(Qt::LeftToRight);
        label_34->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_7->addWidget(label_34, 2, 0, 1, 1);

        InertialOriginRollSpinBox = new QDoubleSpinBox(InertialOriginGroupBox);
        InertialOriginRollSpinBox->setObjectName(QString::fromUtf8("InertialOriginRollSpinBox"));
        InertialOriginRollSpinBox->setDecimals(6);
        InertialOriginRollSpinBox->setMinimum(-3.141592000000000);
        InertialOriginRollSpinBox->setMaximum(3.141592000000000);
        InertialOriginRollSpinBox->setSingleStep(0.100000000000000);

        gridLayout_7->addWidget(InertialOriginRollSpinBox, 0, 3, 1, 1);

        label_35 = new QLabel(InertialOriginGroupBox);
        label_35->setObjectName(QString::fromUtf8("label_35"));
        label_35->setMaximumSize(QSize(20, 16777215));
        label_35->setLayoutDirection(Qt::LeftToRight);
        label_35->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_7->addWidget(label_35, 1, 0, 1, 1);

        InertialOriginYSpinBox = new QDoubleSpinBox(InertialOriginGroupBox);
        InertialOriginYSpinBox->setObjectName(QString::fromUtf8("InertialOriginYSpinBox"));
        InertialOriginYSpinBox->setDecimals(6);
        InertialOriginYSpinBox->setMinimum(-10000.000000000000000);
        InertialOriginYSpinBox->setMaximum(10000.000000000000000);
        InertialOriginYSpinBox->setSingleStep(0.100000000000000);

        gridLayout_7->addWidget(InertialOriginYSpinBox, 1, 1, 1, 1);

        label_36 = new QLabel(InertialOriginGroupBox);
        label_36->setObjectName(QString::fromUtf8("label_36"));
        label_36->setMaximumSize(QSize(50, 16777215));
        label_36->setLayoutDirection(Qt::LeftToRight);
        label_36->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_7->addWidget(label_36, 0, 2, 1, 1);

        InertialOriginZSpinBox = new QDoubleSpinBox(InertialOriginGroupBox);
        InertialOriginZSpinBox->setObjectName(QString::fromUtf8("InertialOriginZSpinBox"));
        InertialOriginZSpinBox->setDecimals(6);
        InertialOriginZSpinBox->setMinimum(-10000.000000000000000);
        InertialOriginZSpinBox->setMaximum(10000.000000000000000);
        InertialOriginZSpinBox->setSingleStep(0.100000000000000);

        gridLayout_7->addWidget(InertialOriginZSpinBox, 2, 1, 1, 1);

        label_37 = new QLabel(InertialOriginGroupBox);
        label_37->setObjectName(QString::fromUtf8("label_37"));
        label_37->setMaximumSize(QSize(50, 16777215));
        label_37->setLayoutDirection(Qt::LeftToRight);
        label_37->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_7->addWidget(label_37, 2, 2, 1, 1);

        InertialOriginYawSpinBox = new QDoubleSpinBox(InertialOriginGroupBox);
        InertialOriginYawSpinBox->setObjectName(QString::fromUtf8("InertialOriginYawSpinBox"));
        InertialOriginYawSpinBox->setDecimals(6);
        InertialOriginYawSpinBox->setMinimum(-3.141592000000000);
        InertialOriginYawSpinBox->setMaximum(3.141592000000000);
        InertialOriginYawSpinBox->setSingleStep(0.100000000000000);

        gridLayout_7->addWidget(InertialOriginYawSpinBox, 2, 3, 1, 1);

        InertialOriginXSpinBox = new QDoubleSpinBox(InertialOriginGroupBox);
        InertialOriginXSpinBox->setObjectName(QString::fromUtf8("InertialOriginXSpinBox"));
        InertialOriginXSpinBox->setDecimals(6);
        InertialOriginXSpinBox->setMinimum(-10000.000000000000000);
        InertialOriginXSpinBox->setMaximum(10000.000000000000000);
        InertialOriginXSpinBox->setSingleStep(0.100000000000000);

        gridLayout_7->addWidget(InertialOriginXSpinBox, 0, 1, 1, 1);

        label_38 = new QLabel(InertialOriginGroupBox);
        label_38->setObjectName(QString::fromUtf8("label_38"));
        label_38->setMaximumSize(QSize(20, 16777215));
        label_38->setLayoutDirection(Qt::LeftToRight);
        label_38->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_7->addWidget(label_38, 0, 0, 1, 1);


        verticalLayout_5->addWidget(InertialOriginGroupBox);

        InertialMassGroupBox = new QGroupBox(InertialTab);
        InertialMassGroupBox->setObjectName(QString::fromUtf8("InertialMassGroupBox"));
        InertialMassGroupBox->setEnabled(true);
        verticalLayout_6 = new QVBoxLayout(InertialMassGroupBox);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        InertialMassSpinBox = new QDoubleSpinBox(InertialMassGroupBox);
        InertialMassSpinBox->setObjectName(QString::fromUtf8("InertialMassSpinBox"));

        verticalLayout_6->addWidget(InertialMassSpinBox);


        verticalLayout_5->addWidget(InertialMassGroupBox);

        InertialInertiaGroupBox = new QGroupBox(InertialTab);
        InertialInertiaGroupBox->setObjectName(QString::fromUtf8("InertialInertiaGroupBox"));
        InertialInertiaGroupBox->setEnabled(true);
        gridLayout_8 = new QGridLayout(InertialInertiaGroupBox);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        InertiaIXZSpinBox = new QDoubleSpinBox(InertialInertiaGroupBox);
        InertiaIXZSpinBox->setObjectName(QString::fromUtf8("InertiaIXZSpinBox"));
        InertiaIXZSpinBox->setDecimals(6);

        gridLayout_8->addWidget(InertiaIXZSpinBox, 0, 5, 1, 1);

        label_41 = new QLabel(InertialInertiaGroupBox);
        label_41->setObjectName(QString::fromUtf8("label_41"));
        label_41->setMaximumSize(QSize(20, 16777215));
        label_41->setLayoutDirection(Qt::LeftToRight);
        label_41->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_8->addWidget(label_41, 0, 0, 1, 1);

        label_40 = new QLabel(InertialInertiaGroupBox);
        label_40->setObjectName(QString::fromUtf8("label_40"));
        label_40->setMaximumSize(QSize(20, 16777215));
        label_40->setLayoutDirection(Qt::LeftToRight);
        label_40->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_8->addWidget(label_40, 0, 4, 1, 1);

        label_39 = new QLabel(InertialInertiaGroupBox);
        label_39->setObjectName(QString::fromUtf8("label_39"));
        label_39->setMaximumSize(QSize(20, 16777215));
        label_39->setLayoutDirection(Qt::LeftToRight);
        label_39->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_8->addWidget(label_39, 0, 2, 1, 1);

        InertiaIYYSpinBox = new QDoubleSpinBox(InertialInertiaGroupBox);
        InertiaIYYSpinBox->setObjectName(QString::fromUtf8("InertiaIYYSpinBox"));
        InertiaIYYSpinBox->setDecimals(6);

        gridLayout_8->addWidget(InertiaIYYSpinBox, 1, 3, 1, 1);

        InertiaIXXSpinBox = new QDoubleSpinBox(InertialInertiaGroupBox);
        InertiaIXXSpinBox->setObjectName(QString::fromUtf8("InertiaIXXSpinBox"));
        InertiaIXXSpinBox->setDecimals(6);

        gridLayout_8->addWidget(InertiaIXXSpinBox, 0, 1, 1, 1);

        label_44 = new QLabel(InertialInertiaGroupBox);
        label_44->setObjectName(QString::fromUtf8("label_44"));
        label_44->setMaximumSize(QSize(20, 16777215));
        label_44->setLayoutDirection(Qt::LeftToRight);
        label_44->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_8->addWidget(label_44, 1, 2, 1, 1);

        InertiaIXYSpinBox = new QDoubleSpinBox(InertialInertiaGroupBox);
        InertiaIXYSpinBox->setObjectName(QString::fromUtf8("InertiaIXYSpinBox"));
        InertiaIXYSpinBox->setDecimals(6);

        gridLayout_8->addWidget(InertiaIXYSpinBox, 0, 3, 1, 1);

        label_45 = new QLabel(InertialInertiaGroupBox);
        label_45->setObjectName(QString::fromUtf8("label_45"));
        label_45->setMaximumSize(QSize(20, 16777215));
        label_45->setLayoutDirection(Qt::LeftToRight);
        label_45->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_8->addWidget(label_45, 1, 4, 1, 1);

        InertiaIYZSpinBox = new QDoubleSpinBox(InertialInertiaGroupBox);
        InertiaIYZSpinBox->setObjectName(QString::fromUtf8("InertiaIYZSpinBox"));
        InertiaIYZSpinBox->setDecimals(6);

        gridLayout_8->addWidget(InertiaIYZSpinBox, 1, 5, 1, 1);

        InertiaIZZSpinBox = new QDoubleSpinBox(InertialInertiaGroupBox);
        InertiaIZZSpinBox->setObjectName(QString::fromUtf8("InertiaIZZSpinBox"));
        InertiaIZZSpinBox->setDecimals(6);

        gridLayout_8->addWidget(InertiaIZZSpinBox, 2, 5, 1, 1);

        label_43 = new QLabel(InertialInertiaGroupBox);
        label_43->setObjectName(QString::fromUtf8("label_43"));
        label_43->setMaximumSize(QSize(20, 16777215));
        label_43->setLayoutDirection(Qt::LeftToRight);
        label_43->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_8->addWidget(label_43, 2, 4, 1, 1);


        verticalLayout_5->addWidget(InertialInertiaGroupBox);

        horizontalLayout_23 = new QHBoxLayout();
        horizontalLayout_23->setObjectName(QString::fromUtf8("horizontalLayout_23"));
        BuildInertiaBoxButton = new QPushButton(InertialTab);
        BuildInertiaBoxButton->setObjectName(QString::fromUtf8("BuildInertiaBoxButton"));

        horizontalLayout_23->addWidget(BuildInertiaBoxButton);

        BuildInertiaCylinderButton = new QPushButton(InertialTab);
        BuildInertiaCylinderButton->setObjectName(QString::fromUtf8("BuildInertiaCylinderButton"));

        horizontalLayout_23->addWidget(BuildInertiaCylinderButton);

        BuildInertiaSphereButton = new QPushButton(InertialTab);
        BuildInertiaSphereButton->setObjectName(QString::fromUtf8("BuildInertiaSphereButton"));

        horizontalLayout_23->addWidget(BuildInertiaSphereButton);


        verticalLayout_5->addLayout(horizontalLayout_23);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_5);

        TabWidget->addTab(InertialTab, QString());

        verticalLayout->addWidget(TabWidget);

        QWidget::setTabOrder(JointNameLineEdit, JointTypeComboBox);
        QWidget::setTabOrder(JointTypeComboBox, JointParentLinkComboBox);
        QWidget::setTabOrder(JointParentLinkComboBox, JointOriginXSpinBox);
        QWidget::setTabOrder(JointOriginXSpinBox, JointOriginYSpinBox);
        QWidget::setTabOrder(JointOriginYSpinBox, JointOriginZSpinBox);
        QWidget::setTabOrder(JointOriginZSpinBox, JointOriginRollSpinBox);
        QWidget::setTabOrder(JointOriginRollSpinBox, JointOriginPitchSpinBox);
        QWidget::setTabOrder(JointOriginPitchSpinBox, JointOriginYawSpinBox);
        QWidget::setTabOrder(JointOriginYawSpinBox, JointAxisXSpinBox);
        QWidget::setTabOrder(JointAxisXSpinBox, JointAxisYSpinBox);
        QWidget::setTabOrder(JointAxisYSpinBox, JointAxisZSpinBox);
        QWidget::setTabOrder(JointAxisZSpinBox, JointCalibrationRisingSpinBox);
        QWidget::setTabOrder(JointCalibrationRisingSpinBox, JointCalibrationFallingSpinBox);
        QWidget::setTabOrder(JointCalibrationFallingSpinBox, JointDynamicsDamplingSpinBox);
        QWidget::setTabOrder(JointDynamicsDamplingSpinBox, JointDynamicsFrictionSpinBox);
        QWidget::setTabOrder(JointDynamicsFrictionSpinBox, JointMimicJointNameLineEdit);
        QWidget::setTabOrder(JointMimicJointNameLineEdit, JointMimicOffsetSpinBox);
        QWidget::setTabOrder(JointMimicOffsetSpinBox, JointMimicMultiplierSpinBox);
        QWidget::setTabOrder(JointMimicMultiplierSpinBox, JointSafetyLowerLimitSpinBox);
        QWidget::setTabOrder(JointSafetyLowerLimitSpinBox, JointSafetyUpperLimitSpinBox);
        QWidget::setTabOrder(JointSafetyUpperLimitSpinBox, JointSafetyKPositionSpinBox);
        QWidget::setTabOrder(JointSafetyKPositionSpinBox, JointSafetyKVelocitySpinBox);
        QWidget::setTabOrder(JointSafetyKVelocitySpinBox, JointLimitLowerSpinBox);
        QWidget::setTabOrder(JointLimitLowerSpinBox, JointLimitUpperSpinBox);
        QWidget::setTabOrder(JointLimitUpperSpinBox, JointLimitEffortSpinBox);
        QWidget::setTabOrder(JointLimitEffortSpinBox, JointLimitVelocitySpinBox);
        QWidget::setTabOrder(JointLimitVelocitySpinBox, VisualNameLineEdit);
        QWidget::setTabOrder(VisualNameLineEdit, VisualOriginXSpinBox);
        QWidget::setTabOrder(VisualOriginXSpinBox, VisualOriginYSpinBox);
        QWidget::setTabOrder(VisualOriginYSpinBox, VisualOriginZSpinBox);
        QWidget::setTabOrder(VisualOriginZSpinBox, VisualOriginRollSpinBox);
        QWidget::setTabOrder(VisualOriginRollSpinBox, VisualOriginPitchSpinBox);
        QWidget::setTabOrder(VisualOriginPitchSpinBox, VisualOriginYawSpinBox);
        QWidget::setTabOrder(VisualOriginYawSpinBox, VisualGeometryTypeComboBox);
        QWidget::setTabOrder(VisualGeometryTypeComboBox, VisualGeometryMeshPathLineEdit);
        QWidget::setTabOrder(VisualGeometryMeshPathLineEdit, VisualGeometryBoxWidthSpinBox);
        QWidget::setTabOrder(VisualGeometryBoxWidthSpinBox, VisualGeometryBoxLengthSpinBox);
        QWidget::setTabOrder(VisualGeometryBoxLengthSpinBox, VisualGeometryBoxHeightSpinBox);
        QWidget::setTabOrder(VisualGeometryBoxHeightSpinBox, VisualGeometryCylinderRadiusSpinBox);
        QWidget::setTabOrder(VisualGeometryCylinderRadiusSpinBox, VisualGeometryCylinderLengthSpinBox);
        QWidget::setTabOrder(VisualGeometryCylinderLengthSpinBox, VisualGeometrySphereRadiusSpinBox);
        QWidget::setTabOrder(VisualGeometrySphereRadiusSpinBox, MaterialNameLineEdit);
        QWidget::setTabOrder(MaterialNameLineEdit, MaterialTexturePathLineEdit);
        QWidget::setTabOrder(MaterialTexturePathLineEdit, MaterialColorRedSpinBox);
        QWidget::setTabOrder(MaterialColorRedSpinBox, MaterialColorGreenSpinBox);
        QWidget::setTabOrder(MaterialColorGreenSpinBox, MaterialColorBlueSpinBox);
        QWidget::setTabOrder(MaterialColorBlueSpinBox, MaterialColorPickButton);
        QWidget::setTabOrder(MaterialColorPickButton, CollisionNameLineEdit);
        QWidget::setTabOrder(CollisionNameLineEdit, CollisionOriginXSpinBox);
        QWidget::setTabOrder(CollisionOriginXSpinBox, CollisionOriginYSpinBox);
        QWidget::setTabOrder(CollisionOriginYSpinBox, CollisionOriginZSpinBox);
        QWidget::setTabOrder(CollisionOriginZSpinBox, CollisionOriginRollSpinBox);
        QWidget::setTabOrder(CollisionOriginRollSpinBox, CollisionOriginPitchSpinBox);
        QWidget::setTabOrder(CollisionOriginPitchSpinBox, CollisionOriginYawSpinBox);
        QWidget::setTabOrder(CollisionOriginYawSpinBox, CollisionGeometryTypeComboBox);
        QWidget::setTabOrder(CollisionGeometryTypeComboBox, CollisionGeometryMeshPathLineEdit);
        QWidget::setTabOrder(CollisionGeometryMeshPathLineEdit, CollisionGeometryBoxWidthSpinBox);
        QWidget::setTabOrder(CollisionGeometryBoxWidthSpinBox, CollisionGeometryBoxLengthSpinBox);
        QWidget::setTabOrder(CollisionGeometryBoxLengthSpinBox, CollisionGeometryBoxHeightSpinBox);
        QWidget::setTabOrder(CollisionGeometryBoxHeightSpinBox, CollisionGeometryCylinderRadiusSpinBox);
        QWidget::setTabOrder(CollisionGeometryCylinderRadiusSpinBox, CollisionGeometryCylinderLengthSpinBox);
        QWidget::setTabOrder(CollisionGeometryCylinderLengthSpinBox, CollisionGeometrySphereRadiusSpinBox);
        QWidget::setTabOrder(CollisionGeometrySphereRadiusSpinBox, InertialOriginXSpinBox);
        QWidget::setTabOrder(InertialOriginXSpinBox, InertialOriginYSpinBox);
        QWidget::setTabOrder(InertialOriginYSpinBox, InertialOriginZSpinBox);
        QWidget::setTabOrder(InertialOriginZSpinBox, InertialOriginRollSpinBox);
        QWidget::setTabOrder(InertialOriginRollSpinBox, InertialOriginPitchSpinBox);
        QWidget::setTabOrder(InertialOriginPitchSpinBox, InertialOriginYawSpinBox);
        QWidget::setTabOrder(InertialOriginYawSpinBox, InertialMassSpinBox);
        QWidget::setTabOrder(InertialMassSpinBox, InertiaIXXSpinBox);
        QWidget::setTabOrder(InertiaIXXSpinBox, InertiaIXYSpinBox);
        QWidget::setTabOrder(InertiaIXYSpinBox, InertiaIXZSpinBox);
        QWidget::setTabOrder(InertiaIXZSpinBox, InertiaIYYSpinBox);
        QWidget::setTabOrder(InertiaIYYSpinBox, InertiaIYZSpinBox);
        QWidget::setTabOrder(InertiaIYZSpinBox, InertiaIZZSpinBox);
        QWidget::setTabOrder(InertiaIZZSpinBox, AddCollisionButton);
        QWidget::setTabOrder(AddCollisionButton, RemoveCollisionButton);
        QWidget::setTabOrder(RemoveCollisionButton, CollisionListWidget);
        QWidget::setTabOrder(CollisionListWidget, VisualListWidget);
        QWidget::setTabOrder(VisualListWidget, TabWidget);
        QWidget::setTabOrder(TabWidget, RemoveVisualButton);
        QWidget::setTabOrder(RemoveVisualButton, NameLineEdit);
        QWidget::setTabOrder(NameLineEdit, AddVisualButton);

        retranslateUi(UpdateLinkDialogUI);

        TabWidget->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(UpdateLinkDialogUI);
    } // setupUi

    void retranslateUi(QDialog *UpdateLinkDialogUI)
    {
        UpdateLinkDialogUI->setWindowTitle(QApplication::translate("UpdateLinkDialogUI", "Dialog", nullptr));
        NameLabel->setText(QApplication::translate("UpdateLinkDialogUI", "Name", nullptr));
        NameLineEdit->setText(QString());
        TabWidget->setTabText(TabWidget->indexOf(GeneralTab), QApplication::translate("UpdateLinkDialogUI", "General", nullptr));
        label_53->setText(QApplication::translate("UpdateLinkDialogUI", "Name", nullptr));
        label_54->setText(QApplication::translate("UpdateLinkDialogUI", "Type", nullptr));
        JointTypeComboBox->setItemText(0, QApplication::translate("UpdateLinkDialogUI", "Fixed", nullptr));
        JointTypeComboBox->setItemText(1, QApplication::translate("UpdateLinkDialogUI", "Revolute", nullptr));
        JointTypeComboBox->setItemText(2, QApplication::translate("UpdateLinkDialogUI", "Prismatic", nullptr));
        JointTypeComboBox->setItemText(3, QApplication::translate("UpdateLinkDialogUI", "Continuous", nullptr));
        JointTypeComboBox->setItemText(4, QApplication::translate("UpdateLinkDialogUI", "Floating", nullptr));
        JointTypeComboBox->setItemText(5, QApplication::translate("UpdateLinkDialogUI", "Planar", nullptr));

        label_55->setText(QApplication::translate("UpdateLinkDialogUI", "Parent", nullptr));
        JointOriginGroupBox->setTitle(QApplication::translate("UpdateLinkDialogUI", "Origin", nullptr));
        label_56->setText(QApplication::translate("UpdateLinkDialogUI", "Pitch", nullptr));
        label_57->setText(QApplication::translate("UpdateLinkDialogUI", "Z", nullptr));
        label_58->setText(QApplication::translate("UpdateLinkDialogUI", "Y", nullptr));
        label_59->setText(QApplication::translate("UpdateLinkDialogUI", "Roll", nullptr));
        label_60->setText(QApplication::translate("UpdateLinkDialogUI", "Yaw", nullptr));
        label_61->setText(QApplication::translate("UpdateLinkDialogUI", "X", nullptr));
        JointAxisGroupBox->setTitle(QApplication::translate("UpdateLinkDialogUI", "Axis", nullptr));
        label_62->setText(QApplication::translate("UpdateLinkDialogUI", "X", nullptr));
        label_63->setText(QApplication::translate("UpdateLinkDialogUI", "Y", nullptr));
        label_64->setText(QApplication::translate("UpdateLinkDialogUI", "Z", nullptr));
        JointCalibrationGroupBox->setTitle(QApplication::translate("UpdateLinkDialogUI", "Calibration", nullptr));
        label_68->setText(QApplication::translate("UpdateLinkDialogUI", "Rising", nullptr));
        label_69->setText(QApplication::translate("UpdateLinkDialogUI", "Falling", nullptr));
        JointDynamicsGroupBox->setTitle(QApplication::translate("UpdateLinkDialogUI", "Dynamics", nullptr));
        label_74->setText(QApplication::translate("UpdateLinkDialogUI", "Dampling", nullptr));
        label_75->setText(QApplication::translate("UpdateLinkDialogUI", "Friction", nullptr));
        JointMimicGroupBox->setTitle(QApplication::translate("UpdateLinkDialogUI", "Mimic", nullptr));
        label_48->setText(QApplication::translate("UpdateLinkDialogUI", "Joint", nullptr));
        label_93->setText(QApplication::translate("UpdateLinkDialogUI", "Offset", nullptr));
        label_92->setText(QApplication::translate("UpdateLinkDialogUI", "Multiplier", nullptr));
        JointSafetyGroupBox->setTitle(QApplication::translate("UpdateLinkDialogUI", "Safety", nullptr));
        label_78->setText(QApplication::translate("UpdateLinkDialogUI", "Upper Limit", nullptr));
        label_77->setText(QApplication::translate("UpdateLinkDialogUI", "Lower Limit", nullptr));
        label_79->setText(QApplication::translate("UpdateLinkDialogUI", "K Velocity", nullptr));
        label_94->setText(QApplication::translate("UpdateLinkDialogUI", "K Position", nullptr));
        JointLimitGroupBox->setTitle(QApplication::translate("UpdateLinkDialogUI", "Limit", nullptr));
        label_86->setText(QApplication::translate("UpdateLinkDialogUI", "Lower", nullptr));
        label_87->setText(QApplication::translate("UpdateLinkDialogUI", "Upper", nullptr));
        label_88->setText(QApplication::translate("UpdateLinkDialogUI", "Effort", nullptr));
        label_95->setText(QApplication::translate("UpdateLinkDialogUI", "Velocity", nullptr));
        TabWidget->setTabText(TabWidget->indexOf(JointTab), QApplication::translate("UpdateLinkDialogUI", "Joint", nullptr));
        AddVisualButton->setText(QApplication::translate("UpdateLinkDialogUI", "Add", nullptr));
        RemoveVisualButton->setText(QApplication::translate("UpdateLinkDialogUI", "Remove", nullptr));
        label_46->setText(QApplication::translate("UpdateLinkDialogUI", "Name", nullptr));
        VisualOriginGroupBox->setTitle(QApplication::translate("UpdateLinkDialogUI", "Origin", nullptr));
        label_2->setText(QApplication::translate("UpdateLinkDialogUI", "Pitch", nullptr));
        label_6->setText(QApplication::translate("UpdateLinkDialogUI", "Z", nullptr));
        label_5->setText(QApplication::translate("UpdateLinkDialogUI", "Y", nullptr));
        label->setText(QApplication::translate("UpdateLinkDialogUI", "Roll", nullptr));
        label_3->setText(QApplication::translate("UpdateLinkDialogUI", "Yaw", nullptr));
        label_16->setText(QApplication::translate("UpdateLinkDialogUI", "X", nullptr));
        VisualGeometryGroupBox->setTitle(QApplication::translate("UpdateLinkDialogUI", "Geometry", nullptr));
        label_4->setText(QApplication::translate("UpdateLinkDialogUI", "Width", nullptr));
        label_8->setText(QApplication::translate("UpdateLinkDialogUI", "Length", nullptr));
        label_9->setText(QApplication::translate("UpdateLinkDialogUI", "Height", nullptr));
        VisualGeometryTypeComboBox->setItemText(0, QApplication::translate("UpdateLinkDialogUI", "Box", nullptr));
        VisualGeometryTypeComboBox->setItemText(1, QApplication::translate("UpdateLinkDialogUI", "Cylinder", nullptr));
        VisualGeometryTypeComboBox->setItemText(2, QApplication::translate("UpdateLinkDialogUI", "Sphere", nullptr));
        VisualGeometryTypeComboBox->setItemText(3, QApplication::translate("UpdateLinkDialogUI", "Mesh", nullptr));

        label_7->setText(QApplication::translate("UpdateLinkDialogUI", "Type", nullptr));
        label_12->setText(QApplication::translate("UpdateLinkDialogUI", "Radius", nullptr));
        label_10->setText(QApplication::translate("UpdateLinkDialogUI", "Radius", nullptr));
        label_11->setText(QApplication::translate("UpdateLinkDialogUI", "Length", nullptr));
        label_13->setText(QApplication::translate("UpdateLinkDialogUI", "Path", nullptr));
        VisualMaterialGroupBox->setTitle(QApplication::translate("UpdateLinkDialogUI", "Material", nullptr));
        label_15->setText(QApplication::translate("UpdateLinkDialogUI", "Name", nullptr));
        label_42->setText(QApplication::translate("UpdateLinkDialogUI", "Texture", nullptr));
        label_17->setText(QApplication::translate("UpdateLinkDialogUI", "R", nullptr));
        label_18->setText(QApplication::translate("UpdateLinkDialogUI", "G", nullptr));
        label_19->setText(QApplication::translate("UpdateLinkDialogUI", "B", nullptr));
        MaterialColorPickButton->setText(QApplication::translate("UpdateLinkDialogUI", "Pick", nullptr));
        TabWidget->setTabText(TabWidget->indexOf(VisualTab), QApplication::translate("UpdateLinkDialogUI", "Visual", nullptr));
        AddCollisionButton->setText(QApplication::translate("UpdateLinkDialogUI", "Add", nullptr));
        RemoveCollisionButton->setText(QApplication::translate("UpdateLinkDialogUI", "Remove", nullptr));
        label_47->setText(QApplication::translate("UpdateLinkDialogUI", "Name", nullptr));
        CollisionOriginGroupBox->setTitle(QApplication::translate("UpdateLinkDialogUI", "Origin", nullptr));
        label_20->setText(QApplication::translate("UpdateLinkDialogUI", "Pitch", nullptr));
        label_21->setText(QApplication::translate("UpdateLinkDialogUI", "Z", nullptr));
        label_22->setText(QApplication::translate("UpdateLinkDialogUI", "Y", nullptr));
        label_23->setText(QApplication::translate("UpdateLinkDialogUI", "Roll", nullptr));
        label_24->setText(QApplication::translate("UpdateLinkDialogUI", "Yaw", nullptr));
        label_25->setText(QApplication::translate("UpdateLinkDialogUI", "X", nullptr));
        CollisionGeometryGroupBox->setTitle(QApplication::translate("UpdateLinkDialogUI", "Geometry", nullptr));
        label_26->setText(QApplication::translate("UpdateLinkDialogUI", "Width", nullptr));
        label_27->setText(QApplication::translate("UpdateLinkDialogUI", "Length", nullptr));
        label_28->setText(QApplication::translate("UpdateLinkDialogUI", "Height", nullptr));
        CollisionGeometryTypeComboBox->setItemText(0, QApplication::translate("UpdateLinkDialogUI", "Box", nullptr));
        CollisionGeometryTypeComboBox->setItemText(1, QApplication::translate("UpdateLinkDialogUI", "Cylinder", nullptr));
        CollisionGeometryTypeComboBox->setItemText(2, QApplication::translate("UpdateLinkDialogUI", "Sphere", nullptr));
        CollisionGeometryTypeComboBox->setItemText(3, QApplication::translate("UpdateLinkDialogUI", "Mesh", nullptr));

        label_29->setText(QApplication::translate("UpdateLinkDialogUI", "Type", nullptr));
        label_30->setText(QApplication::translate("UpdateLinkDialogUI", "Radius", nullptr));
        label_31->setText(QApplication::translate("UpdateLinkDialogUI", "Radius", nullptr));
        label_32->setText(QApplication::translate("UpdateLinkDialogUI", "Length", nullptr));
        label_14->setText(QApplication::translate("UpdateLinkDialogUI", "Path", nullptr));
        TabWidget->setTabText(TabWidget->indexOf(CollisionTab), QApplication::translate("UpdateLinkDialogUI", "Collision", nullptr));
        InertialOriginGroupBox->setTitle(QApplication::translate("UpdateLinkDialogUI", "Origin", nullptr));
        label_33->setText(QApplication::translate("UpdateLinkDialogUI", "Pitch", nullptr));
        label_34->setText(QApplication::translate("UpdateLinkDialogUI", "Z", nullptr));
        label_35->setText(QApplication::translate("UpdateLinkDialogUI", "Y", nullptr));
        label_36->setText(QApplication::translate("UpdateLinkDialogUI", "Roll", nullptr));
        label_37->setText(QApplication::translate("UpdateLinkDialogUI", "Yaw", nullptr));
        label_38->setText(QApplication::translate("UpdateLinkDialogUI", "X", nullptr));
        InertialMassGroupBox->setTitle(QApplication::translate("UpdateLinkDialogUI", "Mass", nullptr));
        InertialInertiaGroupBox->setTitle(QApplication::translate("UpdateLinkDialogUI", "Inertia", nullptr));
        label_41->setText(QApplication::translate("UpdateLinkDialogUI", "ixx", nullptr));
        label_40->setText(QApplication::translate("UpdateLinkDialogUI", "ixz", nullptr));
        label_39->setText(QApplication::translate("UpdateLinkDialogUI", "ixy", nullptr));
        label_44->setText(QApplication::translate("UpdateLinkDialogUI", "iyy", nullptr));
        label_45->setText(QApplication::translate("UpdateLinkDialogUI", "iyz", nullptr));
        label_43->setText(QApplication::translate("UpdateLinkDialogUI", "izz", nullptr));
        BuildInertiaBoxButton->setText(QApplication::translate("UpdateLinkDialogUI", "Box Inertia", nullptr));
        BuildInertiaCylinderButton->setText(QApplication::translate("UpdateLinkDialogUI", "Cylinder Inertia", nullptr));
        BuildInertiaSphereButton->setText(QApplication::translate("UpdateLinkDialogUI", "Sphere Inertia", nullptr));
        TabWidget->setTabText(TabWidget->indexOf(InertialTab), QApplication::translate("UpdateLinkDialogUI", "Inertial", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UpdateLinkDialogUI: public Ui_UpdateLinkDialogUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATE_LINK_DIALOG_H
