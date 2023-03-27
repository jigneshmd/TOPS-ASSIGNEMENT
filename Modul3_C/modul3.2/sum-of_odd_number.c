// sum of odd numbers

#include<stdio.h>
int main()
{
    int i,num,sum=0;

    printf("enter the odd number :");
    scanf("%d",&num);

    printf("num of odd\n");

    for ( i = 1; i <= num; i++)
    {
      if (i%2 == 1)
    {
        printf("%d\n",i);
        sum = sum + i;
    }
    }
    printf("sum of odd number is[%d]",sum);

    return 0;
}