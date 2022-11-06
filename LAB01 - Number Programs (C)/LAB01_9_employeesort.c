#include <stdio.h>
#include <string.h>
struct employee
{
    char name[20];
    char address[30];
    int salary;
};
int main()
{
    struct employee emp[5];
    for (int i = 0; i < 5; i++)
    {
        printf("\nEnter the name of an employee: ");
        scanf(" %[^\n]s", emp[i].name);
        printf("\nEnter the address of an employee: ");
        scanf(" %[^\n]s", emp[i].address);
        printf("\nEnter the salary of an employee: ");
        scanf("%d", &emp[i].salary);
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (strcmp(emp[i].name, emp[j].name) > 0)
            {
                struct employee s = emp[i];
                emp[i] = emp[j];
                emp[j] = s;
            }
        }
    }
    printf("\nThe sorted order of names are:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("\nname: %s,address:%s,salary:%d", emp[i].name, emp[i].address, emp[i].salary);
    }

    return 0;
}