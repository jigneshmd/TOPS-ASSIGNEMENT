// Write a program to swap the two numbers using friend function without using third variable
#include <iostream>
using namespace std;
class swapnumbers
{
public:
    int x, y;
    void getdata()
    {
        cout << "\nEnter first value : ";
        cin >> x;
        cout << "\nEnter second value : ";
        cin >> y;
    }
    void showdata()
    {
        cout << "x=" << x << " "
             << "y=" << y;
    }
    friend void swap(swapnumbers &s);
};
/*frind funcation to swap two numbers*/
void swap(swapnumbers &s)
{
    s.x = s.x + s.y;
    s.y = s.x - s.y;
    s.x = s.x - s.y;
}
int main()
{
    swapnumbers s;
    cout << "Input two number to swap : ";
    s.getdata();
    cout << endl
         << "Befor swapping : " << endl;
    s.showdata();
    swap(s);
    cout << endl
         << "After swapping : " << endl;
    s.showdata();

    return 0;
}