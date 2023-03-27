// Assume that the test results of a batch of students are stored in three different classes. Class Students are storing the roll number. Class Test stores the marks obtained in two subjects and class result contains the total marks obtained in the test. The class result can inherit the details of the marks obtained in the test and roll number of students. (Multilevel Inheritance)

#include <iostream>
#include <stdio.h>
using namespace std;
class students
{
public:
    string Name;
    int Rollno;
    void inputdeta()
    {
        cout << "::::::::::::::::::::::::::::::\n";
        cout << "Enter student name : ";
        cin >> Name;
        cout << "Enter student rollno : ";
        cin >> Rollno;
        cout << "::::::::::::::::::::::::::::::\n";

        cout << "------------------------------\n";

        cout << "[:::::: Students Marks ::::::]\n";
        cout << "Student Name: " << Name << endl;
        cout << "Student Roll no : " << Rollno << endl;

        cout << "------------------------------\n";
    }
};
class Exam : public students
{
public:
    int Totalmarks = 0;
    float percentage;
    int marks[5];
    void inputmarks()
    {
        int i;
        cout << " percentage is : \n";
        cout << "Enter 5 subject marks :\n";
        for (int i = 0; i < 5; i++)
        {
            cout << "\nEnter subject marks" << i + 1 << " : ";
            cin >> marks[i];
            Totalmarks += marks[i];
        }
        percentage = (Totalmarks * 100) / (float)500;
        // cout << "five subject marks is : " << marks[i] << endl;
    }
};
class Result : public Exam
{
public:
    int i;
    float avrage;
    void calculet()
    {
        avrage = Totalmarks / 5;

        cout << "Total Marks = " << Totalmarks << endl;
        cout << "percentage = " << percentage << endl;
        cout << "Average marks = " << avrage << endl;
    }
};
int main()
{
    int num;
    cout << "Enter number of student : ";
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        Exam e;
        e.inputdeta();

        Result r;
        r.inputmarks();
        r.calculet();
    }
    
}