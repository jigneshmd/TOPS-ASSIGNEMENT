// Write a program of to swap the two values using templates

#include <iostream>
using namespace std;

template <class T>
int swapnumbers(T& x, T&y)
{
    T t;
    t = x;
    x = y;
    y = t;
    return 0;
}

// driver code
int main()
{
    int a, b;
    a = 10, b = 20;

    // invoking the swap()
    swapnumbers(a, b);
    cout << "Value a=" << a << " "
         << " Value b= " << b << endl;

    return 0;
}