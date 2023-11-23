#pragma once
#include "Parser.h"
#include "ParserFactory.h"
#include "Circle.h"
#include <memory>
#include <regex>

using std::shared_ptr, std::make_shared, std::regex;

class CircleParser {
public:
    CircleParser() = default;

    /// <summary>
    /// Parsing circle 
    /// </summary>
    /// <param name="">The given string line</param>
    /// <returns>Pointer pointing to the circle parsing</returns>
    shared_ptr<Shapes> parser(string);
};