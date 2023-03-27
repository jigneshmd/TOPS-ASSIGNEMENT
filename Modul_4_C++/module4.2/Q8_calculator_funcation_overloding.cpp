// Write a program to Mathematic operation like Addition, Subtraction, Multiplication, Division Of two number using different parameters and Function Overloading

#include <iostream>
#include <stdio.h>
using namespace std;
class functionoverloding
{
    public :
        int a, b, c, d, e;
        void calculation()
        {
            cout << "--------------------------------" << endl;
            cout << "Enter value of addition" << endl;
            cout << "Enter two value" << endl;
            cin >> a >> b;
            int addition = a + b;
            cout << "addition of two value is = " << addition << endl;
            cout << "--------------------------------" << endl;
        }
        void calculation (int x)
        {
           cout << "Enter value of subtraction" << endl;
           cout << "Enter value of c : " << endl;
           cin >> c ;
           cout << "subtraction of two value is = " << x - c << endl;
           cout << "--------------------------------" << endl;
        }
        void calculation (int m,int n)
        {
            cout << "Enter value of multiplication" << endl;
           cout << "Enter value of d : " << endl;
           cin >> d ;
           cout << "subtraction of two value is = " << m * n * d << endl;
           cout << "--------------------------------" << endl;
        }
        void calculation (float r, float s, float t)
        {
            cout << "Enter value of divison" << endl;
           cout << "Enter value of e : " << endl;
           cin >> e ;
           cout << "divison of two value is = " <<r / s / t / e << endl;
           cout << "--------------------------------" << endl;
        }
};
int main()
{
        functionoverloding obj;
        obj.calculation();
        obj.calculation(100);
        obj.calculation(1,1);
        obj.calculation(10000, 100, 10);
        return 0;
}