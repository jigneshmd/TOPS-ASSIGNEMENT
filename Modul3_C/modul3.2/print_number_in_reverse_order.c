// wap to print number in reverse order

#include <stdio.h>
#include <string.h>
int main()
{
    int num, rem, rev = 0;
    printf("enter number :");
    scanf("%d", &num);
    printf("revers number :");
    while (num != 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;

        printf("%d", rem);
    }

    // using string revers number

    // char number[50];
    // printf ("enter number :");
    // scanf("%s", &number);
    // printf("revers number : %s", strrev(number));

    return 0;
}