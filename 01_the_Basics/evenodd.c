#include <stdio.h>



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