// Write a program of structure employee that provides the following information -print and display empno, empname, address and age

#include <stdio.h>
#include <string.h>

struct employee
{
    int Empno;
    char Empname[50];
    int Empage;
    char Empaddress[100];
};
int main()
{
    int num;
    printf("Enter number of employee: ");
    scanf("%d", &num);
    struct employee Emp[num];
    for (int i = 0; i < num; i++)
    {
        printf("\nenter your no.%d employee detail", i + 1);
        printf("\nEmp No: ");
        scanf("%d", &Emp[i].Empno);
        printf("Emp Name: ");
        scanf(" ");
        gets(Emp[i].Empname);
        printf("Emp Age: ");
        scanf("%d", &Emp[i].Empage);
        printf("Emp Address: ");
        scanf(" ");
        gets(Emp[i].Empaddress);
        printf("\n");
    };
    for (int i = 0; i < num; i++)
    {
        printf("\nenter your no.%d employee detail", i + 1);
        printf("\nEmp no: %d", Emp[i].Empno);
        printf("\nEmp name: %s", Emp[i].Empname);
        printf("\nEmp age: %d", Emp[i].Empage);
        printf("\nEmp address: %s", Emp[i].Empaddress);
        printf("\n");
    }

    return 0;
}