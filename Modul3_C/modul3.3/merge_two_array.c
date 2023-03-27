// wap to take two array input from user and sort them in ascending or descending order as per users choice

#include <stdio.h>
int main()

// ascending
{
    int a[10], i, j, temp;
    printf("enter array elements: ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 5; i++)
    {
        for (j = i + 1; j < 5; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf(" ascending array elements is: ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }

    // descending
    {
        printf("\nenter array elements: ");
        for (i = 0; i < 5; i++)
        {
            scanf("%d", &a[i]);
        }
        for (i = 0; i < 5; i++)
        {
            for (j = i + 1; j < 5; j++)
            {
                if (a[i] < a[j])
                {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
         
            }
        }
        printf(" descending array elements is: ");
        for (i = 0; i < 5; i++)
        {
            printf("%d ", a[i]);
        }
        return 0;
    }
}