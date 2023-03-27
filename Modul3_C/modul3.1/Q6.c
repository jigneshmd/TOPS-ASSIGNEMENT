#include<stdio.h>
int main ()
{   
    // convert year into days and days into years 

    float years, day;

    printf("enter years");
    printf("\nconvert years in to day : ");
    scanf("\n%f",&years);

    day = years * 365;
    printf("day is : %.3f\n",day);

    printf("\nenter day");
    printf("\nconvert days in to years : ");
    scanf("\n%f",&day);

    years =day / 365;
    printf("years is : %.3f",years);


    return 0;
}