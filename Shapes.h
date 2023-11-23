#pragma once

#include <iostream>
#include <vector>

#include "Object.h"

using std::vector;

class Shapes : public Object {
public:
    virtual vector<double> getAttribute() = 0;
    virtual double perimeter() = 0;
    virtual double area() = 0;
public:
    virtual string getShapeType() { return "Shapes"; };
};
