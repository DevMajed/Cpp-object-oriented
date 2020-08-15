

#define _CRT_SECURE_NO_WARNINGS

#ifndef Shape_h
#define Shape_h

#include <string.h>
#include <string>
#include <iostream>
using namespace std;

class Shape
{

public:

    // a constructor that sets the color instance value
    Shape(const string& Color);




    // a const member function returning the object's color value.
    string getColor() const;


    // a const pure virtual member function that computes and returns the object's area. must be overridden in each derived class.
    virtual double area() const = 0;


    // a const pure virtual member function that returns the shape's description (color, type, measurements, and area)
    // as a std::string. It must be overridden in each derived class.  See the example output below for the format.
    virtual string toString() const = 0;


private:
    string color;


};


#endif /* Shape_hpp */



