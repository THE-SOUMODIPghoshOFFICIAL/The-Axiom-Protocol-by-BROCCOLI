/*  Problem 1.2
 The distance between two cities (in kilometers) is input through the
 keyboard. Write a program to convert and print this distance in meters,
 feet, inches and centimeters. */

#include <iostream>
#include <iomanip> // For std::fixed and std::setprecision

// Define conversion factors as constants for clarity and maintainability
const double METERS_PER_KM = 1000.0;
const double CM_PER_METER = 100.0;
const double CM_PER_INCH = 2.54;
const double INCHES_PER_FOOT = 12.0;

int main() {
    double km, m, cm, ft, inch;

    std::cout << "Enter the distance in Kilometers: ";

    // Read the input and validate that it's a number
    if (!(std::cin >> km)) {
        std::cerr << "Invalid input. Please enter a numeric value.\n";
        return 1; // Exit with an error code
    }

    // Perform the conversions
    m = km * METERS_PER_KM;
    cm = m * CM_PER_METER;
    inch = cm / CM_PER_INCH;
    ft = inch / INCHES_PER_FOOT;

    // Set output precision for floating-point numbers
    std::cout << std::fixed << std::setprecision(2);

    // Print the results
    std::cout << "\nDistance in meters     = " << m << std::endl;
    std::cout << "Distance in centimeters = " << cm << std::endl;
    std::cout << "Distance in feet        = " << ft << std::endl;
    std::cout << "Distance in inches      = " << inch << std::endl;

    return 0; // Indicate successful execution
}