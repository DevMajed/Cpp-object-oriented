# Overloading INT

This is a simple project that i build to understand inheritance, dynamic binding, and overloading. \
it is a hierarchy of C++ classes representing various shapes (eg. circle, rectangle, square). Each class will have its own .cpp source file and .h header file.. 

It has an abstract Shape class that will be the base class of all the other shapes. It has one private std::string instance variable representing the shape's color, and the following public member functions: 

Shape(const string& color) - a constructor that sets the color instance value. 
string getColor() - a const member function returning the object's color value. 
double area() - a const pure virtual member function that computes and returns the object's area. It must be overridden in each derived class. \
string toString() - a const pure virtual member function that returns the shape's description (color, type, measurements, and area) as a std::string. It must be overridden in each derived class. See the example output below for the format.
