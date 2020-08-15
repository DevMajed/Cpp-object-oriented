

#include <iomanip>
#include <sstream>
#include <string.h>
#include <stdio.h>
#include <iostream>
#include <string>
#include "Rectangle.h"
#define strcpy_s(a, b, c) strncpy(a
using namespace std;



Rectangle::Rectangle(const string& color, double Length, double Width)
    : Shape(color)
{
    length = Length;
    width = Width;
}

double Rectangle::area() const
{
    return  length * width;

}

// this overriding member function returns the Circle object's description (color, type, measurements, and area).
string Rectangle::toString() const
{

    ostringstream oss;
    string TheString;
    oss << getColor()
        << " Rectangle with length of "
        << length
        << " width of "
        << width
        << ", and area of " << area();

    TheString = oss.str();
    return TheString;


}

