


#include <iomanip>
#include <sstream>
#include <string.h>
#include <stdio.h>
#include <iostream>
#include <string>
#include "Square.h"
#define strcpy_s(a, b, c) strncpy(a
using namespace std;

Square::Square(const string& color, double Length)
    : Shape(color)
{
    SideLength = Length;
}

double Square::area()  const
{

    return SideLength * SideLength;

}

string Square::toString() const

{

    ostringstream oss;
    string TheString;
    oss << getColor() << " Square with side length of " << SideLength << " and area of " << area();
    TheString = oss.str();
    return TheString;

}


