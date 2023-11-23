#include "CircleParser.h"
#include "Circle.h"

shared_ptr<Shapes> CircleParser::parser(string data)
{
    //Checking the valid format of the circle
    regex circlePattern("( a=)\?([0-9]*[.])?[0-9]+");
    bool matched = regex_match(data, circlePattern);

    //Return NULL pointer if unmatched
    if (!matched) return nullptr;

    //Convert the radius from string to double
    data = data.substr(data.find("=") + 1);
    double radius = stod(data);

    //Constructor the circle from radius
    shared_ptr<Shapes> res = std::make_shared<Circle>(radius);

    return res;
}