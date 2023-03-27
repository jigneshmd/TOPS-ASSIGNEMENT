// how many odd numbers are there

#include<stdio.h>
int main()
{
    int i,num;

    printf("enter numbere of odd : ");
    scanf("%d",&num);

    printf("odd numbers from 1 to %d are: \n",num);

    for (i = 1; i <=num; i++)
    {
        if(i%2 == 1)
        {
            printf("%d\n",i);
        }
    }
    

    return 0;
}