//========================================================
// Ben Coverdale, Jorge Oliva, Nick Fogle, Dante Robles
// March 27, 2026
// Complex.cpp
// This file implements the Complex class, which represents
// complex numbers of the form a + bi. It provides constructors,
// accessor and mutator methods, overloaded arithmetic operators
// (+, -, *, /, ^), comparison operators, and input/output stream
// operators. The class supports operations between Complex
// objects as well as interactions with integers and doubles,
// allowing for flexible mathematical manipulation of complex
// numbers.
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
// Method name: destructor
// Description: Destroys the Complex object. No dynamic
// memory is used, so no special cleanup is required.
// Parameters: none
// Return value: none. The calling object is destroyed.
//========================================================
Complex::~Complex(){
}


//========================================================
// setReal access method
//========================================================
//========================================================
// Method name: setReal
// Description: Sets the real part of the Complex number.
// Parameters: realnum, a double representing the new real value.
// Return value: void. The calling object is modified (hidden return).
//========================================================
void Complex::setReal(double realnum){
    a = realnum;
}


//========================================================
// getReal access method
//========================================================
//========================================================
// Method name: getReal
// Description: Retrieves the real part of the Complex number.
// Parameters: none
// Return value: double. Returns the real component. The calling
// object is not modified.
//========================================================
double Complex::getReal() const{
    return a;
}


//========================================================
// setImag
//========================================================
//========================================================
// Method name: setImag
// Description: Sets the imaginary part of the Complex number.
// Parameters: imagnum, a double representing the new imaginary value.
// Return value: void. The calling object is modified (hidden return).
//========================================================
void Complex::setImag(double imagnum){
    b = imagnum;
}


//========================================================
// getImag
//========================================================
//========================================================
// Method name: getImag
// Description: Retrieves the imaginary part of the Complex number.
// Parameters: none
// Return value: double. Returns the imaginary component. The calling
// object is not modified.
//========================================================
double Complex::getImag() const{
    return b;
}
//========================================================
// assignment operator
//========================================================
//========================================================
// Method name: operator=
// Description: Assigns the values of another Complex object
// to the calling object.
// Parameters: c, a const Complex reference containing values to copy.
// Return value: Complex. Returns the updated calling object.
// The calling object is modified (hidden return).
//========================================================
Complex Complex::operator=(const Complex& c){
    // Check for self-assignment (e.g., x = x)
    // Makes sure that it is not copying onto itself
    if(this != &c){
        // Copy the real part from the right-hand object (c)
        a = c.a;

        // Copy the imaginary part from the right-hand object (c)
        b = c.b;
    }

    // Return the current object by value
    // *this refers to the calling object (left-hand side of assignment)
    return *this;
}


//========================================================
// Addition Operators
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
    Complex sum;
    sum.setReal(getReal() + other.getReal());
    sum.setImag(getImag() + other.getImag());
    return sum;
}

//========================================================
// Method name: operator+ (Complex + int)
// Description: Adds an integer to the real part of the Complex number.
// Parameters: integer, an int value.
// Return value: Complex. Returns a new Complex object.
// The calling object is not modified.
//========================================================
Complex Complex::operator+(int integer) const{
    Complex sum;
    sum.setReal(getReal() + integer);
    sum.setImag(getImag()); // Imaginary part does not change
    return sum;
}

//========================================================
// Method name: operator+ (Complex + double)
// Description: Adds a double to the real part of the Complex number.
// Parameters: doublenum, a double value.
// Return value: Complex. Returns a new Complex object.
// The calling object is not modified.
//========================================================
Complex Complex::operator+(double doublenum) const{
    Complex sum;
    sum.setReal(getReal() + doublenum);
    sum.setImag(getImag()); // Imaginary part does not change
    return sum;
}

//========================================================
// Subtraction Operators
//========================================================

//========================================================
// Method name: Complex by Complex subtraction
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
    Complex difference;
    difference.setReal(getReal() - other.getReal());
    difference.setImag(getImag() - other.getImag());
    return difference;
}

//========================================================
// Method name: operator- (Complex - int)
// Description: Subtracts an integer from the real part of the Complex number.
// Parameters: integer, an int value.
// Return value: Complex. Returns a new Complex object.
// The calling object is not modified.
//========================================================
Complex Complex::operator-(int integer) const{
    Complex difference;
    difference.setReal(getReal() - integer);
    difference.setImag(getImag()); // Imaginary part does not change
    return difference;
}

//========================================================
// Method name: operator- (Complex - double)
// Description: Subtracts a double from the real part of the Complex number.
// Parameters: doublenum, a double value.
// Return value: Complex. Returns a new Complex object.
// The calling object is not modified.
//========================================================
Complex Complex::operator-(double doublenum) const{
    Complex difference;
    difference.setReal(getReal() - doublenum);
    difference.setImag(getImag()); // Imaginary part does not change
    return difference;
}

