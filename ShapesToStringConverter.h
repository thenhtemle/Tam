#pragma once
#include <iostream>
#include <string>
#include <iomanip>
#include <memory>

#include "Shapes.h"

using std::string;
using std::shared_ptr;

class ShapeToStringConverter {
public:
    ShapeToStringConverter() = default;
public:
    virtual string convertData(shared_ptr<Shapes>) = 0;
    virtual string convertDataCaculated(shared_ptr<Shapes>) = 0;
    virtual string toString() = 0;
};