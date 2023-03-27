// Wap to swap two number without using third varibel

#include<stdio.h>
int main ()
{ 
    int a=10;
    int b=20;

    printf("a=%d, b=%d",a,b);

    a= a + b;
    b = a - b;

    printf("\na=%d, b=%d",a,b);


    return 0;
}


