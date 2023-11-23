#include "RectangleParser.h"
#include "Rectangle.h"

shared_ptr<Shapes> RectangleParser::parser(string data)
{
    //Checking the valid format of the rectangle
    regex rectanglePattern("( w=)\?([0-9]*[.])?[0-9]+, ( h=)\?([0-9]*[.])?[0-9]+");
    bool matched = regex_match(data, rectanglePattern);

    //Return NULL pointer if unmatched
    if (!matched) return nullptr;

    stringstream ss(data);
    string buffer;

    getline(ss, buffer, '=');
    getline(ss, buffer, ',');

    //Convert the weight and height from string to double
    double weight = stod(buffer);
    getline(ss, buffer, '=');
    getline(ss, buffer);
    double height = stod(buffer);

    //Constructor the rectangle from weight and height
    shared_ptr<Shapes> res = std::make_shared<Rectangle>(weight, height);

    return res;
}