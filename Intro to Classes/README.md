# First C++ Program with Classes and Headers

This was an assignment in my Object oreanted programing course using C++\
The main idea is to practice skills sych as  class design, constructors and member functions, basic iostream output formatting \

In this assignment, we were asked to creat a C++ Date class that stores a calendar date and test it using some values in the main function.\
The requirnment of this class were: \
1: To use three private integer data member variables to represent the date (month, day, and year).\
2: To supply the following public member functions in your class.
- A default constructor (taking no arguments) that initializes the Date object  to Jan 1, 2000.\
- A constructor taking three arguments (month, day, year) that initializes the Date object to the parameter values.\
* it sets the Date's year to 1900 if the year parameter is less than 1900
* it sets the Date's month to 1 if the month parameter is outside the range of 1 to 12.
* it sets the Date's day to 1 if the day parameter is outside the range of days for the specific month. Assume February always has 28 days for this test.
3: A getDay member function that returns the Date's day value.
4: A getMonth member function that returns the Date's month value.
5: A getYear member function that returns the Date's year value.
6: A getMonthName member function that returns the name of the month for the Date's month (e.g. if the Date represents 2/14/2000, it returns "February").  You can return a const char* or a std::string object from this function.
7: A print member function that prints the date in the numeric form MM/DD/YYYY to cout (e.g. 02/14/2000). Month and day must be two digits with leading zeros as needed.
8: A printLong member function that prints the date with the month's name in the form dd month yyyy (e.g. 14 February 2000) to cout. This member function should call the getMonthName() member function to get the name.  No leading zeroes required for the day.
