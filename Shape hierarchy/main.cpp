//
//  main.cpp
//  Assignment 4
//
//  Created by Majed Alharbi on 7/19/20.
//  Copyright � 2020 Majed. All rights reserved.
//

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



// Buffer
Shape* getShape();

int main(void)

{
    Shape* shapes[10];
    int i = -1;
    int j = 0;
    Shape* temp;

    cout << "Enter a list of shapes - 'done' to end\n";

    while (shapes[i] != NULL)
    {
        i++;
        shapes[i] = getShape();
    }

    i = 0;
    cout << "Enter the shape's color (or 'done')...\n" << endl;

    while (shapes[i] != NULL)
    {
        cout << shapes[i]->toString() << endl;
        i++;
    }

    cout << "\nThe sorted list of shapes...\n" << endl;
    
    for (i = 0; shapes[i] != NULL; i++)
        for (j = 0; j <= i; j++)
        {
            if (shapes[j]->area() > shapes[i]->area())
            {
                temp = shapes[j]; shapes[j] = shapes[i]; shapes[i] = temp;
            }
        }


    i = 0;
    while (shapes[i] != NULL)
    {
        cout << shapes[i]->toString() << endl;
        i++;
    }
    while (shapes[i] != NULL)
    {
        delete shapes[i];
        i++;
    }
    return 0;
}


