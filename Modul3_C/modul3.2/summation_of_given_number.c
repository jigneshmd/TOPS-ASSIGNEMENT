// write a program make a summation of given number

#include <stdio.h>
int main()
{
    int n, r, sum = 0;
    printf("Enter any number :");
    scanf("%d", &n);

    while (n > 0)
    {
        r = n % 10;
        sum = sum + r;
        n = n / 10;
    }
    printf("sum of digits: %d", sum);

    return 0;
}
