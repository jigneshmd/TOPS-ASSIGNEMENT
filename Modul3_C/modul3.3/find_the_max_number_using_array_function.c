// write a program to find out the max number from given array using function

#include<stdio.h>
int main()
{
    int a[10], n, i, max;
    printf("enter number of array: ");
    scanf("%d", &n);
    printf("enter value of array: ");
    
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    max = 0;
    for (i = 0; i < n; i++)
    {
        if (a[i]>max)
        {
            max = a[i];
        }

    }
    printf("max value is: %d", max);

    return 0;
}
