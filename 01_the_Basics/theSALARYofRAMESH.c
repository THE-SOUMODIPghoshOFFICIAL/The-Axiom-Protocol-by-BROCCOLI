/*****************************************************************************************************************************
 * PROBLEM_STATEMENT:- Ramesh’s basic salary is input through the keyboard. His dearness
 * allowance is 40% of basic salary, and house rent allowance is 20% of
 * basic salary. Write a program to calculate his gross salary.
 *
 * AUTHOR:-Soumodip ghosh  DATE&TIME:- 18octSAT 2025, 6:08AM
 * BOOK:- let us c BY Yashavant Kanetkar, 19th edition, chapter1:- getting started, Problem 1.1 (page 15)
 *****************************************************************************************************************************/

#include <stdio.h>

// Define constants for allowances to improve readability and maintainability
#define DEARNESS_ALLOWANCE_RATE 0.40
#define HOUSE_RENT_ALLOWANCE_RATE 0.20

int main(void) {
    double basic_salary, dearness_allowance, house_rent_allowance, gross_salary;

    printf("Enter the basic salary: ");

    // Use %lf for double and check if scanf was successful
    if (scanf("%lf", &basic_salary) != 1) {
        printf("Invalid input. Please enter a numeric value.\n");
        return 1; // Indicate an error
    }

    // Calculate allowances and gross salary
    dearness_allowance = DEARNESS_ALLOWANCE_RATE * basic_salary;
    house_rent_allowance = HOUSE_RENT_ALLOWANCE_RATE * basic_salary;
    gross_salary = basic_salary + dearness_allowance + house_rent_allowance;

    // Print the results with better formatting
    printf("\n--- Salary Details ---\n");
    printf("Basic Salary:         %.2f\n", basic_salary);
    printf("Dearness Allowance:   %.2f\n", dearness_allowance);
    printf("House Rent Allowance: %.2f\n", house_rent_allowance);
    printf("------------------------\n");
    printf("Gross Salary:         %.2f\n", gross_salary);

    return 0; // Indicate successful execution
}