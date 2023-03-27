// wap to create simpal calculator using class

#include <iostream>
#include <bits/stdc++.h>

using namespace std;
class opreturs
{
public:
    int num1,num2;
    void calculte()
    {
        cout << "enter num1 : ";
        cin >> num1 ;
        cout << "enter num2 : ";
        cin >> num2 ;

        cout << "--------------------------------------\n";
        cout << "addition is =" << num1 + num2 << endl;
        cout << "--------------------------------------\n";

        cout << "substraction is =" << num1 - num2 << endl;
        cout << "--------------------------------------\n";

        cout << "multiplication is =" << num1 * num2 << endl;
        cout << "--------------------------------------\n";

        cout << "division is =" << fixed <<std::setprecision(2) << (float)num1 /(float)num2 <<  endl;
        cout << "--------------------------------------\n";

        cout << "modulo is = " << num1 % num2 << endl;
    }
};
int main()
{
    opreturs op;
    op.calculte();

    return 0;
}
