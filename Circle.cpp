#include "Circle.h"
#include <math.h> 
using std::pow;

Circle::Circle(double radius) {
	if (radius < 0){
		throw exception("Radius could not be negative value");
	}
	_radius = radius;
}

vector<double> Circle::getAttribute() {
	return { _radius };
}

double Circle::perimeter() {
	return 2 * PI * _radius;
}

double Circle::area() {
	return pow(_radius, 2) * PI;
}

string Circle::getShapeType() {
	return "Circle";
}
