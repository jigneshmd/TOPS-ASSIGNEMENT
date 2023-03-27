// Write a program of structure for five employee that provides the following information -print and display empno, empname, address and age

#include <stdio.h>
#include <string.h>

struct employee
{
    int id, salary, age;
    char name[50], add[100];
};

int main()
{
    int num;
    printf("how many employees: ");
    scanf("%d", &num);

    struct employee arr[num];

    for (int i = 0; i < num; i++)
    {
        printf("\nenter your no.%d employee detail", i + 1);
        printf("\nenter employee id :");
        scanf("%d", &arr[i].id);

        printf("enter employee name :");
        // scanf("%s",arr[i].name);
        gets(arr[i].name);
        gets(arr[i].name);

        printf("enter employee salary :");
        scanf("%d",&arr[i].salary);

        printf("enter employee Address :");
        // scanf("%s",&arr[i].add);
        gets(arr[i].add);
        gets(arr[i].add);

        printf("enter employee age :");
        scanf("%d", &arr[i].age);

    }
    printf("*******************************************************************************************************\n");

    printf("id\t\tname\t\t\tsalary\t\t\tadd\t\t\tage\n");

    for (int i = 0; i < num; i++)
    {
        printf("%d\t\t%s\t\t%d\t\t%s\t\t%d\n", arr[i].id, arr[i].name, arr[i].salary, arr[i].add, arr[i].age);
        // printf("\nEmp no: %d", arr[i].id);
        // printf("\nEmp name: %s", arr[i].salary);
        // printf("\nEmp age: %d", arr[i].age);
        // printf("\nEmp age: %d", arr[i].name);
        // printf("\nEmp address: %s", arr[i].add);
    }
    printf("*******************************************************************************************************");

    return 0;
}