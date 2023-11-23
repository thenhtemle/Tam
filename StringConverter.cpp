#include "StringConverter.h"

StringConverter::StringConverter(string type, shared_ptr<ShapeToStringConverter> converter)
{
    _prototype = { type, converter };
} 

shared_ptr<ShapeToStringConverter> StringConverter::converterType(string type)
{
    shared_ptr<ShapeToStringConverter> converter = nullptr;

    if (type == get<0>(_prototype))
    {
        converter = get<1>(_prototype);
    }

    return converter;
}