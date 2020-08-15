


#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Square.h"
#include <string.h>
#include <stdio.h>
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

#define strcpy_s(a, b, c) strncpy(a


Shape::Shape(const string& Color)
    : color(Color)
{}


string Shape::getColor() const
{
    return color;

}

