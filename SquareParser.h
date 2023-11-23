#pragma once

#include <memory>
#include <regex>

#include "Parser.h"
#include "Shapes.h"
#include "Square.h"

using std::shared_ptr, std::make_shared, std::regex;

class SquareParser {
public:
    SquareParser() = default;

    /// <summary>
    /// Parsing square 
    /// </summary>
    /// <param name="">The given string line</param>
    /// <returns>Pointer pointing to the square parsing</returns>
    shared_ptr<Shapes> parser(string);
};