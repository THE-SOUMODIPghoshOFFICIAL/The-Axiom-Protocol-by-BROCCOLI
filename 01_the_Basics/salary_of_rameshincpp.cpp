/*****************************************************************************************************************************
 * PROBLEM_STATEMENT:- Ramesh’s basic salary is input through the keyboard. His dearness
 * allowance is 40% of basic salary, and house rent allowance is 20% of
 * basic salary. Write a program to calculate his gross salary.
 *
 * AUTHOR:-Soumodip ghosh  DATE&TIME:- 18octSAT 2025, 6:08AM
 * BOOK:- let us c BY Yashavant Kanetkar, 19th edition, chapter1:- getting started, Problem 1.1 (page 15)
 *****************************************************************************************************************************/

#include <iostream>
#include <iomanip> // For std::fixed and std::setprecision

// Define constants for allowances to improve readability and maintainability
const double DEARNESS_ALLOWANCE_RATE = 0.40;
const double HOUSE_RENT_ALLOWANCE_RATE = 0.20;

int main() {
    double basic_salary, dearness_allowance, house_rent_allowance, gross_salary;

    std::cout << "Enter the basic salary: ";

    // Check if the input operation was successful
    if (!(std::cin >> basic_salary)) {
        std::cerr << "Invalid input. Please enter a numeric value.\n";
        return 1; // Indicate an error
    }

    // Calculate allowances and gross salary
    dearness_allowance = DEARNESS_ALLOWANCE_RATE * basic_salary;
    house_rent_allowance = HOUSE_RENT_ALLOWANCE_RATE * basic_salary;
    gross_salary = basic_salary + dearness_allowance + house_rent_allowance;

    // Print the results with better formatting
    std::cout << std::fixed << std::setprecision(2); // Set output to 2 decimal places
    std::cout << "\n--- Salary Details ---\n";
    std::cout << "Basic Salary:         " << basic_salary << std::endl;
    std::cout << "Dearness Allowance:   " << dearness_allowance << std::endl;
    std::cout << "House Rent Allowance: " << house_rent_allowance << std::endl;
    std::cout << "------------------------\n";
    std::cout << "Gross Salary:         " << gross_salary << std::endl;

    return 0; // Indicate successful execution
}