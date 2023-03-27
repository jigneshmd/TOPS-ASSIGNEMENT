// Simpal Calculeter

#include<stdio.h>
int main()
{
    int num1;
    int num2;
    char op;

    printf("enter a number : ");
    scanf("%d",&num1);

    printf("enter opration value : ");
    scanf("%c",&op);
    scanf("%c",&op);
    
    printf("enter a number : ");
    scanf("%d",&num2);

    switch (op)
    {
    case '+' :

        printf("adition is : %d\n",num1 + num2);
        break;

    case '-' :
    
        printf("subtraction is : %d\n",num1 - num2);
        break;

    case '*' : 

        printf("multiplication is : %d\n",num1 * num2);
        break;

    case '/' :
        printf("division is : %.3f\n",(float) num1 / (float) num2);
        break;

    case '%' : 
        printf("modulo is : %d\n",num1 % num2);
        break;

    default:
        printf("pleas enter valied opreater in this +,-,*,/,%% ");
        break;
    }

    return 0;
}

