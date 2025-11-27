
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
