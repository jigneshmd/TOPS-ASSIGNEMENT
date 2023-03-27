// WAP to reverse a string and check that the string is palindrome or not

#include <stdio.h>
#include <string.h>
int main()
{
    char string[100], rev[100];
    printf("enter string: ");
    gets(string);

    // copy string to revers
    strcpy(rev, string); // revers will be chek a palindrom or not

    strrev(rev);
    int answer = strcmp(string, rev); // return value

    if (strcmp(string, rev) == 0)
    {
        printf("%s is a palindrom");
    }
    else
    {
        printf("%s is not a palindrom");
    }

    return 0;
}