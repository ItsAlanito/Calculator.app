#include <iostream>
#include <fstream> // Including fstream for file operations, like outputting to the text file
#include <string>
#include "Calculator.h"

using namespace std;

// Function to save the result to a text file
void saveResult(const string& result) {
    ofstream outFile("calculator_history.txt", ios::app); // Open txt.file , saves the result only
    if (outFile.is_open()) {
        outFile << result << endl; // Write result to file
        outFile.close(); // Close the file
    }
    else {
        cout << "Unable to open file to save the result" << endl; // Error message if file cannot be opened
    }
}

int main() {
    Calculator calc; 
    double n1, n2; // Variables for storing input numbers
    char operations; // Variable for storing user input operation choice
    bool runn = true; // Boolean to control the while loop for continuous calculations

    // Loop to allow multiple calculations
    while (runn) {
        // Display a border and prompt the user to enter the first number
        cout << "A*********************R\n";
        cout << "Enter the 1st number: ";
        cin >> n1;

        // Prompt the user to enter an operation
        cout << "Enter an operator (+, -, *, /, %, ^, s, S, c, t, l, e): ";
        cin >> operations;

        string result; // Variable to store the result string

        // Handle operations that require only one operand
        if (operations == 's') {
            if (n1 >= 0) {
                result = "Result: " + to_string(calc.squareroot(n1)); //to_string is converting this into a string
                cout << result << endl; // Calculates square root
            }
            else {
                result = "No Negative numbers allowed";
                cout << result << endl; // Error message for negative input
            }
        }
        else if (operations == 'S') {
            result = "Result: " + to_string(calc.sine(n1));
            cout << result << endl; // Calculates sine
        }
        else if (operations == 'c') {
            result = "Result: " + to_string(calc.cosine(n1));
            cout << result << endl; // Calculates cosine
        }
        else if (operations == 't') {
            result = "Result: " + to_string(calc.tangent(n1));
            cout << result << endl; // Calculates tangent
        }
        else if (operations == 'l') {
            if (n1 > 0) {
                result = "Result: " + to_string(calc.logarithm(n1));
                cout << result << endl; // Calculates logarithm
            }
            else {
                result = "Logarithm undefined for non-positive numbers";
                cout << result << endl; // Error message for neg input
            }
        }
        else if (operations == 'e') {
            result = "Result: " + to_string(calc.exponential(n1));
            cout << result << endl; // Calculates exponential
        }
        else {
            // For other operations, prompt the user to enter a second number
            cout << "Enter the 2nd number: ";
            cin >> n2;

            // Using switch case for chosen user operation handling
            switch (operations) {
            case '+':
                result = "Result: " + to_string(calc.add(n1, n2)); 
                cout << result << endl; // Calculates addition
                break;
            case '-':
                result = "Result: " + to_string(calc.subtract(n1, n2));
                cout << result << endl; // Calculates subtraction
                break;
            case '*':
                result = "Result: " + to_string(calc.multiply(n1, n2));
                cout << result << endl; // Calculates multiplication
                break;
            case '/':
                if (n2 != 0) {
                    result = "Result: " + to_string(calc.divide(n1, n2));
                    cout << result << endl; // Calculates division
                }
                else {
                    result = "Cannot divide by 0";
                    cout << result << endl; // Error message for division by zero (program bugs out with zeros not sure why)
                }
                break;
            case '%':
                if (static_cast<int>(n2) != 0) {
                    result = "Result: " + to_string(calc.modulus(static_cast<int>(n1), static_cast<int>(n2))); //using static_cast to convert from double to float or int
                    cout << result << endl; // Calculates modulus
                }
                else {
                    result = "Cannot use 0 0";
                    cout << result << endl; // Error message for modulus by zero
                }
                break;
            case '^':
                result = "Result: " + to_string(calc.power(n1, n2));
                cout << result << endl; // Calculates power
                break;
            default:
                result = "Error: a valid operator wasn't chosen";
                cout << result << endl; // Error message for invalid operator
            }
        }

        // Save the result to the text file
        saveResult(result);

        // Ask the user if they want to perform another calculation
        char doMore;
        cout << "Another calculation? (y/n): ";
        cin >> doMore;
        if (doMore == 'n' || doMore == 'N') {
            runn = false; // Exit the loop if the user chooses 'n'
        }
    }

    return 0;
}
