#include<stdio.h>
int main()
{
  // simpal calculator
  
  int num1;
  int num2;
  printf("enter num");
  scanf("%d",&num1);
  printf("enter num");
  scanf("%d",&num2);
  
  printf("Addition\t : %d",num1+num2);
float a = (float)num1 / (float)num2 ;
printf("\nMultiplication\t : %d", num1*num2);

printf("\nSubtraction\t : %d", num1-num2);

printf("\nDivision\t : %f", a);

printf("\nmodulo\t\t : %d", num1%num2);
  
 return 0;
}