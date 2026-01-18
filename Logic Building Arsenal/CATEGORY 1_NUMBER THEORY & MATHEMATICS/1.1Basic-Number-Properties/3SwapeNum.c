/*PROBLEM #3: SWAP Two Numbers (With & Without Temp Variable)
=============================================================================
##What Does "SWAP" Mean?
-------------------------
Swapping means exchanging the values of two variables.
Real-Life Example:
Imagine two glasses:

Glass A has Orange Juice 
Glass B has Apple Juice 

Goal: Exchange their contents!
After swapping:

Glass A has Apple Juice 
Glass B has Orange Juice 
===============================================================================
##The Problem:-
---------------
Before Swap:  |   After Swap:
   a = 10     |     a = 20
   b = 20     |     b = 10

==============================================================================
##Common MISTAKE (This Won't Work!):------

a = b;  // Now a = 20, b = 20
b = a;  // Now a = 20, b = 20


#What went wrong?
-------------------

Step 1: a = b
        a = 20, b = 20  ❌ (Original value of a is LOST!)

Step 2: b = a
        a = 20, b = 20  ❌ (Both have same value!)


The original value of a (which was 10) is gone forever!
=============================================================================
## METHOD 1: Using Temporary Variable (Easiest):-

Think of a third glass to help swap!

## Real-Life Analogy:

Step 1: Pour Orange Juice into Empty Glass (temp)
Step 2: Pour Apple Juice into Glass A
Step 3: Pour Orange Juice from temp into Glass B
Done! Swapped! ✅


## Mathematical Steps:

Initial: a = 10, b = 20

Step 1: temp = a     → temp = 10, a = 10, b = 20
Step 2: a = b        → temp = 10, a = 20, b = 20
Step 3: b = temp     → temp = 10, a = 20, b = 10

Final: a = 20, b = 10 ✅

*/

//c code:-







