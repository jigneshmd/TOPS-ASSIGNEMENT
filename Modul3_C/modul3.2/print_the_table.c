// Wap to print up tabl up to given numbers

#include <stdio.h>
int main()
{
    int num;
    printf("enter number :");
    scanf("%d", &num);

    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d=%d\n", num, i, num * i);
    }

    return 0;
}