#include<stdio.h>
int main()
{
// finde the area of 

// 1 area of cicrcle
    float radius,area;
    printf("enter radius area (Cm) : ");
    scanf("%f",&radius);
    area = 3.14 * radius * radius;
    printf("area of circle is  : %.3f\n",area);

printf("\n---------------------------------------------\n");

// 2 area of rectangle
    float lenght, width, area1;
    printf("\nenter lenght (Cm) : ");
    scanf("%f", &lenght);
    printf("enter width (Cm) : ");
    scanf("%f", &width);
    area1 = lenght * width;
    printf("area of rectanglr is : %.2f Cm\n",area1);

printf("\n---------------------------------------------\n");

// 3 area of trianngle 
    float base, hight, area2;
    printf("\nenter base (Cm) : ");
    scanf("%f", &base);
    printf("enter hight (Cm) : ");
    scanf("%f", &hight);
    area2= base * hight;
    printf("area of triangle is  : %.2f Cm\n",area2 /2);


    return 0;
}