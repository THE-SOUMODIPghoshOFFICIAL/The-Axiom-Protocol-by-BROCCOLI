#include<stdio.h>
#include<windows.h>

int main(int argc, char const *argv[])
{
    int number,b,c;
    printf("\n:HI, WELCOME USER! \a\n:ENTER THE NUMBER:- ");
    scanf("%d",&number);
    printf("\a:Yes number recieved! \n:YOU HAVE ENTERED %d ",number);
    if(number%2==0)
        printf("\n####################################################\nThe NUMBER you have entered here is an EVEN number!\n\n");
    else 
    
        printf("\n####################################################\nThe NUMBER you have entered here, is an ODD number!\n\n");
    
    
            
      
    return 0;
}
