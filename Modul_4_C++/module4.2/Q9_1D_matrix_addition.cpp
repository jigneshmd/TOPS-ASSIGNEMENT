// Write a Program of Two 1D Matrix Addition using Operator Overloading

#include <iostream>
using namespace std;
class matrix
{
    int num = 0, i = 0, j = 0, e[10];

public:
    int getmatrix()
    {
        cout << "Enter the size of matrix : " << endl;
        cin >> num;
        cout << "Enter the elements of the matrix : " << endl;

        for (i = 0; i < num; i++)
        {
            cin >> e[i];
        }
    }
    matrix operator+(matrix m)
    {
        matrix summatrix;
        for (i = 0; i < num; i++)
        {
            summatrix.e[i] =e [i] +m.e[i];
            // cout << "the sum of two matrics is :" << endl;
            // cout << summatrix.e[i]<<" ";
        }
        cout << "The sum of two matrics is : "  << endl;
        cout << "----------------------------"  << endl;
        for (i = 0; i < num; i++)
        {
            cout << summatrix.e[i] << "  ";
        }
    }
    void displaymatrix()
    {
        cout << "----------------------------"  << endl;
        cout << "Enter matrix is : " << endl;
        for ( i = 0; i < num; i++)
        {
            cout << e[i] << "  ";
        }
        cout << "----------------------------"  << endl; 
    }
};
int main()
{
    matrix m1, m2, m3;
    cout << "1st matrix : " << endl;
    m1.getmatrix();
    m1.displaymatrix();cout << endl;

    cout << "2nt matrix : " << endl;
    m2.getmatrix();
    m2.displaymatrix();cout << endl;
    m3 = m1 + m2;
    return 0;
}