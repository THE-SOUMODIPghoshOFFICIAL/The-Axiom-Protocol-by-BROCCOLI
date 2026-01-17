//PROBLEM #1: Check if Number is EVEN or ODD

/*  Mathematical Concept:-

| What is Even/Odd? |

Even number: Any number that can be divided by 2 without remainder
Examples: 2, 4, 6, 8, 10, 100, 1000
Odd number: Any number that gives remainder 1 when divided by 2
Examples: 1, 3, 5, 7, 9, 99, 101*

The Magic Formula: number % 2
If number % 2 == 0 → Even
If number % 2 == 1 → Odd

##REAL-Life Examples:
12 ÷ 2 = 6 (remainder 0) → EVEN
15 ÷ 2 = 7 (remainder 1) → ODD
0 ÷ 2 = 0 (remainder 0) → EVEN
-4 ÷ 2 = -2 (remainder 0) → EVEN
-7 ÷ 2 = -3 (remainder -1 or 1) → ODD
====================================================================================
     ---Alternative Method (Bitwise - Advanced Preview)----
     // Using bitwise AND operator
          if((number & 1) == 0) {
              printf("EVEN");
          } else {
              printf("ODD");
          }
          ------------------------------------------------------------
          
          #How it works:
          - In binary, last bit of even numbers is 0
          - Last bit of odd numbers is 1
          - `& 1` checks the last bit
          
          Examples:
          
          10 in binary = 1010 → last bit 0 → EVEN
          7 in binary = 0111 → last bit 1 → ODD
============================================================================
*/
//ACTUAL PROgram

#include<stdio.h>
#include<windows.h>

int main()
{
    int number,b,c;
    printf("\n:HI, WELCOME USER! \n:ENTER THE NUMBER:- ");
    scanf("%d",&number); //Read integer from user
    printf(":Yes number received! \n:YOU HAVE ENTERED %d ",number);
    if(number%2==0)
        printf("\n####################################################\nThe NUMBER you have entered here, is an EVEN number!\n\n");
    else 
        printf("\n####################################################\nThe NUMBER you have entered here, is an ODD number!\n\n");

    return 0;
}
/*EVEN/ODD Program — Learning Notes
Author : BROCCOLI
Date : 2026-01-11
Time : 5:46:00 pm (exact time of my writing this.)
This note collects everything learned while building the even/odd program:

#If you want to add sound to any program for any specific situation where it demands some kind of sound of audio involvements.
but escape sequence depends on your terminal/system settings—some may just show a visual flash or do nothing.
you can use:-   System sound (platform-specific)> Windows: Use Beep() function from <windows.h>
                #include <windows.h>
                ......{
                Beep(1000, 500);  // 1000 Hz for 500ms
                   ....}
  The Beep() function doesn't have a volume parameter, but you can make it louder/more noticeable by:
  1.Increase frequency (higher pitch = sounds louder to ears):   
       Beep(2000, 500);  // 2000 Hz instead of 1000 Hz

  2.Increase duration (longer beep):
       Beep(1000, 1000);  // 1000ms (1 second) instead of 500ms

  3.Repeat multiple times:
       for (int i = 0; i < 3; i++) {
       Beep(1000, 300);
       Sleep(100);  // Small delay between beeps
       }

  4. Combination (high pitch + longer + repeat):  
        Beep(2500, 400);
        Sleep(50);
        Beep(2500, 400);

  Note: The actual loudness also depends on your system volume—Beep() uses the system volume, so if your speakers are muted or volume is low, no amount of code tweaking will help. Check your Windows volume settings.

   Frequency range: 37 Hz to 32,767 Hz 
   (human hearing ≈ 20 Hz to 20,000 Hz)

## Windows Beep() (in <windows.h>)
Signature: BOOL Beep(DWORD dwFreq, DWORD dwDuration);
- `dwFreq`: frequency in Hertz (37–32767)
- `dwDuration`: duration in milliseconds

Pros: precise pitch and duration; reliable on Windows systems.
Cons: no direct volume control — sound level depends on system volume.




## if you want to add colors to the text :-
ex:- printf("\033[31mERROR!\033[0m\n");  = ERROR!(in red) 

###Component breakdown:
     _PART_                        _MEANING_
 
1.\033                       ESC character 
                              (escape character in octal). Same as \x1b in hex    

2. [                          Opening bracket(literal char) 

3. 31                         color code(31=red foreground)

4. m                          Command terminator     
                              (tells terminal "apply this style")

5.ERROR!                      Your actual text

6.\033[0m                     Reset code 
                              (0m = reset all styles to default) 

7. \n                         Newline

Common color codes:

// Foreground colors
\033[30m  // Black
\033[31m  // Red
\033[32m  // Green
\033[33m  // Yellow
\033[34m  // Blue
\033[35m  // Magenta
\033[36m  // Cyan
\033[37m  // White

// Background colors (40-47)
\033[41m  // Red background
\033[42m  // Green background

// Styles
\033[1m   // Bold
\033[4m   // Underline
\033[7m   // Reverse (swap foreground/background)

printf("\033[1;31mBOLD RED\033[0m\n");  // Bold + Red
printf("\033[32mGREEN TEXT\033[0m\n");  // Green
printf("\033[1;33;44mBOLD YELLOW ON BLUE\033[0m\n"); // Multiple styles

*/
