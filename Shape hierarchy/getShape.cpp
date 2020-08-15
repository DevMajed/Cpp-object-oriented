

#include "Rectangle.h"
#include <string.h>
#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include "Circle.h"
#include "Rectangle.h"
#include "Square.h"


using namespace std;

/*
 For reading shape data, create a getShape.cpp file containing a getShape()
 function that returns a base Shape * pointer.
 It should read a shape description from an input stream, create the correct type of derived 
 hape with the new operator and parameters to the constructor, and return a base Shape * pointer to the new object.

 After reading a shape color and type (e.g. blue circle), it reads the
 additional information specific to that type of shape (e.g. for a circle, it reads the radius),
 and then uses the new operator to create the specific derived type of shape (e.g.  new Circle(color, radius) )

 Input can be from cin, or from a stream input file (use iostreams).
 When there is no more input data (or when 'done' is entered), return a NULL Shape pointer
 All character data is kept in C++ strings (no char[] arrays).

 This is the only file that #includes the Circle.h, Square.h, and Rectangle.h header file
 (since it needs them to create the various types of shapes with the new operator).


 */


Shape* getShape()

{

    Shape* temp;
    double sideLength, length, width, radius;
    string color, shape;

    cout << "Enter shape's color (or 'done')...: ";
    cin >> color;


    if ((strcmp("done", color.c_str()) == 0))
    {
        cout << endl;
        return NULL;
    }

    /* It should read a shape description from an input stream, create
    the correct type of derived shape with the new operator and parameters
    to the constructor, and return a base Shape * pointer to the new object.*/
    else
    {

        cout << "Enter shape type...: ";
        cin >> shape;

        while (strcmp(shape.c_str(), "square") 
            && strcmp(shape.c_str(), "circle")
            && strcmp(shape.c_str(), "rectangle"))

        {

            cout << "Please enter a shape (square, circle, or rectangle): ";
            cin >> shape;
        }

        if (strcmp(shape.c_str(), "square") == 0)
        {
            cout << "Enter the length of a side...: ";
            cin >> sideLength;
            temp = new Square(color, sideLength);
            cout << endl;

        }


        else if (strcmp(shape.c_str(), "circle") == 0)
        {
            cout << "Enter the radius...: ";
            cin >> radius;
            temp = new  Circle(color, radius);
            cout << endl;

        }

        else if (strcmp(shape.c_str(), "rectangle") == 0)
        {
            cout << "Enter the length and width...: ";
            cin >> length;
            cin >> width;
            temp = new Rectangle(color, length, width);
            cout << endl;

        }

        else

            return NULL;

        return temp;

    }
}



