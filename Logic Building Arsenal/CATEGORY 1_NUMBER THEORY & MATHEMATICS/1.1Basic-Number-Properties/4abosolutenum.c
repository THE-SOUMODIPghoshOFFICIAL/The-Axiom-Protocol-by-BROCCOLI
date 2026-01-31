 /*PROBLEM #4: Find ABSOLUTE VALUE of a Number
========================================================================================================================
  ##What is ABSOLUTE VALUE?
Absolute value = Distance from zero (always POSITIVE or ZERO)
Simple Definition:

Remove the negative sign (if any)
Keep positive numbers as they are

Symbol:   Math: |x|
Example: |-5| = 5, |5| = 5
 
=============================================================================================================================
 ##Visual Understanding on Number Line:-

              ←─────────────|─────────────→
        -5  -4  -3  -2  -1  0  1  2  3  4  5
    
   |-5| = 5  (distance from 0 is 5 units)
   |5|  = 5  (distance from 0 is 5 units)    [ Key Point: Distance is ALWAYS positive!]
   |0|  = 0  (distance from 0 is 0 units)
========================================================================================================= 
#Mathematical Examples:-
----------------------------

|10|  = 10   (positive stays positive)
|-10| = 10   (negative becomes positive)
|0|   = 0    (zero stays zero)
|5|   = 5    
|-99| = 99
|100| = 100
|-1|  = 1

#The Logic:-
----------------------------
Rule:
     If number is negative → make it positive (multiply by -1)
     If number is positive → keep it same
     If number is zero → keep it zero

In Code Terms:
     if(number < 0)
         absolute = -number
     else
         absolute = number

=======================================================================================================



 */
//  C Code Implementation
   #include<stdio.h>

int main(void)
 {  int a,b;
      printf("\nEnter a number :- ");
      scanf("%d",&a);
      printf("\nThe number is :-%d ",a);
  
  return 0;
 }
 
