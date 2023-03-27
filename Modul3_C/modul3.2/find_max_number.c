// write a program to find out the max from given number

#include <stdio.h>
int main()
{
    int i = 0;
    int max = 0;
    int n = 0;
    int arry[i];

    printf("enter the number :");
    scanf("%d", &n);
    printf("this is the max number of value n :");

    while (n >= 1)
    {
        arry[i] = n % 10;
        n = n / 10;
        i++;
    }
        arry[i] = n;

    for (int s = 0; s <=i; s++)
    {
        if (arry[s]> max)
        {
            max = arry[s];
        }
        
    }
    printf("%d", max);

    return 0;
}