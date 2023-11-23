#include "ShapesList.h"

ShapesList::ShapesList(vector<shared_ptr<Shapes>> shapes, StringConverter converter)
{
    _shapes = shapes;
    _converter = converter;
} //constructor truyền shape và strategy cho 2 thuộc tính

void ShapesList::printShapeWithAttribute()
{
    for (int i = 0; i < _shapes.size(); i++)
    {
        shared_ptr<ShapeToStringConverter> converter = _converter.converterType(_shapes[i]->getShapeType());
        if (converter == nullptr)
        {
            continue;
        }
        cout << i + 1 << ". " << converter->convertData(_shapes[i]) << "\n";
    }
} //in danh sách hình gồm thuộc tính.

void ShapesList::sortArea()
{
    if (_shapes.size() == 0) return;

    for (int i = 0; i < _shapes.size() - 1; i++)
    {
        for (int j = i + 1; j < _shapes.size(); j++)
        {
            if (_shapes[j]->area() < _shapes[i]->area())
            {
                swap(_shapes[j], _shapes[i]);
            }
        }
    }
} 

void ShapesList::printShapeWithCaculated()
{
    for (int i = 0; i < _shapes.size(); i++)
    {
        cout << "| " << i + 1 << " | ";
        shared_ptr<ShapeToStringConverter> converter = _converter.converterType(_shapes[i]->getShapeType());

        if (converter == nullptr)
        {
            //wcout << "dont have stratery convert\n";
            cout << _shapes[i]->getShapeType() << " " << _shapes[i]->perimeter() << " " << _shapes[i]->area() << "\n";
            continue;
        }

        string info = converter->convertDataCaculated(_shapes[i]);
        cout << info << "\n";
    }
} //in danh sách hình gồm chu vi, diện tích.