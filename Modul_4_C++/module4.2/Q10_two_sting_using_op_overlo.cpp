// Write a program to concatenate the two strings using Operator Overloading
#include <iostream>
#include <string.h>
using namespace std;

class addstring
{
    public :
        char s1[100], s2[100]; 
        // parameterized constructor
        addstring(char str1[], char str2[])
        {
            strcpy(this->s1, str1);
            strcpy(this->s2, str2);
            // initialize the string of class object
        }
        void operator+()
        {
            cout << "\nconcatention : " << strcat(s1, s2);
        }
};
// driver code
int main ()
{
    // declering two string
        char str1[100];
        char str2[100];

        cout << "Enter string 1 : ";
        gets(str1);
        cout << "Enter string 2 : ";
        gets(str2);
        // declering and initilazing the class
        // with above two stings
        addstring a1(str1, str2);
        // call operator funcation
         +a1;
        return 0;
}
