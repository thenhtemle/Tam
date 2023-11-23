#pragma once

#include <iostream>
#include <memory>
#include <iomanip>

#include "Shapes.h"
#include "StringConverter.h"

using std::cout;

class ShapesList {
private:
    /// <summary>
    /// Storing shapes
    /// </summary>
    vector<shared_ptr<Shapes>> _shapes;

    /// <summary>
    /// Strategy convert
    /// </summary>
    StringConverter _converter;
public:
    ShapesList() = default;

    /// <summary>
    /// Constructor with vector of pointers and StringConvert given 
    /// </summary>
    /// <param name="">Vector of pointers pointing to shapes</param>
    /// <param name="">StringConverter</param>
    ShapesList(vector<shared_ptr<Shapes>>, StringConverter); 

    /// <summary>
    /// Print list of shapes with attributes
    /// </summary>
    void printShapeWithAttribute(); 

    /// <summary>
    /// Sorting the shapes based on the ascending of areas (Bubble Sort)
    /// </summary>
    void sortArea();

    /// <summary>
    /// Print list of shapes with attributes, perimeter and area 
    /// </summary>
    void printShapeWithCaculated(); //in danh sách hình gồm chu vi, diện tích.
};