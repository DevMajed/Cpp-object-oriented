//
//  Date.hpp
//  Assignment 1 Majed Alharbi
//
//  Created by Majed Mesh on 6/8/20.
//  Copyright © 2020 Majed Mesh. All rights reserved.
//

#ifndef Date_hpp
#define Date_hpp

#include <iostream>
#include <iomanip>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::setfill;
using std::setw;
using std::string;
using namespace std;
 
class Date
{
    
private:
    
    int month;
    int day;
    int year;

 
public:
    
    // Making Initial Constructur
    Date(int Month = 1, int Day = 1, int Year = 2000);

    
    // Start of The Three Requred Memeber Functions
    int getYear() { return year; }
    int getMonth() { return month; }
    int getDay()  { return day; }
    // End  of The Three Requred Memeber Functions
    
        string getMonthName();
        void print();
        void printLong();

    
};
 
#endif



