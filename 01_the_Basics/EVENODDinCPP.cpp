/*
 * EVENODDinCPP.cpp
 * ----------------
 * Simple C++ program to check whether an integer is even or odd.
 *
 * Purpose:
 *   - Reads one integer from standard input and prints whether the
 *     number is EVEN or ODD.
 *
 * How it works:
 *   1. Prompt the user to enter an integer.
 *   2. Read the integer using `std::cin`.
 *   3. If input fails (non-integer), print an error and exit with
 *      a non-zero status.
 *   4. Use the remainder operator (`%`) to check parity:
 *      - If `number % 2 == 0`, the number is even.
 *      - Otherwise, the number is odd.
 *   5. Print the result using `std::cout`.
 *
 * Notes:
 *   - Zero (0) is even.
 *   - Negative integers are handled correctly by the parity test.
 *
 * Compilation example (PowerShell):
 *   g++ -o EVENODDinCPP EVENODDinCPP.cpp
 *
 * Run example (PowerShell):
 *   .\EVENODDinCPP
 *   Enter a number: -3
 *   -3 is ODD
 *
 * Author: (added documentation)
 * Date:   2025-11-26
 */

#include <iostream>

int main()
{
    // Use a plain int for this simple example. For very large numbers
    // consider `long long` or arbitrary-precision libraries.
    int number;

    // Prompt the user for input.
    std::cout << "Enter a number: ";

    // Attempt to read an integer from standard input.
    // If the extraction fails (e.g. user types non-numeric text),
    // `std::cin` becomes false and we handle the error.
    if (!(std::cin >> number)) {
        std::cerr << "Error: invalid input. Please enter a valid integer." << std::endl;
        return 1; // Non-zero return indicates an error to the OS.
    }

    // Parity test: remainder of division by 2.
    // If remainder is 0 the number is even; otherwise it's odd.
    if (number % 2 == 0) {
        std::cout << number << " is EVEN" << std::endl;
    } else {
        std::cout << number << " is ODD" << std::endl;
    }

    return 0; // Success
}
