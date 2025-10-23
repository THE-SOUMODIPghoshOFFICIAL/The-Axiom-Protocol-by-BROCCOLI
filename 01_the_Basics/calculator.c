//author : jiku, 19 july,2023

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Define some constants for the operations
#define ADD 1
#define SUB 2
#define MUL 3
#define DIV 4

// Define a struct to store the operands and the operation
typedef struct {
    double x; // The first operand
    double y; // The second operand
    int op; // The operation code
} expression;

// A function to parse the input and create an expression
expression parse_input(char *input) {
    expression exp; // The expression to return
    char *endptr; // A pointer to store the end of the parsed string

    // Parse the first operand
    exp.x = strtod(input, &endptr);

    // Check if the parsing was successful
    if (endptr == input) {
        // No valid operand was found
        printf("Invalid input: %s\n", input);
        exit(EXIT_FAILURE);
    }

    // Skip any whitespace after the first operand
    while (*endptr == ' ' || *endptr == '\t') {
        endptr++;
    }

    // Parse the operation
    switch (*endptr) {
        case '+':
            exp.op = ADD;
            break;
        case '-':
            exp.op = SUB;
            break;
        case '*':
            exp.op = MUL;
            break;
        case '/':
            exp.op = DIV;
            break;
        default:
            // No valid operation was found
            printf("Invalid operation: %c\n", *endptr);
            exit(EXIT_FAILURE);
    }

    // Move to the next character after the operation
    endptr++;

    // Skip any whitespace after the operation
    while (*endptr == ' ' || *endptr == '\t') {
        endptr++;
    }

    // Parse the second operand
    exp.y = strtod(endptr, &endptr);

    // Check if the parsing was successful
    if (endptr == input) {
        // No valid operand was found
        printf("Invalid input: %s\n", input);
        exit(EXIT_FAILURE);
    }

    // Return the expression
    return exp;
}

// A function to evaluate an expression and return the result
double evaluate(expression exp) {
    double result; // The result to return

    // Perform the operation based on the operation code
    switch (exp.op) {
        case ADD:
            result = exp.x + exp.y;
            break;
        case SUB:
            result = exp.x - exp.y;
            break;
        case MUL:
            result = exp.x * exp.y;
            break;
        case DIV:
            // Check if the second operand is zero
            if (exp.y == 0) {
                // Division by zero is undefined
                printf("Division by zero error\n");
                exit(EXIT_FAILURE);
            }
            result = exp.x / exp.y;
            break;
        default:
            // This should never happen, but just in case
            printf("Unknown operation: %d\n", exp.op);
            exit(EXIT_FAILURE);
    }

    // Return the result
    return result;
}

// A function to print an expression and its result
void print_result(expression exp, double result) {
    // Print the expression in infix notation
    printf("%g ", exp.x); // Print the first operand

    // Print the operation symbol based on the operation code
    switch (exp.op) {
        case ADD:
            printf("+ ");
            break;
        case SUB:
            printf("- ");
            break;
        case MUL:
            printf("* ");
            break;
        case DIV:
            printf("/ ");
            break;
        default:
            // This should never happen, but just in case
            printf("? ");
            break;
    }

    printf("%g = ", exp.y); // Print the second operand and the equal sign

    // Print the result with two decimal places
    printf("%.2f\n", result);
}

// The main function
int main(void) {
    char input[100]; // A buffer to store the input
    expression exp; // An expression to store the parsed input
    double result; // A double to store the result of the evaluation

    // Print a welcome message and instructions
    printf("Welcome to Bing's simple calculator!\n");
    printf("Enter an expression in the form of x + y, x - y, x * y, or x / y.\n");
    printf("Press Ctrl+C to exit.\n");

    // Loop until the user exits
    while (1) {
        // Prompt the user for input
        printf("> ");

        // Read the input from the standard input
        if (fgets(input, 100, stdin) == NULL) {
            // An error occurred or the end of file was reached
            printf("Error reading input\n");
            exit(EXIT_FAILURE);
        }

        // Parse the input and create an expression
        exp = parse_input(input);

        // Evaluate the expression and get the result
        result = evaluate(exp);

        // Print the expression and its result
        print_result(exp, result);
    }

    // This should never be reached, but just in case
    return 0;
}
