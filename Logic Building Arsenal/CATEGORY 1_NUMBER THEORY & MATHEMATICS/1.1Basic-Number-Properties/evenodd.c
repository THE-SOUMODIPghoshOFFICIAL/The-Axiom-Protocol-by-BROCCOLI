#include<stdio.h>
#include<windows.h>

int main(int argc, char const *argv[])
{
    int number,b,c;
    printf("\n:HI, WELCOME USER! \n:ENTER THE NUMBER:- ");
    scanf("%d",&number);
    printf(":Yes number recieved! \n:YOU HAVE ENTERED %d ",number);
    if(number%2==0)
        printf("\n####################################################\nThe NUMBER you have entered here is an EVEN number!\n\n");
    else 
        printf("\n####################################################\nThe NUMBER you have entered here, is an ODD number!\n\n");

    return 0;
}
/*EVEN/ODD Program — Learning Notes
Author : BROCCOLI
Date : 2026-01-11
Time : 5:46:00 pm (exact time of my writting this.)
This note collects everything learned while building the even/odd program:

#If you want to add sound to any program for any specific situation where it demands some kind of sound of audio involvments.
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

## if you want to add colors to the text :-
ex:- printf("\033[31mERROR!\033[0m\n");  = ERROR!(in red) 
  











*/
