// Monday to Sunday using switch case 

#include<stdio.h>
int main()
{
    char day;
    printf ("pleas enter the day number : ");
    scanf("%c",&day);

    switch (day)

    {
    case '1' :
    {
        printf("Monday");
        break;
    }
    case '2' :
    {
        printf("Tuseday");
        break;
    }
    case '3' :
    {
        printf("Wednesday");
        break;
    }
    case '4' :
    {
        printf("Thursday");
        break;
    }
    case '5' :
    {
        printf("Friday");
        break;
    }
    case '6' :
    {
        printf("Saturday");
        break;
    }
    case '7' : 
    {
        printf("Sunday");
        break;
    }
    default  :
    {
        printf("enter day between 1-7 only\n");
        break;
    }
    }
    return 0;
}