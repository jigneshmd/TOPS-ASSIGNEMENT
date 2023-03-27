// How Many even Number Are There

#include<stdio.h>
int main()
{
    int i,num;

    printf("enter numbere of even : ");
    scanf("%d",&num);

    printf("Even numbers from 1 to %d are: \n",num);

    for (i = 1; i <=num; i++)
    {
        if(i%2 == 0)
        {
            printf("%d\n",i);
        }
    }
    

    return 0;
}