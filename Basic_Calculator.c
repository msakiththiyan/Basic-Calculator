//BASIC CALCULATOR//

#include <stdio.h>

int main(void) 
{
	
  char operator;
  float no1, no2;
  
 printf("Choose a Mathematical Operation\n\n");
 printf("Addition: +\nsubtraction: -\nMultiplication: *\nDivision: /\n\n");
 scanf("%c", &operator);
   
   printf("\nEnter the First Number: ");
   scanf("%f", &no1);    
   printf("Enter the Second Number: ");
   scanf("%f", &no2);
  
   switch(operator)
   {
    case '+': printf("\n%.2f + %.2f = %.2f\n", no1,no2,(no1+no2));
              break;

    case '-': printf("\n%.2f - %.2f = %.2f\n", no1,no2,(no1-no2));
              break;

    case '*': printf("\n%.2f * %.2f = %.2f\n", no1,no2,(no1*no2));
              break; 

    case '/': if (no2!=0)
              printf("\n%.2f / %.2f = %.2f\n", no1,no2,(no1/no2));
              else 
              printf("\nInvalid Input: Cannot be divided by 0");
              break;
             
    default:  printf("\nError: Invalid Operator\n");
              break;
   }   
    
 return 0;
}
