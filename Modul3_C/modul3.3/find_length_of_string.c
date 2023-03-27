// WAP Find out length of string without using inbuilt function

#include<stdio.h>
int main()
{
    char string[10],i;
    printf("Type anything and find the lenght: ");
    gets(string);
    i=0;

    while (string[++i]!='\0');
    printf("Lenght of string: %d", i);

    return 0;
}