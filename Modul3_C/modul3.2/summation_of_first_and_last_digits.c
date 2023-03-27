// write a program you have to make a summation of first and last digits

#include <stdio.h>
int main()
{
    int n, sum = 0, firstdigit, lastdigit;
    printf("enter a number and find the sum of first and last digits :");
    scanf("%d", &n);
    lastdigit = n % 10;

    while (n >= 10)
    {
        n = n / 10;
    }
    firstdigit = n;

    sum = firstdigit + lastdigit;

    printf("sum of first and last digit :%d", sum);

    return 0;
}
