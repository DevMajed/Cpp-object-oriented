#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>



// -- TString.h header file --

// All member functions with character pointer parameters must test for a null pointer
// and treat it as an empty (length 0) string (i.e: ""). Do not pass null pointers to the C++
// string library functions (e.g: strlen), as it is not portable code (will not work on all platforms).
// All member functions must manage heap memory correctly, and must not leak heap memory
// (i.e. they must delete any heap memory no longer used so it can be recycled).
// The C++ string library functions (e.g: strlen, strcpy_s, strcat_s, strcmp, stricmp, etc. 
// may be used to implement the TString class member functions (e.g. use strcpy_s for copying char data instead of writing a for-loop).
// The C++ Standard Library string class (std::string) is not used in this assignment and should not be included in any of the code.



#ifndef _TSTRING_H // only include once in a compilation unit
#define _TSTRING_H

class TString { // Prefix with 'T' for uniqueness
public:


    // default ctor with null value
    TString(const char* pText = 0);
    
    //Copy Constructor accepting string object by const refrence
    // passed by const referecnce to avoid copying
    TString(const TString& Sobject);
    

    // A destructor that uses the C++ delete operator to free the dynamic character array owned by
    // this String, and then sets the mpText pointer member to null.
    // This prevents the dynamic char array from becoming a memory leak.
    //  delete this;
    //  mpText = nullptr;
    ~TString();


    // A length member function returning the current size of the character data (not including the final null character).
    //since length() is not changing class object, it is defined as const and same for others.
    int length() const;


    // An asChar member function returning a const char pointer to this String's
    // encapsulated character data. It does not allocate new memory for the char data to be returned.
      // asChar does not change the state of 'this' so it is specified as const
    const char* asChar() const;

    // An assign member function accepting a String object parameter (by const reference),
    // and a return type of void.
    // It first checks for assignment to self and returns if true.  Otherwise, it uses delete to
    // release the current char array it points to, then dynamcally allocates a new char array of
    // the same size as the parameter String's, and copies the character data from the parameter String.
    // since assign() will change this and class onjects, it is not defined as const
     // it is const because won't modfy class it will return new TString

    void assign(const TString& Sobject);
    // passed by const referecnce to avoid copying
        // An assign member function accepting a const char pointer to an array of characters, and a return type of void.
        // It checks for assignment to self, and returns if true. Otherwise,  does the same as the other assign member function.
        // since assign() will change this and class onjects, it is not defined as const

        // The assign member function should check for assignment-to-self, and if so, simply return. Otherwise, it should acquire heap memory for the new character array prior to releasing the heap memory it already owns.


    void assign(const char* pText);

    // An equals member function accepting a String object parameter (by const reference), and a return type of bool.
    //It compares the character data of this String with the character data of the parameter String object and
    // returns true if they match, else false (the C++ string library function strcmp or strncmp can be used for the comparison).
     // equals does not change the state of 'this' so it is specified as const


    bool equals(const TString& Sobject) const;
    // passed by const referecnce to avoid copying
    // An indexOf member function accepting a char parameter, and a return type of int. 
    // It searches this String's character data for the first occurrence of the parameter character
    // and returns the position if found (first character is position 0) or -1 if not found.
    // equals does  change the state of 'this' s
 // it is const because won't modfy class it will return new TString

    int indexOf(const char& PositiondChar) const;


private:

    // First thing, maling an array of charichtar
    // This mpText is a char pointer that points to my array of chars
    // or buffers of chars
    // The class member mpText must always be assigned a pointer value obtained by calling the C++ new
    // operator to allocate a character array in the heap, and never set to point at stack.
       //  C++ delete operator is used to free the character array pointed to by mpText
       // mpText must always point to a correctly sized dynamic character array,
       // Each time a TString object is created, assigned to, etc., the memory allocated for the character
    // array must be the correct size for the text to be stored
       // Any existing dynamic memory must be released using delete to prevent memory leaks.
    char* mpText;

    // second, keep track of how big the string is by this variable.
   // length of char data (not including null char)
    int mLength;



    // pointer to dynamic char array in heap





};

#endif   // _TSTRING_H
