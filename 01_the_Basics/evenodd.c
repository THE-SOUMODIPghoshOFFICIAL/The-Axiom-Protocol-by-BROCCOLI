#include <stdio.h>

/*
 * evenodd.c by BROCCOLI, TUE-25 NOV,2025. 11:45PM, FROM PG
 * ---------
 * Simple program to check whether an integer is even or odd.
 *
 * Purpose:
 *   - Reads a single integer value from standard input and determines
 *     whether that number is even or odd.
 *
 * How it works (high level):
 *   1. Prompt the user to enter an integer.
 *   2. Read the integer using `scanf`.
 *   3. Use the modulo operator (`%`) to test divisibility by 2.
 *      - If `number % 2 == 0`, the number is even.
 *      - Otherwise it is odd.
 *   4. Print a message stating whether the number is EVEN or ODD.
 *
 * Notes and edge cases:
 *   - Zero (0) is considered even because 0 % 2 == 0.
 *   - Negative integers work correctly with the modulo operator
 *     in C for this parity test (e.g. -3 % 2 yields -1, which is
 *     not equal to 0, so -3 is odd).
 *   - This program reads one integer; if non-integer input is given
 *     `scanf` will fail — the program checks the return value and
 *     prints an error message in that case.
 *
 * Compilation (example, using GCC / MinGW on Windows PowerShell):
 *   gcc -o evenodd evenodd.c
 *
 * Run (example):
 *   .\evenodd
 *   Enter a number: 7
 *   7 is ODD
 *
 * Author: (added documentation)
 * Date:   2025-11-25
 */

int main(void) {
    int number;
    int scan_result;

    /* Prompt the user to enter an integer. */
    printf("Enter a number: ");

    /*
     * Read one integer from standard input.
     * scanf returns the number of successfully assigned items.
     * For "%d" this should be 1 on success.
     */
    scan_result = scanf("%d", &number);

    /* Check that scanf successfully read an integer. */
    if (scan_result != 1) {
        /* Use stderr for error messages; return non-zero exit code. */
        fprintf(stderr, "Error: invalid input. Please enter an integer.\n");
        return 1;
    }

    /*
     * Parity check using the modulo operator:
     * - `number % 2` yields the remainder when dividing by 2.
     * - If the remainder is 0, the number is evenly divisible by 2
     *   and therefore even. Otherwise it's odd.
     */
    if (number % 2 == 0) {
        printf("%d is EVEN\n", number);
    } else {
        printf("%d is ODD\n", number);
    }

    /* Return 0 to indicate successful execution. */
    return 0;
}