/**************************************************************************
PROBLEM STATEMENT:- Temperature of a city in Fahrenheit degrees is input through the 
keyboard. Write a program to convert this temperature into 
Centigrade degrees. 
(C++ Version)
**********************************************************************************/

// Include necessary C++ standard libraries
#include <iostream>   // For standard C++ input/output operations (cout, cin)
#include <string>     // For using the std::string class
#include <sstream>    // For using std::stringstream to parse strings
#include <iomanip>    // For output formatting (like setting decimal precision)

// This line allows us to use names like "cout" and "cin" directly
// without having to write "std::cout" or "std::cin" every time.
using namespace std;

/**
 * @brief Converts a temperature from Fahrenheit to Centigrade.
 * @param f The temperature in Fahrenheit.
 * @return The equivalent temperature in Centigrade.
 */
double f_to_c(double f) {
    // Apply the conversion formula: C = (F - 32) * 5 / 9
    return (f - 32.0) * 5.0 / 9.0;
}

// The 'main' function is the entry point for every C++ program.
int main(void) {
    // Declare a variable 'fahrenheit' of type 'double' to store the temperature.
    double fahrenheit;
    
    // Declare a variable 'input_line' of type 'string' to store the user's raw input.
    string input_line;

    // Print a prompt to the console asking the user for input.
    // 'cout' is the C++ standard output stream (the console).
    // 'endl' inserts a newline character and flushes the output buffer.
    cout << "ENTER YOUR TEMPERATURE IN FAHRENHEIT (e.g. 98.6): ";

    // Read an entire line of text from the standard input (keyboard)
    // and store it in the 'input_line' string variable.
    if (!getline(cin, input_line)) {
        // If 'getline' fails (e.g., user presses Ctrl+D/Ctrl+Z for end-of-file),
        // print an error message to the standard error stream 'cerr'.
        cerr << "No input received. Exiting." << endl;
        // Return 1 from 'main' to indicate that the program exited with an error.
        return 1;
    }

    // Create a 'stringstream' object named 'ss' initialized with the user's input.
    // A stringstream allows us to "read" from a string just like we "read" from 'cin'.
    stringstream ss(input_line);

    // Try to extract a 'double' value from the stringstream 'ss'
    // and store it in the 'fahrenheit' variable.
    // If the input doesn't start with a valid number (e.g., "abc"), 
    // the 'fail' state of the stream will be set.
    if (!(ss >> fahrenheit)) {
        // The extraction failed. The input was not a valid number.
        // Print an error message to 'cerr'.
        cerr << "Invalid number: '" << input_line << "'" << endl;
        // Return 1 to indicate an error.
        return 1;
    }

    // After extracting the number, we check if there is any non-whitespace
    // text left in the string.
    
    // 'ss >> ws' attempts to "eat" any and all trailing whitespace (spaces, tabs).
    ss >> ws; 
    
    // 'ss.eof()' checks if we are at the "end of file" (end of the string).
    // If we are NOT at the end (!ss.eof()), it means there was extra
    // text after the number and whitespace (e.g., "98.6 abc").
    if (!ss.eof()) {
        // The input is invalid because it has extra characters.
        cerr << "Invalid number format (extra characters): '" << input_line << "'" << endl;
        // Return 1 to indicate an error.
        return 1;
    }

    // At this point, the input is a valid double.
    
    // 'fixed' tells 'cout' to use fixed-point notation (not scientific).
    // 'setprecision(2)' tells 'cout' to print 2 digits after the decimal point.
    // This formatting applies to all 'cout' statements from now on.
    cout << fixed << setprecision(2);

    // Print the valid temperature the user entered.
    cout << "YOU HAVE JUST ENTERED: " << fahrenheit << " °F" << endl;
    
    // Call the 'f_to_c' function with the fahrenheit temperature
    // and print the resulting Centigrade temperature.
    cout << "YOUR TEMPERATURE IN CENTIGRADE IS: " << f_to_c(fahrenheit) << " °C" << endl;
    
    // Return 0 from 'main' to indicate the program ran successfully.
    return 0;
}
