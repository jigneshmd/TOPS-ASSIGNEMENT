// wap to take 10 no input from user and find out

#include<stdio.h>
int main()
{
    int num[10];
    printf("enter any ten number\n");
    
    for (int i = 0; i < 10; i++)
    {
        printf("enter num :",i);
        scanf("%d",&num[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d\n:",num[i]);
    }
    
    
    return 0;
}