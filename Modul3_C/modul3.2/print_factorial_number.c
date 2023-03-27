// wap tp print factorial of given number

#include <stdio.h>
int main()
{
    int num, factorial = 1;
    printf("Enter a number :");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        factorial *= i;
    }
    printf("factotial is= [%d]", factorial);

    return 0;
}