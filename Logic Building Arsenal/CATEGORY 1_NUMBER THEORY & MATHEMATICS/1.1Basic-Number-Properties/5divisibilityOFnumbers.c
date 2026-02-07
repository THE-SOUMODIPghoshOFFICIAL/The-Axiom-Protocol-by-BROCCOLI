/* PROBLEM #5: Check if a Number is DIVISIBLE by Another
==================================================================================================================

  ##What is DIVISIBILITY?
----------------------------

Divisibility means one number can be divided by another with NO REMAINDER.
Simple Definition:

Number A is divisible by Number B if:

A ÷ B gives a whole number (no decimal)
Remainder is ZERO
====================================================================================================================
##Real-Life Examples
---------------------------
Example 1: Pizza Slices 
   12 slices ÷ 3 people = 4 slices each (exactly!)
   12 is divisible by 3 

   12 slices ÷ 5 people = 2.4 slices each (not exact!)
   12 is NOT divisible by 5 

##Example 2: Money Distribution   
--------------------------------------------
    $20 ÷ 4 people = $5 each (exactly!)
20 is divisible by 4 

$20 ÷ 3 people = $6.67 each (not exact!)
20 is NOT divisible by 3 

----------------------------------------------------------------------------------------------
## Mathematical Examples:-
20 ÷ 5 = 4 (remainder 0) → 20 is divisible by 5 
20 ÷ 3 = 6 (remainder 2) → 20 is NOT divisible by 3 

15 ÷ 3 = 5 (remainder 0) → 15 is divisible by 3 
15 ÷ 4 = 3 (remainder 3) → 15 is NOT divisible by 4 

100 ÷ 10 = 10 (remainder 0) → 100 is divisible by 10 
100 ÷ 7 = 14 (remainder 2) → 100 is NOT divisible by 7 

##The Logic: Using MODULO Operator 
=============================================================================================================
Key Formula:- 
   if (A % B == 0)  → A is divisible by B
   if (A % B != 0)  → A is NOT divisible by B

#why:-
    % (modulo) gives the remainder
    If remainder is 0, division is exact!

*/

//c code implementation
#include <stdio.h>

int main() {
    int number, divisor;
   
    // Take inputs
    printf("Enter the number: ");
    scanf("%d", &number);
    
    printf("Enter the divisor: ");
    scanf("%d", &divisor);

    printf("\n--- CHECKING DIVISIBILITY ---\n");
    printf("Number: %d\n", number);
    printf("Divisor: %d\n", divisor);
}