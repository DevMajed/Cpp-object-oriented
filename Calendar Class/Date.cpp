// Calendar 


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
#define _CRT_SECURE_NO_WARNINGS


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
    int getDay() { return day; }
    // End  of The Three Requred Memeber Functions

    string getMonthName();
    void print();
    void printLong();


};
    
    // a constructor that initializes Date object to  parameter values
    Date :: Date(int Month, int Day, int Year)
    
    {
        month = Month;
        day = Day;
        year = Year;
        
   
        // Checking for Year limit
       if (year < 1900)
       {
                  year = 1900;
       }
        
        // Checking for month range
        if (month < 1 || month > 12)
        {
                   month = 1;
        }
        
        // Checking for Day limit of each month

        int MonthCheck[] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
        
        for ( int i = 0; i <12; i++)
            
            // Start of Looping for 12 months
        {
            // Checking the range for months that has 31 days
            if ( i == 1 ||  i == 3 ||  i == 5 ||  i ==7 ||  i ==8 || i == 10 || i == 12 )
            {
                if (  MonthCheck[i] > 31 || MonthCheck[i] < 0)
                {
                    day =1;
                }
            }
            
            // Checking the range for months that has 30 days
            else if ( i ==4 || i ==  6 || i == 9 || i == 11)
            {
                if (  MonthCheck[i] > 30 || MonthCheck[i] < 0)
                {
                    day =1;
                }
            }
            
            // Checking the range for Feb
            else if (i==2)
            {
                
                if (  MonthCheck[i] > 28 || MonthCheck[i] < 0)
                {
                    day =1;
                }
            }
            
        }
        // End of Looping for 12 months

       
    }
    // End of my constructor that initializes the Date object to the parameter values

            
            

    
  std::string Date::getMonthName()
    {
        string MonthName;
        switch (month)
        {
        case 1:  MonthName = ("January");
            break;
        case 2:  MonthName = ("February");
            break;
        case 3:  MonthName = ("March");
            break;
        case 4:  MonthName = ("April");
            break;
        case 5:  MonthName = ("May");
            break;
        case 6:  MonthName = ("June");
            break;
        case 7:  MonthName = ("July");
            break;
        case 8:  MonthName = ("August");
            break;
        case 9:  MonthName = ("September");
            break;
        case 10:  MonthName = ("October");
            break;
        case 11:  MonthName = ("November");
            break;
        case 12:  MonthName = ("December");
            break;
        }
        return MonthName;
    }
    
// End  of month naming member functions

    
    // Start the of the print member function, prints MM/DD/YYYY, Month & day must two digits & leading 0 if needed

    void Date::print()
    {
        
        if ( month < 10 && day >= 10)
        {
                     
                char m[25];
                sprintf_s(m, "%02d", month);
                cout << m << "/" << day << "/" << year << endl;

        }
            
        else if ( month < 10 && day < 10)
        {
                                   
                char m[25];
                sprintf_s(m, "%02d", month);
                char d[25];
                sprintf_s(d, "%02d", day);
                cout << m << "/" << d << "/" << year << endl;

        }
                     
        
        else if (month >= 10 && day < 10)
        {
            char d[25];
            sprintf_s(d, "%02d", day);
            cout << month << "/" << d << "/" << year << endl;
        }
    
        else {
            cout << month << "/" << day << "/" << year << endl;
        }
    }
    
    // End the of the print member function
        
        
    void Date::printLong()
    {
        Date MonthN;
        cout << day << " " << MonthN.getMonthName() << " " << year << endl;
    }
