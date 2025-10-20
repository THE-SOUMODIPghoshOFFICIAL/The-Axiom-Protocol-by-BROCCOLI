//simple interest program
//author:- Soumodip ghosh time:-5:12 am MORNING 18 octSAT 2025

#include <stdio.h>
int main()
{
  int principle_amount,number_of_year;
  float simple_interest,rate_of_interest ;

         printf("enter the amount of principle, number of years and rate of interest\n:- ");
         scanf("%d%d%f",&principle_amount,&number_of_year,&rate_of_interest);  
                 simple_interest=(principle_amount*number_of_year*rate_of_interest)/100;
             
    printf("the simple interest is %0.2f",simple_interest);    
  
return 0;
}
