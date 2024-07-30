#ifndef CALCULATOR_H // Checks if CALCULATOR_H is not defined
#define CALCULATOR_H

#include <iostream>
#include <cmath> // Including cmath for math functions

using namespace std;

// Calculator class declaration
// This class contains methods for various mathematical operations
class Calculator {
public:
    double add(double a, double b);         // adds two numbers
    double subtract(double a, double b);    // subtracts one number from another
    double multiply(double a, double b);    // multiples two numbers
    double divide(double a, double b);      // divides one number by another
    int modulus(int a, int b);              // finds the modulus of two numbers
    double power(double a, double b);       // raise one number to the power of another
    double squareroot(double a);            // finds the square root of a number
    double sine(double a);                  // finds the sine of an angle
    double cosine(double a);                // finds the cosine of an angle
    double tangent(double a);               // finds the tangent of an angle
    double logarithm(double a);             // finds the natural logarithm of a number
    double exponential(double a);           // finds the exponential of a number
};

#endif
