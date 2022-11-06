#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtGui>
#include <QtCore>
#include <QTableView>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow {
    Q_OBJECT
public slots:
    void Mouse_Pressed();
    void showMousePosition(QPoint& pos);
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_show_axes_clicked();

    //void on_Draw_clicked();

    void on_set_point1_clicked();

    void on_set_point2_clicked();

    void on_pushButton_clicked();
    //void on_show_grid_clicked();

    void on_pushButton_shGrid_clicked();

    void on_spinBox_valueChanged(int arg1);

    void on_DrawDDALine_clicked();

    void on_DrawBresenhamLine_clicked();

    void on_polarCircle_clicked();

    void on_bresenhamMidpointCircle_clicked();

    void on_midpointEllipse_clicked();

    void on_polarEllipse_clicked();

    void on_setVertex_clicked();

    void on_clearVertex_clicked();

    void on_floodFill_clicked();

    void on_boundaryFill_clicked();
    void drawDDALine (int r, int g, int b);
    void delay(int);
    void initEdgeTable();
    void on_scanLineFill_clicked();
    void storeEdgeInTable(int x1,int y1, int x2, int y2);
    void boundary_fill_8point(int x, int y, QRgb edgecolor, int r, int g, int b);
    void boundary_fill_4point(int x, int y, QRgb edgecolor, int r, int g, int b);
    void flood_fill_4point(int x, int y, int r, int g, int b);
    void flood_fill_8point(int x, int y, int r, int g, int b);
    void poly_draw(std::vector<std::pair<int,int> > vlist, int r, int g, int b);
    void point(int,int,int,int,int);
    void draw_Window();
    void cohenSutherlandClip(int x1, int y1,int x2, int y2);
    int computeCode(int xa, int ya);
    void drawLineByStoringPoints (int r, int g, int b);
    void suthHodgClip();
    void clip(int x1, int y1, int x2, int y2);
    int y_intersect(int x1, int y1, int x2, int y2,int x3, int y3, int x4, int y4);
    int x_intersect(int x1, int y1, int x2, int y2,int x3, int y3, int x4, int y4);

    void on_translation_clicked();

    void on_scaling_clicked();

    void on_shearing_clicked();

    void on_rotation_clicked();

    void on_reflection_clicked();

    void on_setCorner_2_clicked();

    void on_setCorner_1_clicked();

    void on_drawAndStore_clicked();

    void on_lineClip_clicked();

    void on_polygonClip_clicked();

    void on_setControlPoint_clicked();

    void on_clearControlPoint_clicked();

    void on_drawBezierCurve_clicked();

private:
    Ui::MainWindow *ui;
    QPoint p1,p2,cp1,cp2;
};

#endif // MAINWINDOW_H
