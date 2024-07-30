#include "Calculator.h"

// Implementing Calculator class from header ^

double Calculator::add(double a, double b) {
    return a + b; // Adds two numbers and returns the result
}

double Calculator::subtract(double a, double b) {
    return a - b; // Subtracts the second number from the first and returns the result
}

double Calculator::multiply(double a, double b) {
    return a * b; // Multiplies two numbers and returns the result
}

double Calculator::divide(double a, double b) {
    return a / b; // Divides the first number by the second and returns the result
}

int Calculator::modulus(int a, int b) {
    return a % b; // Returns the remainder of the division of the first number by the second
}

double Calculator::power(double a, double b) {
    return pow(a, b); // Raises the first number to the power of the second and returns the result
}

double Calculator::squareroot(double a) {
    return sqrt(a); // Returns the square root of the number
}

double Calculator::sine(double a) {
    return sin(a); // Returns the sine of the angle (in radians)
}

double Calculator::cosine(double a) {
    return cos(a); // Returns the cosine of the angle (in radians)
}

double Calculator::tangent(double a) {
    return tan(a); // Returns the tangent of the angle (in radians)
}

double Calculator::logarithm(double a) {
    return log(a); // Returns the natural logarithm of the number (still dont have much of a clue how to use this)
}

double Calculator::exponential(double a) {
    return exp(a); // Returns the exponential of the number
}
