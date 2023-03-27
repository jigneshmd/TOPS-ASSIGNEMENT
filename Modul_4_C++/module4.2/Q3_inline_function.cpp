// Write a program to find the multiplication values and the cubic values using inline function 

#include<iostream>
using namespace std;
class inlinefun
{
    public:
    int multiplication(int a,int b)
    {
        int multiplication = 0;

        multiplication= a * b;

        return multiplication;
    }
    int cubic (float a)
    {
        int cubic;
        cubic = a * a * a;
        return cubic;
    }

};
int main()
{
    int a, b;
    int cubic, multiplication;
    inlinefun i1, i2;
    cout << "enter value of a : ";
    cin >> a;
    cout << "enter value of b : ";
    cin >> b;
    multiplication = i1.multiplication(a, b);
    cubic = i1.cubic(a);
    cout << "multiplication value is = " << multiplication << endl;
    cout << "cubic  value is = " << cubic << endl;

    return 0;
}