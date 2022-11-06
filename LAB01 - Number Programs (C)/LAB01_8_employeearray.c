#include <stdio.h>
struct employee
{
    char name[20];
    char address[30];
    int age;
    int salary;
};
int main()
{
    int n;
    float avg;
    printf("The number of employee data you need \n");
    scanf("%d", &n);
    struct employee emp[n];
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter the name of an employee: ");
        scanf(" %[^\n]s", emp[i].name);
        printf("\nEnter the address of an employee: ");
        scanf(" %[^\n]s", emp[i].address);
        printf("\nEnter the age of an employee: ");
        scanf("%d", &emp[i].age);
        printf("\nEnter the salary of an employee: ");
        scanf("%d", &emp[i].salary);
    }
    for (int i = 0; i < n; i++)
    {
        avg += emp[i].salary;
    }
    printf("\nThe average salary is %f", (avg / n));
    return 0;
}