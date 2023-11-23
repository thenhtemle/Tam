#pragma once

#include <iostream>
#include <string>
#include <sstream>
#include <memory>

#include "Shapes.h"
#include "Object.h"

using std::shared_ptr;
using std::string, std::stringstream;

class Parser : public Object {
public:
    virtual shared_ptr<Shapes> parse(stringstream) = 0;
    string toString() { return "Parser"; }
};