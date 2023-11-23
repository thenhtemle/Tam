#include "Square.h"

Square::Square(double side)
{
    if (side < 0) {
        throw exception("Side could not be negative value!!");
    }
    _side = side;
}

vector<double> Square::getAttribute()
{
    return { _side };
}

double Square::perimeter()
{
    return _side * 4;
}

double Square::area()
{
    return _side * _side;
}

string Square::getShapeType()
{
    return "Square";
}