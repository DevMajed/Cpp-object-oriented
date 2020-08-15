 


#ifndef Square_hpp
#define Square_hpp

#include <string.h>
#include <stdio.h>
#include <iostream>
#include <string>
#include "Shape.h"
#include "Square.h"
using namespace std;

class Square : public Shape

{

public:
    Square(const string& color, double Length);

    virtual double area() const;
    virtual string toString() const;


private:
    double SideLength;


};
#endif // SQUARE_H_INCLUDED ------------------------
