// sum of even numberes 

#include<stdio.h>
int main()
{
    int i,num,sum=0;

    printf("enter number: ");
    scanf("%d",&num);

    printf("number of even\n",num);
    for (i = 1; i <=num; i++)
    {
        if(i%2 == 0)
        {
            printf("%d\n",i);
            sum=sum + i;
        }
    }
    printf("sum is even num [%d]",sum);



    return 0;
}
