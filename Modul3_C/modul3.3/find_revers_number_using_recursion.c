// Wap to find reverse of sting using recursion

#include <stdio.h>
// function declaration karvu 
void reversesentence()
{
    char c;
    scanf("%c", &c);
    if (c !='\n')
    {
        // recursion calling funcation 
        reversesentence();
        printf("%c", c);
    }  
}
int main()
{
    printf("enter sentence: ");
    reversesentence(); 
    // function calling 
    // amj khali braket mukine call karavu
    return 0;
}