/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include <my_label.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    my_label *frame;
    QLabel *mouse_movement;
    QLabel *label_3;
    QLabel *mouse_pressed;
    QLabel *label_5;
    QFrame *x_axis;
    QFrame *y_axis;
    QCheckBox *show_axes;
    QPushButton *DrawDDALine;
    QSpinBox *circle_radius;
    QRadioButton *draw_circle;
    QRadioButton *draw_line;
    QPushButton *set_point1;
    QPushButton *set_point2;
    QPushButton *pushButton;
    QPushButton *pushButton_shGrid;
    QSpinBox *spinBox;
    QPushButton *DrawBresenhamLine;
    QPushButton *polarCircle;
    QLabel *label;
    QTextBrowser *exec_time;
    QPushButton *bresenhamMidpointCircle;
    QSpinBox *xaxisRadius;
    QSpinBox *yaxisRadius;
    QLabel *label_2;
    QLabel *label_4;
    QPushButton *midpointEllipse;
    QPushButton *polarEllipse;
    QPushButton *setVertex;
    QPushButton *clearVertex;
    QPushButton *scanLineFill;
    QComboBox *fill_selector;
    QPushButton *boundaryFill;
    QPushButton *floodFill;
    QSpinBox *xtranslate;
    QSpinBox *ytranslate;
    QPushButton *translation;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QPushButton *scaling;
    QSpinBox *yshear;
    QPushButton *shearing;
    QSpinBox *xshear;
    QLabel *label_10;
    QLabel *label_11;
    QCheckBox *xaxis;
    QCheckBox *yaxis;
    QPushButton *reflection;
    QLabel *label_12;
    QPushButton *rotation;
    QDoubleSpinBox *angle;
    QDoubleSpinBox *xscale;
    QDoubleSpinBox *yscale;
    QCheckBox *reflectionaxis;
    QPushButton *setCorner_1;
    QPushButton *setCorner_2;
    QPushButton *lineClip;
    QPushButton *drawAndStore;
    QLabel *label_13;
    QPushButton *polygonClip;
    QMenuBar *menuBar;
    QMenu *menuDebarghya_Maitra_Graphics_Assignment;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1200, 1050);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName("centralWidget");
        frame = new my_label(centralWidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(0, 0, 700, 700));
        frame->setCursor(QCursor(Qt::CrossCursor));
        frame->setMouseTracking(true);
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        frame->setFrameShape(QFrame::Box);
        frame->setLineWidth(1);
        mouse_movement = new QLabel(centralWidget);
        mouse_movement->setObjectName("mouse_movement");
        mouse_movement->setGeometry(QRect(1080, 610, 111, 31));
        mouse_movement->setCursor(QCursor(Qt::IBeamCursor));
        mouse_movement->setFrameShape(QFrame::Panel);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(950, 620, 121, 20));
        mouse_pressed = new QLabel(centralWidget);
        mouse_pressed->setObjectName("mouse_pressed");
        mouse_pressed->setGeometry(QRect(1080, 570, 111, 31));
        mouse_pressed->setCursor(QCursor(Qt::IBeamCursor));
        mouse_pressed->setFrameShape(QFrame::Panel);
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(970, 580, 91, 20));
        x_axis = new QFrame(centralWidget);
        x_axis->setObjectName("x_axis");
        x_axis->setGeometry(QRect(0, 225, 700, 1));
        x_axis->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 85, 255);"));
        x_axis->setFrameShape(QFrame::HLine);
        x_axis->setFrameShadow(QFrame::Sunken);
        y_axis = new QFrame(centralWidget);
        y_axis->setObjectName("y_axis");
        y_axis->setGeometry(QRect(225, 0, 1, 700));
        y_axis->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(85, 255, 255);"));
        y_axis->setFrameShape(QFrame::VLine);
        y_axis->setFrameShadow(QFrame::Sunken);
        show_axes = new QCheckBox(centralWidget);
        show_axes->setObjectName("show_axes");
        show_axes->setGeometry(QRect(730, 60, 91, 21));
        show_axes->setCursor(QCursor(Qt::PointingHandCursor));
        DrawDDALine = new QPushButton(centralWidget);
        DrawDDALine->setObjectName("DrawDDALine");
        DrawDDALine->setGeometry(QRect(720, 200, 111, 31));
        DrawDDALine->setCursor(QCursor(Qt::PointingHandCursor));
        circle_radius = new QSpinBox(centralWidget);
        circle_radius->setObjectName("circle_radius");
        circle_radius->setGeometry(QRect(800, 170, 46, 20));
        circle_radius->setCursor(QCursor(Qt::PointingHandCursor));
        draw_circle = new QRadioButton(centralWidget);
        draw_circle->setObjectName("draw_circle");
        draw_circle->setGeometry(QRect(710, 170, 91, 17));
        draw_circle->setCursor(QCursor(Qt::PointingHandCursor));
        draw_line = new QRadioButton(centralWidget);
        draw_line->setObjectName("draw_line");
        draw_line->setGeometry(QRect(730, 110, 77, 17));
        draw_line->setCursor(QCursor(Qt::PointingHandCursor));
        set_point1 = new QPushButton(centralWidget);
        set_point1->setObjectName("set_point1");
        set_point1->setGeometry(QRect(820, 100, 81, 23));
        set_point1->setCursor(QCursor(Qt::PointingHandCursor));
        set_point2 = new QPushButton(centralWidget);
        set_point2->setObjectName("set_point2");
        set_point2->setGeometry(QRect(820, 130, 81, 23));
        set_point2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(980, 60, 81, 31));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_shGrid = new QPushButton(centralWidget);
        pushButton_shGrid->setObjectName("pushButton_shGrid");
        pushButton_shGrid->setGeometry(QRect(890, 60, 81, 31));
        pushButton_shGrid->setCursor(QCursor(Qt::PointingHandCursor));
        spinBox = new QSpinBox(centralWidget);
        spinBox->setObjectName("spinBox");
        spinBox->setGeometry(QRect(840, 60, 42, 26));
        spinBox->setCursor(QCursor(Qt::PointingHandCursor));
        spinBox->setValue(5);
        DrawBresenhamLine = new QPushButton(centralWidget);
        DrawBresenhamLine->setObjectName("DrawBresenhamLine");
        DrawBresenhamLine->setGeometry(QRect(840, 200, 141, 31));
        DrawBresenhamLine->setCursor(QCursor(Qt::PointingHandCursor));
        polarCircle = new QPushButton(centralWidget);
        polarCircle->setObjectName("polarCircle");
        polarCircle->setGeometry(QRect(960, 260, 111, 31));
        polarCircle->setCursor(QCursor(Qt::PointingHandCursor));
        label = new QLabel(centralWidget);
        label->setObjectName("label");
        label->setGeometry(QRect(1060, 40, 121, 21));
        label->setAlignment(Qt::AlignCenter);
        exec_time = new QTextBrowser(centralWidget);
        exec_time->setObjectName("exec_time");
        exec_time->setGeometry(QRect(1070, 60, 111, 31));
        exec_time->viewport()->setProperty("cursor", QVariant(QCursor(Qt::IBeamCursor)));
        bresenhamMidpointCircle = new QPushButton(centralWidget);
        bresenhamMidpointCircle->setObjectName("bresenhamMidpointCircle");
        bresenhamMidpointCircle->setGeometry(QRect(1080, 260, 111, 31));
        bresenhamMidpointCircle->setCursor(QCursor(Qt::PointingHandCursor));
        xaxisRadius = new QSpinBox(centralWidget);
        xaxisRadius->setObjectName("xaxisRadius");
        xaxisRadius->setGeometry(QRect(960, 170, 42, 23));
        xaxisRadius->setCursor(QCursor(Qt::PointingHandCursor));
        yaxisRadius = new QSpinBox(centralWidget);
        yaxisRadius->setObjectName("yaxisRadius");
        yaxisRadius->setGeometry(QRect(1110, 170, 42, 23));
        yaxisRadius->setCursor(QCursor(Qt::PointingHandCursor));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(870, 170, 81, 21));
        label_2->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(1020, 170, 81, 21));
        label_4->setAlignment(Qt::AlignCenter);
        midpointEllipse = new QPushButton(centralWidget);
        midpointEllipse->setObjectName("midpointEllipse");
        midpointEllipse->setGeometry(QRect(840, 260, 111, 31));
        midpointEllipse->setCursor(QCursor(Qt::PointingHandCursor));
        polarEllipse = new QPushButton(centralWidget);
        polarEllipse->setObjectName("polarEllipse");
        polarEllipse->setGeometry(QRect(720, 260, 111, 31));
        polarEllipse->setCursor(QCursor(Qt::PointingHandCursor));
        setVertex = new QPushButton(centralWidget);
        setVertex->setObjectName("setVertex");
        setVertex->setGeometry(QRect(990, 200, 101, 31));
        setVertex->setCursor(QCursor(Qt::PointingHandCursor));
        clearVertex = new QPushButton(centralWidget);
        clearVertex->setObjectName("clearVertex");
        clearVertex->setGeometry(QRect(1100, 200, 91, 31));
        clearVertex->setCursor(QCursor(Qt::PointingHandCursor));
        scanLineFill = new QPushButton(centralWidget);
        scanLineFill->setObjectName("scanLineFill");
        scanLineFill->setGeometry(QRect(950, 330, 101, 31));
        scanLineFill->setCursor(QCursor(Qt::PointingHandCursor));
        fill_selector = new QComboBox(centralWidget);
        fill_selector->addItem(QString());
        fill_selector->addItem(QString());
        fill_selector->addItem(QString());
        fill_selector->setObjectName("fill_selector");
        fill_selector->setGeometry(QRect(720, 330, 111, 31));
        fill_selector->setCursor(QCursor(Qt::PointingHandCursor));
        fill_selector->setLayoutDirection(Qt::LeftToRight);
        boundaryFill = new QPushButton(centralWidget);
        boundaryFill->setObjectName("boundaryFill");
        boundaryFill->setGeometry(QRect(1060, 330, 111, 31));
        boundaryFill->setCursor(QCursor(Qt::PointingHandCursor));
        floodFill = new QPushButton(centralWidget);
        floodFill->setObjectName("floodFill");
        floodFill->setGeometry(QRect(840, 330, 101, 31));
        floodFill->setCursor(QCursor(Qt::PointingHandCursor));
        xtranslate = new QSpinBox(centralWidget);
        xtranslate->setObjectName("xtranslate");
        xtranslate->setGeometry(QRect(810, 380, 42, 23));
        xtranslate->setCursor(QCursor(Qt::PointingHandCursor));
        ytranslate = new QSpinBox(centralWidget);
        ytranslate->setObjectName("ytranslate");
        ytranslate->setGeometry(QRect(950, 380, 42, 23));
        ytranslate->setCursor(QCursor(Qt::PointingHandCursor));
        translation = new QPushButton(centralWidget);
        translation->setObjectName("translation");
        translation->setGeometry(QRect(1080, 450, 111, 31));
        translation->setCursor(QCursor(Qt::PointingHandCursor));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(720, 380, 81, 21));
        label_6->setAlignment(Qt::AlignCenter);
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(870, 380, 81, 21));
        label_7->setAlignment(Qt::AlignCenter);
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(700, 420, 81, 21));
        label_8->setAlignment(Qt::AlignCenter);
        label_9 = new QLabel(centralWidget);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(850, 420, 81, 21));
        label_9->setAlignment(Qt::AlignCenter);
        scaling = new QPushButton(centralWidget);
        scaling->setObjectName("scaling");
        scaling->setGeometry(QRect(950, 450, 111, 31));
        scaling->setCursor(QCursor(Qt::PointingHandCursor));
        yshear = new QSpinBox(centralWidget);
        yshear->setObjectName("yshear");
        yshear->setGeometry(QRect(900, 460, 42, 23));
        yshear->setCursor(QCursor(Qt::PointingHandCursor));
        shearing = new QPushButton(centralWidget);
        shearing->setObjectName("shearing");
        shearing->setGeometry(QRect(1080, 490, 111, 31));
        shearing->setCursor(QCursor(Qt::PointingHandCursor));
        xshear = new QSpinBox(centralWidget);
        xshear->setObjectName("xshear");
        xshear->setGeometry(QRect(780, 460, 42, 23));
        xshear->setCursor(QCursor(Qt::PointingHandCursor));
        label_10 = new QLabel(centralWidget);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(710, 460, 81, 21));
        label_10->setAlignment(Qt::AlignCenter);
        label_11 = new QLabel(centralWidget);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(830, 460, 81, 21));
        label_11->setAlignment(Qt::AlignCenter);
        xaxis = new QCheckBox(centralWidget);
        xaxis->setObjectName("xaxis");
        xaxis->setGeometry(QRect(820, 500, 91, 21));
        xaxis->setCursor(QCursor(Qt::PointingHandCursor));
        xaxis->setLayoutDirection(Qt::LeftToRight);
        yaxis = new QCheckBox(centralWidget);
        yaxis->setObjectName("yaxis");
        yaxis->setGeometry(QRect(880, 500, 81, 20));
        yaxis->setCursor(QCursor(Qt::PointingHandCursor));
        reflection = new QPushButton(centralWidget);
        reflection->setObjectName("reflection");
        reflection->setGeometry(QRect(950, 490, 111, 31));
        reflection->setCursor(QCursor(Qt::PointingHandCursor));
        label_12 = new QLabel(centralWidget);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(1020, 380, 51, 21));
        label_12->setAlignment(Qt::AlignCenter);
        rotation = new QPushButton(centralWidget);
        rotation->setObjectName("rotation");
        rotation->setGeometry(QRect(1040, 410, 111, 31));
        rotation->setCursor(QCursor(Qt::PointingHandCursor));
        angle = new QDoubleSpinBox(centralWidget);
        angle->setObjectName("angle");
        angle->setGeometry(QRect(1070, 380, 62, 23));
        angle->setCursor(QCursor(Qt::PointingHandCursor));
        xscale = new QDoubleSpinBox(centralWidget);
        xscale->setObjectName("xscale");
        xscale->setGeometry(QRect(790, 420, 62, 23));
        xscale->setCursor(QCursor(Qt::PointingHandCursor));
        yscale = new QDoubleSpinBox(centralWidget);
        yscale->setObjectName("yscale");
        yscale->setGeometry(QRect(930, 420, 62, 23));
        yscale->setCursor(QCursor(Qt::PointingHandCursor));
        reflectionaxis = new QCheckBox(centralWidget);
        reflectionaxis->setObjectName("reflectionaxis");
        reflectionaxis->setGeometry(QRect(710, 500, 111, 21));
        reflectionaxis->setCursor(QCursor(Qt::PointingHandCursor));
        setCorner_1 = new QPushButton(centralWidget);
        setCorner_1->setObjectName("setCorner_1");
        setCorner_1->setGeometry(QRect(720, 570, 111, 31));
        setCorner_1->setCursor(QCursor(Qt::PointingHandCursor));
        setCorner_2 = new QPushButton(centralWidget);
        setCorner_2->setObjectName("setCorner_2");
        setCorner_2->setGeometry(QRect(840, 570, 111, 31));
        setCorner_2->setCursor(QCursor(Qt::PointingHandCursor));
        lineClip = new QPushButton(centralWidget);
        lineClip->setObjectName("lineClip");
        lineClip->setGeometry(QRect(840, 610, 111, 31));
        lineClip->setCursor(QCursor(Qt::PointingHandCursor));
        drawAndStore = new QPushButton(centralWidget);
        drawAndStore->setObjectName("drawAndStore");
        drawAndStore->setGeometry(QRect(980, 120, 111, 31));
        drawAndStore->setCursor(QCursor(Qt::PointingHandCursor));
        label_13 = new QLabel(centralWidget);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(950, 90, 161, 31));
        QFont font;
        font.setPointSize(12);
        label_13->setFont(font);
        polygonClip = new QPushButton(centralWidget);
        polygonClip->setObjectName("polygonClip");
        polygonClip->setGeometry(QRect(720, 610, 111, 31));
        polygonClip->setCursor(QCursor(Qt::PointingHandCursor));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 1200, 19));
        menuDebarghya_Maitra_Graphics_Assignment = new QMenu(menuBar);
        menuDebarghya_Maitra_Graphics_Assignment->setObjectName("menuDebarghya_Maitra_Graphics_Assignment");
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName("mainToolBar");
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName("statusBar");
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuDebarghya_Maitra_Graphics_Assignment->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        frame->setText(QString());
        mouse_movement->setText(QString());
        label_3->setText(QCoreApplication::translate("MainWindow", "    Mouse Movement", nullptr));
        mouse_pressed->setText(QString());
        label_5->setText(QCoreApplication::translate("MainWindow", "Mouse Pressed", nullptr));
        show_axes->setText(QCoreApplication::translate("MainWindow", "Show Axes", nullptr));
        DrawDDALine->setText(QCoreApplication::translate("MainWindow", "Draw DDA Line", nullptr));
        draw_circle->setText(QCoreApplication::translate("MainWindow", "Draw Circle", nullptr));
        draw_line->setText(QCoreApplication::translate("MainWindow", "Draw Line", nullptr));
        set_point1->setText(QCoreApplication::translate("MainWindow", "Set point 1", nullptr));
        set_point2->setText(QCoreApplication::translate("MainWindow", "Set point 2", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "RESET", nullptr));
        pushButton_shGrid->setText(QCoreApplication::translate("MainWindow", "Show Grid", nullptr));
        DrawBresenhamLine->setText(QCoreApplication::translate("MainWindow", "Draw Bresenham Line", nullptr));
        polarCircle->setText(QCoreApplication::translate("MainWindow", "Polar Circle", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Execution Time:(ms)", nullptr));
        bresenhamMidpointCircle->setText(QCoreApplication::translate("MainWindow", "Bresenham Circle", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "X-axis Radius", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Y-axis Radius", nullptr));
        midpointEllipse->setText(QCoreApplication::translate("MainWindow", "Midpoint Ellipse", nullptr));
        polarEllipse->setText(QCoreApplication::translate("MainWindow", "Polar Ellipse", nullptr));
        setVertex->setText(QCoreApplication::translate("MainWindow", "Set Vertex", nullptr));
        clearVertex->setText(QCoreApplication::translate("MainWindow", "Clear Vertex", nullptr));
        scanLineFill->setText(QCoreApplication::translate("MainWindow", "ScanLine Fill", nullptr));
        fill_selector->setItemText(0, QCoreApplication::translate("MainWindow", "           Select", nullptr));
        fill_selector->setItemText(1, QCoreApplication::translate("MainWindow", "4-Point Fill", nullptr));
        fill_selector->setItemText(2, QCoreApplication::translate("MainWindow", "8-Point Fill", nullptr));

        boundaryFill->setText(QCoreApplication::translate("MainWindow", "Boundary Fill", nullptr));
        floodFill->setText(QCoreApplication::translate("MainWindow", "Flood Fill", nullptr));
        translation->setText(QCoreApplication::translate("MainWindow", "Translate", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "X-translate", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Y-translate", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "X-scale", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Y-scale", nullptr));
        scaling->setText(QCoreApplication::translate("MainWindow", "Scale", nullptr));
        shearing->setText(QCoreApplication::translate("MainWindow", "Shear", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "X-shear", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Y-shear", nullptr));
        xaxis->setText(QCoreApplication::translate("MainWindow", "x-axis", nullptr));
        yaxis->setText(QCoreApplication::translate("MainWindow", "y-axis", nullptr));
        reflection->setText(QCoreApplication::translate("MainWindow", "Reflect", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Angle", nullptr));
        rotation->setText(QCoreApplication::translate("MainWindow", "Rotate", nullptr));
        reflectionaxis->setText(QCoreApplication::translate("MainWindow", "Reflection-axis", nullptr));
        setCorner_1->setText(QCoreApplication::translate("MainWindow", "Set Corner Pt. 1", nullptr));
        setCorner_2->setText(QCoreApplication::translate("MainWindow", "Set Corner Pt. 2", nullptr));
        lineClip->setText(QCoreApplication::translate("MainWindow", "Line Clip", nullptr));
        drawAndStore->setText(QCoreApplication::translate("MainWindow", "Draw and Store", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Draw Lines & store pts:", nullptr));
        polygonClip->setText(QCoreApplication::translate("MainWindow", "Polygon Clip", nullptr));
        menuDebarghya_Maitra_Graphics_Assignment->setTitle(QCoreApplication::translate("MainWindow", "Debarghya Maitra Graphics Assignment", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
