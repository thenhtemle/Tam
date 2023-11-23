#pragma once

#include <iostream>
#include <tuple>
#include <string>
#include <memory>

#include "ShapesToStringConverter.h"

using std::string, std::tuple, std::shared_ptr;

class StringConverter {
private:
    tuple<string, shared_ptr<ShapeToStringConverter>> _prototype;
public:
    StringConverter() = default;
    ~StringConverter() = default;
    StringConverter(string, shared_ptr<ShapeToStringConverter>); //đăng kí converter cho strategy
public:
    shared_ptr<ShapeToStringConverter> converterType(string); //chọn ra converter phù hợp
    //string toString() { return "Parse Factory"; };
};