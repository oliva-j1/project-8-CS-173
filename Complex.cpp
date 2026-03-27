//========================================================
// Nick Fogle:     (612)-749-6653
// Dante Robles:   (212)-641-0140
// Jorge Oliva     (832)-499-0715
// Ben Coverdale:  (302)-559-5133
// Complex.cpp
// March 27, 2026
// This file contains the class methods for the
// Complex number class.
//========================================================

#include "Complex.h"
#include <string.h>
#include <iostream>
#include <cmath>
using namespace std;

//========================================================
// Method name: default constructor
// Description: Creates a Complex object with real part 0
// and imaginary part 0.
// Parameters: none
// Return value: none. This constructor initializes the
// calling object to represent 0 + 0i.
//========================================================
Complex::Complex() {
    setReal(0);
    setImag(0);
}
//========================================================
// Method name: copy constructor
// Description: Creates a new Complex object as a copy of
// another Complex object.
// Parameters: other, a const Complex reference containing
// the real and imaginary values to copy.
// Return value: none. This constructor initializes the
// calling object with the same real and imaginary parts
// as the parameter object.
//========================================================
Complex::Complex(const Complex& other) {
    setReal(other.getReal());
    setImag(other.getImag());
}
//========================================================
// Method name: Complex(a,b) constructor
// Description: Creates a Complex object with the given
// real and imaginary parts.
// Parameters: real, a double representing the real part;
// imag, a double representing the imaginary part.
// Return value: none. This constructor initializes the
// calling object to represent real + imag i.
//========================================================
Complex::Complex(double real, double imag) {
    setReal(real);
    setImag(imag);
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
// Method name: operator+
// Description: Adds the calling Complex object to another
// Complex object and returns the sum.
// Parameters: other, a const Complex reference representing
// the Complex number to add.
// Return value: Complex. Returns a new Complex object whose
// real part is the sum of the two real parts and whose
// imaginary part is the sum of the two imaginary parts.
// The calling object is not changed.
//========================================================
Complex Complex::operator+(const Complex& other) const {
    Complex result;
    result.setReal(getReal() + other.getReal());
    result.setImag(getImag() + other.getImag());
    return result;
}
//========================================================
// Method name: operator-
// Description: Subtracts another Complex object from the
// calling Complex object and returns the difference.
// Parameters: other, a const Complex reference representing
// the Complex number to subtract.
// Return value: Complex. Returns a new Complex object whose
// real part is the difference of the two real parts and
// whose imaginary part is the difference of the two
// imaginary parts. The calling object is not changed.
//========================================================
Complex Complex::operator-(const Complex& other) const {
    Complex result;
    result.setReal(getReal() - other.getReal());
    result.setImag(getImag() - other.getImag());
    return result;
}
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
