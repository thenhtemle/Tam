#include "SquareParser.h"

shared_ptr<Shapes> SquareParser::parser(string data)
{
    //Checking the valid format of the square
    regex squarePattern("( a=)\?([0-9]*[.])?[0-9]+"); 
    bool matched = regex_match(data, squarePattern);

    //Return NULL pointer if unmatched
    if (!matched) return nullptr;

    //Convert the side from string to double
    data = data.substr(data.find("=") + 1); 
    double side = stod(data);

    //Constructor the square from side
    shared_ptr<Shapes> res = make_shared<Square>(side);

    return res;
}