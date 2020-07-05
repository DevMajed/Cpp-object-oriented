//
//  String.cpp
//  Assignment 3 Majed
//
//  Created by Majed Alharbi on 7/4/20.
//  Copyright © 2020 Majed Alharbi. All rights reserved.
#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include "TString.h"

// A constructor accepting a const char pointer to an array of characters,
// with a default argument value of 0 (null pointer).

// If a null pointer or empty string (char array of length 1 containing a '\0' null char)
// is passed, it initializes this String object to point at a dynamically allocated character array of length 1 
// (containing the null char value '\0') in the heap.

// Otherwise, it dynamically allocates a char array of the same size as the parameter char array,
// and copies the parameter char data into it. Note that this is a deep copy (ie. copying all the char data)
// so that this object has it's own copy of the char data, vs. a shallow copy
// (just copying the pointer value to the parameter's char data).

TString::TString(const char* pText) 

{


  


    if (pText == 0)

    {
        mLength;
        mLength = 0;
        mpText = new char[mLength + 1];
        mpText[mLength] = '\0';
    }

    else
    {
        // first thing is to calculate how long the string is so we can copy the data from the string (pText) to our buffer (mpText.)

        mLength = strlen(pText);

        // now i know how big our buffer should be, i allocate memory in the heap for it, and add + for the null termnator
        mpText = new char[mLength + 1];

        // Next i will copy i will copy my string pText into my buffer mpText.
        strcpy(mpText,  pText);
    }


}

// A copy constructor accepting a String object (by const reference). It initializes this
// String from the parameter String object, making a deep copy of the character data by dynamically
// allocating a char array of the same size as the parameter String's, and copying the char data.

// We need this constructor because if we just copy regulary in main like string majed = oldstring, 
// it will crash because when we copy the string C++ takes th members we have in class, length and mpText,
// and copy them in new memory adress contain string majed.
// the problem is that this is a dircet or sholow copy, this means the memory afress for both majed
// and mpText is the same and later when we use descturcotr we try to free the memory twice and we get crash.
// we are copyying the pointer so both poin to exact buffer of memory. deleting one delete the other.
// To solve the problem, we will allocate a new char array to store the coppied string .. By making 
// (( Deep Copy ))
// So here is the copy constructur and it will be called to that second new string when we copy it

// a constructur that take a const ref to the same class
// this will take the memory of (Sobject) to copy it to into the class members.
//
TString::TString(const TString& Sobject)
    : mLength(Sobject.mLength) // i shollow copy that because it is integer
{
    // here allocate a new buffer with the correct size so we don't use the same pointer as the old one.
    mpText = new char[mLength + 1];
    // here we copy from Sobject buffer into the buffer mpText of the string class
    strcpy(mpText, Sobject.mpText);

    // That is, Deep copy
    // To test, write in the main
    // string Majed = "A good Engineer"
    // string William = Majed.
    // Test modifying one string not the other, and see if both change mean something wrong.
    // No crash
    // pass by reffrance if we maky pring function instead of printing in main because
    // if that function oly has stdout string and then we use it in main eacy time we call it we
    // creat new memory in the heap and then we copy it and use which waste memory, instead we can make
    //it calling by reffrance, which mean passing the existing string to that function.
    // and also make it const ref because it won't edit anything.
    // so always pass by reff is better.

  
}



// To avoid memory leaking because we used (new) and we got place in heap memory.
TString:: ~TString()
{
    delete[] mpText;
};





// A length member function returning the current size of the character data (not including the final null character).

int TString::length() const
{
    return mLength;
}




// An asChar member function returning a const char pointer to this String's encapsulate
// character data. It does not allocate new memory for the char data to be returned.



const char* TString::asChar() const
{
    return mpText;
}




// An assign member function accepting a String object parameter (by const reference), and a return type of void.
// It first checks for assignment to self and returns if true.
// Otherwise, it uses delete to  release the current char array it points to,
// then dynamcally allocates a new char array of the same size as the parameter String's,
// and copies the character data from the parameter String.


void TString::assign(const TString& Sobject)
{
    if (this == &Sobject)
    {
        return;
    }
    else
    {
        delete mpText;
        mLength = (Sobject.mLength);
        mpText = new char[mLength + 1];
        strcpy(mpText, Sobject.mpText);

        // i am using the dot here to acess the mpText that is in Sobject, and same with length.
    }
}



// An assign member function accepting a const char pointer to an array of characters, and a return type of void.
// It checks for assignment to self, and returns if true. // Otherwise,
// it uses delete to  release the current char array it points to,
// then dynamcally allocates a new char array of the same size as the parameter String's,
//and copies the character data from the parameter String.

void TString::assign(const char* pText)

{
    if (mpText == pText)
    {
        return;
    }

    else
    {
        delete mpText;
        mLength = strlen(pText);
        mpText = new char[mLength + 1];
        strcpy(mpText, pText);

        strcpy(mpText, mpText);


    }

}


// An equals member function accepting a String object parameter 
// (by const reference), and a return type of bool.
// It compares the character data of this String with the character data of the
// parameter String object and returns true if they match, else false (the C++ string library function strcmp or 
//trncmp can be used for the comparison).

bool TString::equals(const TString& Sobject) const
{
    // The dot because spassing by ref ..
    if (strcmp(mpText, Sobject.mpText) == 0)
    {
        return true;

    }
    else
        return false;

}



// An indexOf member function accepting a char parameter, and a return type of int. 
//It searches this String's character data for the first occurrence of the parameter character and returns
//the position if found (first character is position 0) or -1 if not found.

int TString::indexOf(const char& PositiondChar) const
{

    for (int i = 0; i < mLength; i++)
    {

        if (mpText[i] == PositiondChar)
        {
            return i;
        }

    }
    return -1;

}
