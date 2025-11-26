#include <stdio.h>

int main() {
    int number;
    
    // Take input from user
    printf("Enter a number: ");
    scanf("%d", &number);
    
    // Check using modulo operator
    if(number % 2 == 0) {
        printf("%d is EVEN\n", number);
    }
    else {
        printf("%d is ODD\n", number);
    }
    
    return 0;
}