#pragma once

#include <iostream>
#include <string>
#include <sstream>
#include <exception>

#include "Shapes.h"

using std::exception;
using std::stringstream;
using std::string;

class Square : public Shapes {
private:
    double _side;
public:
    Square() = default;

    /// <summary>
    /// Constructor the square
    /// </summary>
    /// <param name="">side</param>
    Square(double);
public:
    /// <summary>
    /// Getting the attribute of the square and put it in the array
    /// </summary>
    /// <returns>The vector with side of the square</returns>
    vector<double> getAttribute() override;

    /// <summary>
    /// Caculate the perimeter of the square
    /// </summary>
    /// <returns>The perimeter</returns>
    double perimeter() override;

    /// <summary>
    /// Caculate the area of the square
    /// </summary>
    /// <returns>The area</returns>
    double area() override;
public:
    /// <summary>
    /// Define the type of shape
    /// </summary>
    /// <returns>Shape Type</returns>
    string getShapeType() override;
};