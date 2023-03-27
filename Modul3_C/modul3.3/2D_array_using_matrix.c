// WAP to make addition, Subtraction and multiplication of two matrix using 2-D Array

#include <stdio.h>
int main()
{
    int array1[3][3];
    int array2[3][3];
    int array3[3][3];
    int sum = 0;
    int i;
    printf("\nenter array 1 value : \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("enter number : ");
            scanf("%d", &array1[i][j]);
        }
    }
    printf("enter array 2 value :\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("enter number : ");
            scanf("%d", &array2[i][j]);
        }
    }
    // output
    printf("\narray1 :\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", array1[i][j]);
        }
        printf("\n");
    }
    printf("\narray2 :\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", array2[i][j]);
        }
        printf("\n");
    }

    // addition of two array :
    printf("\naddition :\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", array1[i][j] + array2[i][j]);
        }
        printf("\n");
    }

    // subtraction of two array :
    printf("\nsubtraction :\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", array1[i][j] - array2[i][j]);
        }
        printf("\n");
    }
    // multiplication of two array :
    printf("\nmultiplication :\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                sum += array1[i][k] * array2[j][k];
            }
            array3[i][j] = sum;
            sum = 0;
        }
    }
    for (int i = 0; i < 3; i++)
    {   
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", array3[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}