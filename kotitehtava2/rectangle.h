#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <iostream>

using namespace std;

class Rectangle {
public:
    Rectangle();

    double getArea() const;
    double getCircum() const;

    void setWidth(double newWidth);
    void setHeight(double newHeight);

    Rectangle(double w, double h) : width(w), height(h) {}

private:
    double width;
    double height;
};
#endif // RECTANGLE_H
