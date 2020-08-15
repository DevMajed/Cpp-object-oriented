

#include <iomanip>
#include <sstream>
#include <string.h>
#include <stdio.h>
#include <iostream>
#include <string>
#include "Circle.h"
#define strcpy_s(a, b, c) strncpy(a
using namespace std;


Circle::Circle(const string& color, double Radius)
    : Shape(color)
{
    radius = Radius;
}

double Circle::area() const
{
    return 3.141592653589793238 * radius * radius;

}

// this overriding member function returns the Circle object's description (color, type, measurements, and area).
string Circle::toString()  const
{

    ostringstream oss;
    string TheString;
    oss << getColor() << " circle with radius of " << radius << " and area of " << area();
    TheString = oss.str();
    return TheString;

}










