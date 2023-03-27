/*
Define a class to represent a bank account. Include the following members:
1. Data Member:
-Name of the depositor
-Account Number
-Type of Account
-Balance amount in the account

2. Member Functions
-To assign values
-To deposited an amount
-To withdraw an amount after checking balance
-To display name and balance
*/
#include<iostream>
using namespace std;

class bank
{
public:
    double acno;
    float balance;
    string name;
    string actype;

    void information()
    {
        cout << "\nenter account type (saving,current,demet) : ";
        cin >> actype;
        cout << "\naccount blance deposit : ";
        cin >> balance;
    }
    void deposit()
    {
        int depositamount;

        cout << "\nenter the amount of deposit :";
        cin >> depositamount;
        balance = balance + depositamount;
        cout << "\ndeposit saccussful :";
        cout << "\n---your current blance is---:" << balance;
    }
    void withdraw()
    {
        int withdraw;

        cout << "\nyour new blance is ::" << balance ;
        cout << "\nwithdraw amount : ";
        cin >> withdraw;
        if (balance >= withdraw)
        {
            balance = balance - withdraw;
            cout<< "\nprocessing :::: current blance : << blance";
        }
        else if (balance <= withdraw)
        {
            cout << "sorry cant withdraw amount pleas enter more then amount balance : " << balance;
        }
        else
        {
            cout << "you are exit";
        }
    }
    void display()
        {
            cout << "\n---------------------------------";
            cout << "\nname :" << name;
            cout << "\naccount no :" << acno;
            cout << "\naccount type :" << actype;
            cout << "\naccount balance :" << balance;
            cout << "\n---------------------------------";
        }
};
int main()
{
    long long int acno;
    float balance;
    string name;
    string actype;

    bank nrv;
    int choice;
    cout << "-----------Wellcome-----------\n";
    cout << "Enter account holder detail";
    cout << "\naccount holder name : ";
    getline(cin, name);
    cout << "enter account number : ";
    cin >> acno;
    cout << "\nenter type of account(saving,current,demet) : ";
    cin >> actype;

    moreinfo:
    cout << "****************************************************";
    cout << "\n1) information \n2) deposit \n3) withdraw \n4) display ::: ";
    cin >> choice;
    cout << "****************************************************";

    switch (choice)
    {
    case 1 :

        nrv.information();

        break;
    
    case 2 :
    
        nrv.deposit();

        break;

        case 3 :
    
        nrv.withdraw();

        break;

        case 4 :
    
        nrv.display();

        break;

    default:
        cout << "sorry ";
        break;
    }
    cout << "\ndo you want to choice \n press 1 \n press 2 :\n";
    cin >> choice;

    if (choice == 1)
    {
        goto moreinfo;
    }
    else if (choice == 2)
        goto exit;

exit:
    cout << "----(thank you for visit over bank)----";

    return 0;

}                                       
