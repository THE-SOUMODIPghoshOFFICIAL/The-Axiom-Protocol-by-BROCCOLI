
/* PROBLEM #2: Check if Number is POSITIVE, NEGATIVE, or ZERO
===================================================================
----------------------Mathematical Concept--------------------------
Numbers can be divided into 3 categories based on their value:
1. POSITIVE Numbers (> 0)

Greater than zero
Examples: 1, 2, 5, 100, 9999
On number line: RIGHT side of zero

2. NEGATIVE Numbers (< 0)

Less than zero
Examples: -1, -5, -100, -9999
On number line: LEFT side of zero

3. ZERO (= 0)

Neither positive nor negative
The middle point
Only ONE number in this category!
==========================================================================
                            |Visual Number Line|
                            -------------------

                   NEGATIVE          ZERO          POSITIVE
                       ←               |               →
                   -5  -4  -3  -2  -1  0  1  2  3  4  5

===========================================================================
How to Check?
We use comparison operators:
            |-----------------------------------------------|
            |    {Operator}   {Meaning}      {Example}      |
            |      >          Greater than  5 > 0 → TRUE    |
            |      <          Less than    -3 < 0 → TRUE    |
            |      ==          Equal to    0 == 0 → TRUE    |
            |-----------------------------------------------|
  
            
 #THE LOGIC:-           
if number > 0  → POSITIVE
if number < 0  → NEGATIVE
if number == 0 → ZERO
---------------------------------------------------------------------------
===========================================================================

*/

//ACTUAL CODE:-

#include<stdio.h>
int main()
{
    int num;
    printf("\nENTER A NUMBER:- ");
    scanf("%d",&num);
    if(num<0)
      {printf("%d is a negative number",num);}
    else if (num>0)
      { printf("%d is a positive number",num);}
    else if (num==0)
    {
        printf("%d is a zero",num);
    }
    

      
    return 0;
}

                   