//========================================================
// Method name: operator- (unary)
// Description: Negates both the real and imaginary parts
// of the Complex number.
// Parameters: none
// Return value: Complex. Returns a new negated Complex object.
// The calling object is not modified.
//========================================================
Complex Complex::operator-() const{
    double a = getReal();
    double b = getImag();
    Complex flipped;
    flipped.setReal(getReal()*(-1));
    flipped.setImag(getImag()*(-1));
    if (a==0){
        flipped.setReal(0);
    }
    if (b==0){
        flipped.setImag(0);
    }
    return flipped;
}


//========================================================
// multiplication operators
//========================================================
//========================================================
// Method name: operator* (Complex * Complex)
// Description: Multiplies the calling Complex object by
// another Complex object using the formula
// (a+bi)(c+di) = (ac - bd) + (ad + bc)i.
// Parameters: other, a const Complex reference representing
// the Complex number to multiply.
// Return value: Complex. Returns a new Complex object
// representing the product. The calling object is not modified.
//========================================================
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

//========================================================
// Method name: operator* (Complex * int)
// Description: Multiplies the Complex number by an integer.
// Parameters: integer, an int value.
// Return value: Complex. Returns a new scaled Complex object.
// The calling object is not modified.
//========================================================
Complex Complex::operator*(int integer) const {
    // integer*complex number (a+bi) = int*a+(int*b)i
    // Initialize result object, calculate, and assign values
    Complex integerProduct;
    integerProduct.setReal(getReal()*integer);
    integerProduct.setImag(getImag()*integer);
    return integerProduct;
}

//========================================================
// Method name: operator* (Complex * double)
// Description: Multiplies the Complex number by a double.
// Parameters: doublenum, a double value.
// Return value: Complex. Returns a new scaled Complex object.
// The calling object is not modified.
//========================================================
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
//========================================================
// Method name: operator/ (Complex / Complex)
// Description: Divides the calling Complex number by another
// Complex number using standard complex division.
// Parameters: other, a const Complex reference.
// Return value: Complex. Returns the quotient.
// If division by zero occurs, returns (0,0).
// The calling object is not modified.
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
// Method name: operator/ (Complex / int)
// Description: Divides both parts of the Complex number by an integer.
// Parameters: integer, an int value (should not be 0).
// Return value: Complex. Returns a new Complex object.
// The calling object is not modified.
//========================================================
Complex Complex::operator/(int integer) const{
    double a = getReal();
    double b = getImag();
    // Divide both parts by integer
    Complex quotient; // Initialize quotient object
    quotient.setReal(a/integer);
    quotient.setImag(b/integer);
    return quotient;

}

//========================================================
// Method name: operator/ (Complex / double)
// Description: Divides both parts of the Complex number by a double.
// Parameters: doublenum, a double value (should not be 0).
// Return value: Complex. Returns a new Complex object.
// The calling object is not modified.
//========================================================
Complex Complex::operator/(double doublenum) const{
    double a = getReal();
    double b = getImag();
    // Initialize quotient object
    Complex quotient;
    // Divide real and imaginary parts by doublenum and assign to quotient object
    quotient.setReal(a/doublenum);
    quotient.setImag(b/doublenum);
    // Return quotient object
    return quotient;

}


//========================================================
// exponentiation
//========================================================
//========================================================
// Method name: operator^
// Description: Raises the Complex number to an integer power
// using polar form.
// Parameters: exponum, an int exponent.
// Return value: Complex. Returns the powered Complex number.
// The calling object is not modified.
//========================================================
Complex Complex::operator^(int exponum) const{
    double magnitude = std::sqrt((getReal()*getReal()) + (getImag()*getImag()));
    double angle = std::atan2(getImag(), getReal());
    double magnitudePowered = std::pow(magnitude, exponum);
    // Initialize Complex object
    Complex power;
    // Formula r^n(cos(n*theta) + isin(n*theta)), Calculate and assign to power object
    power.setReal(magnitudePowered * std::cos(exponum * angle));
    power.setImag(magnitudePowered * std::sin(exponum * angle));
    return power;
}


//========================================================
// operator~
//========================================================
//========================================================
// Method name: operator~
// Description: Returns the complex conjugate (a - bi).
// Parameters: none
// Return value: Complex. Returns a new conjugate object.
// The calling object is not modified.
//========================================================
Complex Complex::operator~() const{
    Complex conjugate;
    conjugate.setReal(getReal());
    conjugate.setImag(getImag()*-1);
    return conjugate;
}


//========================================================
// abs
//========================================================
//========================================================
// Method name: abs
// Description: Computes the magnitude of the Complex number.
// Parameters: none
// Return value: double. Returns sqrt(a^2 + b^2).
// The calling object is not modified.
//========================================================
double Complex::abs() const{
    return std::sqrt((a*a)+(b*b)); // Formula sqrt(a^2 + b^2)
}


//========================================================
// equality operator
//========================================================
//========================================================
// Method name: operator==
// Description: Checks if two Complex numbers are equal.
// Parameters: c, a const Complex reference.
// Return value: bool. Returns true if both real and imaginary
// parts match, otherwise false.
//========================================================
bool Complex::operator==(const Complex& c) const{
    if(getReal()==c.getReal() && getImag()==c.getImag()){
        return true;
    }

    else{
        return false;
    }
}


