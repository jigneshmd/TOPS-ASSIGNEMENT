// Write a program of Addition, Subtraction, Division, Multiplication using constructor.

#include <iostream>
#include <iomanip>
using namespace std;
class claculat
{
    public:
        claculat(float a, float b, char c)
        {
            if (c == '+')
            {
                cout << "Addition = " << a + b;
            }
            else if (c == '-')
            {
                cout << "Subtraction = " << a - b;
            }
            else if (c == '*')
            {
                cout << "Multiplication = " << a * b;
            }
            else if (c == '/')
            {
                cout << "Divison = " << fixed << std ::setprecision(2) << a / b;
            }
            
        }
};
int main()
{
        cout << "Addition,subtraction,divison,multiplication using funcation :\n\n";
        float a, b;
        char ch;
        cout << "enter number : ";
        cin >> a;
        up:
        cout << "enter any singh : (+,-,*,/) : ";
        cin >> ch;

        if (ch=='+' || ch=='-' || ch=='*' || ch=='/')
        {
            cout << "enter a number : ";
            cin >> b;
            claculat(a, b, ch);
        }
        else
        {
            cout << "please enter valid input \n";
            goto up;
        }
        
        return 0; 
}