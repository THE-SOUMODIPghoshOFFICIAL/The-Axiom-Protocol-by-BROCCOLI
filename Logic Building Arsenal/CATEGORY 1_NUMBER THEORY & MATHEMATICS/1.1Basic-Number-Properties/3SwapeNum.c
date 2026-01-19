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
        a = 20, b = 20   (Original value of a is LOST!)

Step 2: b = a
        a = 20, b = 20   (Both have same value!)


The original value of a (which was 10) is gone forever!
=============================================================================
## METHOD 1: Using Temporary Variable (Easiest):-

Think of a third glass to help swap!

## Real-Life Analogy:

Step 1: Pour Orange Juice into Empty Glass (temp)
Step 2: Pour Apple Juice into Glass A
Step 3: Pour Orange Juice from temp into Glass B
Done! Swapped! 


## Mathematical Steps:

Initial: a = 10, b = 20

Step 1: temp = a     → temp = 10, a = 10, b = 20
Step 2: a = b        → temp = 10, a = 20, b = 20
Step 3: b = temp     → temp = 10, a = 20, b = 10

Final: a = 20, b = 10 

*/

//c code:-
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,b,tempV; //tempV=temporary variable.
    printf("\nENTER THE 1ST NUMBER in SLOT\"A\":- ");
    scanf("%d",&a);

    printf("ENTER THE 2ND NUMBER IN SLOT\"B\":- ");
    scanf("%d",&b);

printf("\n=========Swapingggggg==========\n");
    tempV=a;
    a=b;
    b=tempV;
  printf("SLOT A DATA IS GOING TO SLOT B AND VICE-VERSA\n");  
  printf("SLOT\"A\"=%d\nSLOT\"B\"=%d",a,b);
    
    return 0;
}

/*
##  Test Run #1: Simple Number
Input:
Enter first number (a): 10
Enter second number (b): 20

Output:
--- BEFORE SWAP ---
a = 10
b = 20

--- SWAPPING ---
Step 1: temp = a  →  temp = 10
Step 2: a = b     →  a = 20
Step 3: b = temp  →  b = 10

--- AFTER SWAP ---
a = 20
b = 10


##Explanation:

Before: a=10, b=20, temp=?
Step 1: temp=10, a=10, b=20  (Save a's value)
Step 2: temp=10, a=20, b=20  (Copy b to a)
Step 3: temp=10, a=20, b=10  (Copy temp to b)
After:  a=20, b=10 


## Test Run #2: Negative Numbers

Input:
Enter first number (a): -5
Enter second number (b): 15

Output:
--- BEFORE SWAP ---
a = -5
b = 15

--- SWAPPING ---
Step 1: temp = a  →  temp = -5
Step 2: a = b     →  a = 15
Step 3: b = temp  →  b = -5

--- AFTER SWAP ---
a = 15
b = -5
```

Works perfectly with negative numbers!
## Test Run #3: Same Numbers

Input:
Enter first number (a): 7
Enter second number (b): 7

Output:
--- BEFORE SWAP ---
a = 7
b = 7

--- SWAPPING ---
Step 1: temp = a  →  temp = 7
Step 2: a = b     →  a = 7
Step 3: b = temp  →  b = 7

--- AFTER SWAP ---
a = 7
b = 7
```
 Still works (though result looks same)!


## Test Run #4: Zero
Input:
Enter first number (a): 0
Enter second number (b): 50

Output:
--- BEFORE SWAP ---
a = 0
b = 50

--- SWAPPING ---
Step 1: temp = a  →  temp = 0
Step 2: a = b     →  a = 50
Step 3: b = temp  →  b = 0

--- AFTER SWAP ---
a = 50
b = 0
```

 Works with zero too!


## Visual Memory Diagram:-

BEFORE SWAP:
┌─────┐  ┌─────┐  ┌─────┐
│ a=10│  │ b=20│  │temp=?│
└─────┘  └─────┘  └─────┘

STEP 1: temp = a
┌─────┐  ┌─────┐  ┌─────┐
│ a=10│  │ b=20│  │temp=10│  ← Saved!
└─────┘  └─────┘  └─────┘

STEP 2: a = b
┌─────┐  ┌─────┐  ┌─────┐
│ a=20│  │ b=20│  │temp=10│  ← Changed!
└─────┘  └─────┘  └─────┘

STEP 3: b = temp
┌─────┐  ┌─────┐  ┌─────┐
│ a=20│  │ b=10│  │temp=10│  ← Swapped! 
└─────┘  └─────┘  └─────┘


#METHOD 2: WITHOUT Temporary Variable (MAGIC!)

Now the COOL TRICK using arithmetic! No extra variable needed!

## Mathematical Logic

We use addition and subtraction:

Initial: a = 10, b = 20

Step 1: a = a + b  →  a = 30, b = 20
Step 2: b = a - b  →  a = 30, b = 10  (Got b's new value!)
Step 3: a = a - b  →  a = 20, b = 10  (Got a's new value!)

Final: a = 20, b = 10 

## Why This Works:
Step 1:a = a + b

a becomes sum of both numbers
a = 10 + 20 = 30
Now: a=30, b=20


Step 2: b = a - b

b = 30 - 20 = 10
This gives us the ORIGINAL value of a!
Now: a=30, b=10


Step 3: a = a - b

a = 30 - 10 = 20
This gives us the ORIGINAL value of b!
Now: a=20, b=10

*/





