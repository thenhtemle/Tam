#pragma once
#include "Parser.h"
#include "ParserFactory.h"
#include "Rectangle.h"
#include <memory>
#include <regex>

using std::shared_ptr, std::make_shared, std::regex;

class RectangleParser {
public:
    RectangleParser() = default;

    /// <summary>
    /// Parsing rectangle
    /// </summary>
    /// <param name="">The given string line</param>
    /// <returns>Pointer pointing to the rectangle parsing</returns>
    shared_ptr<Shapes> parser(string);
};