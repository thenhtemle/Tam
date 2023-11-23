#pragma once

#include <iostream>
#include <string>
#include <exception>
#include "Shapes.h"

using std::exception;
using std::string;

class Rectangle: public Shapes {
private:
	double _width;
	double _height;
public:
	Rectangle() = default;

	/// <summary>
	/// Constructor the rectangle
	/// </summary>
	/// <param name="">width</param>
	/// <param name="">height</param>
	Rectangle(double, double);

	/// <summary>
	/// Getting the atrribute of the rectangle and put it in the array
	/// </summary>
	/// <returns>The vector with the width and height of the rectangle</returns>
	vector<double> getAttribute() override;

	/// <summary>
	/// Caculate the perimeter of the rectangle
	/// </summary>
	/// <returns>The perimeter</returns>
	double perimeter() override;
	
	/// <summary>
	/// Caculate the area of the rectangle
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