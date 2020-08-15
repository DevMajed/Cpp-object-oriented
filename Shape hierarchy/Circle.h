

#ifndef Circle_h
#define Circle_h

#include <string.h>
#include <stdio.h>
#include <iostream>
#include <string>
#include "Shape.h"
#include "Square.h"
using namespace std;


class Circle : public Shape
{


public:

    // a constructor that invokes the base Shape constructor (passing the color), then sets it's own radius instance value.
    Circle(const string& color, double Radius);


    // this overriding member function computes and returns the Circle object's area value.
    virtual double area() const;

    // this overriding member function returns the Circle object's description (color, type, measurements, and area).
    virtual string toString() const;

private:
    double radius;



};

#endif /* Circle_hpp */
