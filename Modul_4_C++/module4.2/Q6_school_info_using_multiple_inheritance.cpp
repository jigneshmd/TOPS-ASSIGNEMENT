// Create a class person having members name and age. Derive a class student having member percentage. Derive another class teacher having member salary. Write necessary member function to initialize, read and write data. Write also Main function (Multiple Inheritance)

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class person
{
public:
    string name;
    int age;

    void membersinput()
    {
        cout << "\nEnter member name : ";
        getline(cin, name);
        getline(cin, name);
        cout << "\nEnter member age : ";
        cin >> age;
    }
    void membersoutput()
    {
        cout << "Name : " << name << endl;
        cout << "age : " << age << endl;
    }
};
class student : public person
{
public:
    float percentage;
    int marks[7];
    int totalmarks = 0;
    int j = 1;
    void studentinput()
    {
        membersinput();
        int i;
        cout << "\n:::: percentage ::::\n";
        cout << "Enter 7 subject marks : ";
        for (int i = 0; i < 7; i++)
        {
            cout << "\nEnter subject marks " << i + 1 << " : ";
            cin >> marks[i];
            totalmarks += marks[i];
        }
        cout << "\nTotal marks --> : " << totalmarks;
    }
    void studentoutput()
    {
        cout << "\n|--------------------------------------|\n";
        cout << "Student details are :-->   \n";
        percentage = ((float)totalmarks / (float)700) * (float)100;

        cout << "percentage --> : " << fixed << setprecision(2) << percentage << endl;
        cout << "name \t\tage \t percentage \n";
        cout << name << "\t\t" << age << "   \t" << percentage;
        cout << "\n|--------------------------------------|\n";
    }
};
class teacher : public person
{
public:
    int salary;
    void teacherinput()
    {
        cout << "\nTeacher details-\n";
        membersinput();
        cout << "\nEnter teachers salary : ";
        cin >> salary;
    }
    void teacheroutput()
    {
        cout << "\n|--------------------------------------|\n";
        cout << "\nTeacher details are :\n";
        membersoutput();

        cout << "salary : " << salary;
        cout << "\nname \t age \t salary \n";
        cout << name << "\t--" << age << "\t--" << salary;
    }
};
int main()
{
    int num1, num2;
    cout << "Enter the student number of details : ";
    cin >> num1;
    student s[num1];

    for (int i = 0; i < num1; i++)
    {
        s[i].studentinput();
        s[i].studentoutput();
    }

    cout << "\n|--------------------------------------|\n";
    cout << "\nEnter the number of  teachers details : ";
    cin >> num2;
    teacher t[num2];

    for (int i = 0; i < num2; i++)
    {
        t[i].teacherinput();
        t[i].teacheroutput();
    }

    return 0;
}