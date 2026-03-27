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
Complex::~Complex(){
}
//========================================================
// setReal access method
//========================================================
void Complex::setReal(double realnum){
    a = realnum;
}
//========================================================
// getReal access method
//========================================================
double Complex::getReal() const{
    return a;
}
//========================================================
// setImag
//========================================================
void Complex::setImag(double imagnum){
    b = imagnum;
}
//========================================================
// getImag
//========================================================
double Complex::getImag() const{
    return b;
}
//========================================================
// assignment operator
//========================================================
Complex Complex::operator=(const Complex& c){
    if(this != &c){
        a = c.a;
        b = c.b;
    }
    return *this;
}
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
// Multiplying two complex numbers:
Complex Complex::operator*(const Complex& other) const {
    // Complex number multiplication: (a+bi)*(c+di) = (ac-bd) + (ad+bc)i
    // Fetch a, b, c, d values
    double a = getReal();
    double b = getImag();
    double c = other.getReal();
    double d = other.getImag();
    // Perform math to find product
    double realPart = (a*c) - (b*d);
    double imagPart = (a*d) + (b*c);
    // Initialize result object and assign calculated values
    Complex product;
    product.setReal(realPart);
    product.setImag(imagPart);
    // Return product
    return product;
}
// Multiplying a complex number by a integer:
Complex Complex::operator*(int integer) const {
    // integer*complex number (a+bi) = int*a+(int*b)i
    // Initialize result object, calculate, and assign values
    Complex integerProduct;
    integerProduct.setReal(getReal()*integer);
    integerProduct.setImag(getImag()*integer);
    return integerProduct;
}
// Multiplying a complex number by a double:
Complex Complex::operator*(double doublenum) const {
    // double*complex number (a+bi) = double*a + (double*b)i
    //Initialize result object, calculate, and assign values
    Complex doubleProduct;
    doubleProduct.setReal(getReal()*doublenum);
    doubleProduct.setImag(getImag()*doublenum);
    return doubleProduct;
}
//========================================================
// division operators
//========================================================
Complex Complex::operator/(const Complex& other) const {
    // Complex number division: real part: (ac + bd)/(c^2 + d^2) | imaginary part: (bc - ad)/(c^2 + d^2)
    // Fetch a, b, c, d values
    double a = getReal();
    double b = getImag();
    double c = other.getReal();
    double d = other.getImag();
    // Calculate denominator (c^2 + d^2)
    double denom = (c*c) + (d*d);
    // If dividing by 0 return the default (0,0) vector
    if(denom == 0){
        return Complex();
    }
    // Calculate real part of the quotient
    double realPart = ((a*c) + (b*d)) / denom;
    // Calculate imaginary part of the quotient
    double imagPart = ((b*c) - (a*d)) / denom;
    // Initalize result object and assign calculated values
    Complex quotient;
    quotient.setReal(realPart);
    quotient.setImag(imagPart);
    // Return quotient
    return quotient;
}
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
ostream& operator<<(ostream& os, const Complex& c){
    os << c.getReal() << "+" << c.getImag() << "i";
    return os;
}