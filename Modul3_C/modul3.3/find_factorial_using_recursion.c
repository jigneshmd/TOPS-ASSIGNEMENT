// Wap to find factorial using recursion

#include <stdio.h>
int fact(int n)
{
    if (n <= 0)
    {
        return 1;
    }
    else
        return n * fact(n - 1);
}
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("factorial number %d is=%d", num,fact(num));

    return 0;
}
