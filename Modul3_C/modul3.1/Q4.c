#include<stdio.h>
int main()
{
// find the simpal intrest 

// principal,rate,time,si;
// si is simpal intrest calculating si=(p * r * t)/100

    float p,r,t,si;
    printf("enter principal value (p) : ");
    scanf("%f", &p);

    printf("enter rate of intrest value %% (r) : ");
    scanf("%f",&r);

    printf("enter time of period in year (t) : ");
    scanf("%f",&t);

    si = (p * r * t)/100;
    printf("si is = : %.3f\n ",si);

    return 0;
}