//========================================================
// inequality operator
//========================================================
//========================================================
// Method name: operator!=
// Description: Checks if two Complex numbers are not equal.
// Parameters: c, a const Complex reference.
// Return value: bool. Returns true if values differ.
//========================================================
bool Complex::operator!=(const Complex& c) const{
    if(getReal()==c.getReal() && getImag()==c.getImag()){
        return false;
    }

    else{
        return true;
    }
}


//========================================================
// overload >> for cin
//========================================================
// Method name: Input operator (operator>>)
// Description: Reads a complex number from an input stream
// in string form (for example: "a+bi", "a-bi", "bi", "a",
// "i", "-i", or forms like "2+-i") and parses it into
// real and imaginary components.
// Parameters:
//   inputStream - reference to an input stream (istream&)
//                 used to read user input.
//   complexNum  - reference to a Complex object (Complex&)
//                 that will be modified to store the
//                 parsed real and imaginary values.
// Return value:
//   Returns the input stream (istream&) to allow chaining
//   of input operations. The Complex object complexNum is
//   modified directly through the reference parameter.
//========================================================
istream& operator>>(istream& inputStream, Complex& complexNum){
    string inputString;
    inputStream >> inputString;

    // Handle special cases: i, +i, -i
    if(inputString == "i" || inputString == "+i"){
        complexNum.setReal(0);
        complexNum.setImag(1);
        return inputStream;
    }
    else if(inputString == "-i"){
        complexNum.setReal(0);
        complexNum.setImag(-1);
        return inputStream;
    }

    // If the input contains i, it has an imaginary part
    if(inputString.find('i') != string::npos){
        inputString.pop_back();   // Remove trailing 'i'

        // Find separator between real and imaginary parts
        // Start at index 1 so a leading sign is not mistaken
        // for the separator.
        int separatorIndex = -1;
        for(int currentIndex = 1; currentIndex < inputString.length(); currentIndex++){
            if(inputString[currentIndex] == '+' || inputString[currentIndex] == '-'){
                separatorIndex = currentIndex;
                break;
            }
        }

        // No separator means the value is purely imaginary
        if(separatorIndex == -1){
            if(inputString == "+"){
                complexNum.setReal(0);
                complexNum.setImag(1);
            }
            else if(inputString == "-"){
                complexNum.setReal(0);
                complexNum.setImag(-1);
            }
            else{
                complexNum.setReal(0);
                complexNum.setImag(stod(inputString));
            }
        }
        // Separator found, so split into real and imaginary parts
        else{
            string realString = inputString.substr(0, separatorIndex);
            string imagString = inputString.substr(separatorIndex);

            double realPart = stod(realString);
            double imaginaryPart;

            if(imagString == "+" || imagString == "++"){
                imaginaryPart = 1;
            }
            else if(imagString == "-" || imagString == "+-"){
                imaginaryPart = -1;
            }
            else if(imagString == "--"){
                imaginaryPart = 1;
            }
            else{
                imaginaryPart = stod(imagString);
            }

            complexNum.setReal(realPart);
            complexNum.setImag(imaginaryPart);
        }
    }
    // No i means the value is purely real
    else{
        complexNum.setReal(stod(inputString));
        complexNum.setImag(0);
    }

    return inputStream;
}


//========================================================
// overload << for cout
//========================================================
//========================================================
// Method name: operator<<
// Description: Outputs a Complex number in standard form
// (a+bi, a-bi, i, etc.).
// Parameters:
//   os - reference to an output stream (ostream&)
//   c  - const Complex reference to output
// Return value: ostream&. Returns the stream to allow chaining.
// The Complex object is not modified.
//========================================================
ostream& operator<<(ostream& os, const Complex& c){
    if(c.getReal()==0 && c.getImag()==0){ // If a and b are 0 output "0"
        os << "0";
    }
    else if(c.getReal()!=0 && c.getImag()==0){ // If a is only value output a
        os << c.getReal();
    }
    else if(c.getReal()==0 && c.getImag()!=0){ // If b is the only value output b
        if(c.getImag()==1){
            os << "i";
        }
        else if(c.getImag()==-1){
            os << "-i";
        }
        else{
            os << c.getImag() << "i";
        }
    }
    else if(c.getReal()!=0 && c.getImag()<0){ // If b is negative trigger further processing
        if(c.getImag()==-1){ // if b equals -1 print a-i
            os << c.getReal() << "-i";
        }
        else{
            os << c.getReal() << c.getImag() << "i"; // If b is negative but not -1 print negative sign
        }
    }
    else if(c.getImag()==1){ // If a exists and b equals one print a+i
        os << c.getReal() << "+" << "i";
    }

    else{
        os << c.getReal() << "+" << c.getImag() << "i"; // Default condition a+bi
    }
    
    return os;
    }


//========================================================
// References
// Khan Academy. "Complex Numbers (Part 1)"
// https://www.youtube.com/watch?v=kpywdu1afas
//
// Khan Academy. "Complex Numbers (Part 2)"
// https://www.youtube.com/watch?v=bPqB9a1uk_8
//
// C++ Reference. "atan2 - Arctangent of y/x"
// https://en.cppreference.com/w/cpp/numeric/math/atan2
//========================================================