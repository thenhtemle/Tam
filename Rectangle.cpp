#include "Rectangle.h"

Rectangle::Rectangle(double width, double height) {
    if (width < 0 || height < 0) {
        throw exception("Could not be negative value!!");
    }
    _width = width;
    _height = height;
}

vector<double> Rectangle::getAttribute() {
    return { _width, _height };
}

double Rectangle::perimeter() {
    return 2 * (_width + _height);
}

double Rectangle::area() {
    return _width * _height;
}

string Rectangle::getShapeType() {
    return "Rectangle";
}