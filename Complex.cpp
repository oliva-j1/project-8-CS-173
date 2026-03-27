//========================================================
// put all group names here
// Complex.cpp
// Spring 2026
// This file contains the class methods for the
// Complex number class.
//========================================================

#include "Complex.h"
#include <string.h>
#include <iostream>
#include <cmath>
using namespace std;

//========================================================
// default constructor
//========================================================
    void defaultConstructor(){
        Complex c;
        c.setReal(0);
        c.setImag(0);
    }
//========================================================
// copy constructor
//========================================================
    void copyConstructor(const Complex& c){
       // Fetches real and imaginary number from existing complex number
        realnum = c.getReal;
        imagnum = c.getImag;
        // This part copies the fetched values to the new complex number
        Complex newC;
        newC.setReal(realnum);
        newC.setImag(imagnum);

    }
//========================================================
// Complex(a,b) constructor
//========================================================
    void complexConstructor(double real, double imag){
        Complex c;
        c.setReal(real);
        c.setImag(imag);
    }
//========================================================
// destructor
//========================================================

//========================================================
// setReal access method
//========================================================

//========================================================
// getReal access method
//========================================================

//========================================================
// setImag
//========================================================

//========================================================
// getImag
//========================================================

//========================================================
// assignment operator
//========================================================

//========================================================
// addition operators
//========================================================
    void additionOperators(Complex& c1, Complex& c2){
        // Fetch real and imaginary numbers from c1
        double realnum1 = c1.getReal();
        double imagnum1 = c1.getImag();
        // Fetch real and imaginary numbers from c2
        double realnum2 = c2.getReal();
        double imagnum2 = c2.GetImag();
        // Add real numbers
        double realsum = realnum1 + realnum2;
        // Add imaginary numbers
        double imagsum = imagnum1 + imagnum2;
        // Create sum structure
        Complex sum
        sum.setReal(realsum);
        sum.setImag(imagsum);
    }
//========================================================
// subtraction operators
//========================================================

//========================================================
// multiplication operators
//========================================================

//========================================================
// division operators
//========================================================

//========================================================
// exponentiation
//========================================================

//========================================================
// operator~
//========================================================

//========================================================
// abs
//========================================================

//========================================================
// equality operator
//========================================================

//========================================================
// inequality operator
//========================================================

//========================================================
// overload >> for cin
//========================================================

//========================================================
// overload << for cout
//========================================================
