// Write a program to calculate the area of circle, rectangle and triangle using Function Overloading
#include <iostream>
#include <cstdlib>
using namespace std;

float area(float r)
{
    return (3.14 * r * r);
}
float area(int n, float b, float h)
{
    return (0.5 * b * h);
}
float area(float l, float b)
{
    return (l * b);
}
int main()
{
    float b, h, r, l;
    int ch;
    do
    {
        cout << "\n\n-----list of sheap-----\n";
        cout << "\n 1. Area of Circle";
        cout << "\n 2. Area of Triangle";
        cout << "\n 1. Area of Rectangle";
        cout << "\n 4. Exit";
        cout << "\n\n Selct any one : ";
        cin >> ch;
        switch (ch)
        {
        case 1:
        {
            cout << "\n Enter the radius of circle : ";
            cin >> r;
            cout << "\n Area of circle is : " << area(r);
            break; 
        }
        case 2:
        {
            cout << "\n Enter the base & hight of triangle : ";
            cin >> b >> h;
            cout << "\n Area of triangle is : " << area(0.5,b, h);
            break; 
        }
        case 3:
        {
            cout << "\n Enter the lenght & bredth of rectangle : ";
            cin >> l >> b;
            cout << "\n Area of rectangle is : " << area(l, b);
            break; 
        }
        case 4 :
            exit(0);
            default :
            cout << "\n Invalid selected ";
        }

    } while (ch != 4);

    return 0;
}