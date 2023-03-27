// wap to show difference between structure and union

#include <stdio.h>
struct EMP1
{
    char empname[50];
    int empid;
    int empsalary;
};
union EMP2
{
    char empname[50];
    int empid;
    int empsalary;
};

int main()
{
    struct EMP1 s;
    union EMP2 u;

    printf("\nsize of stucture : %d\n", sizeof(s));
    printf("size of structure EMP1 name:%d\n", sizeof(s.empname));
    printf("size of structure EMP1 id: %d\n", sizeof(s.empid));
    printf("size of structure EMP1 id: %d\n", sizeof(s.empid));

    printf("\nsize of union : %d\n", sizeof(u));
    printf("size of union persion name: %d\n", sizeof(u.empname));
    printf("size of union persion roll no: %d\n", sizeof(u.empid));
    return 0;
}