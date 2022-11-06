#include <iostream>
using namespace std;

class employee
{
public:
    string name;
    int id, sal;

    void get_deet()
    {
        cout << "Enter the name of the employee: \n";
        cin >> name;
        cout << "Enter the ID number of the employee: \n";
        cin >> id;
        cout << "Enter the salary of the employee: \n";
        cin >> sal;
    }
};

class regular : public employee
{
public:
    employee obj;
    int bas = obj.sal;
    int da, hra;
    void cal_da()
    {
        cout << "Enter the percentage of Dearness Allowance [DA] of an employee: \n";
        cin >> da;
        da = (da / 100) * bas;
        cout << "DA = " << da << "\n";
    }

    void cal_hra()
    {
        cout << "Enter the percentage of House Rate Allowance [HRA] of an employee: \n";
        cin >> hra;
        hra = (hra / 100) * bas;
        cout << "HRA = " << hra << "\n";
    }

    void display_ft()
    {
        get_deet();
        cal_da();
        cal_hra();
        sal = bas + sal;
        cout << "The salary of the full time employee is: " << sal;
    }
};

class parttime : public employee
{
public:
    int hrs, pph;
    int in_hrs()
    {
        cout << "Enter the hours worked: \n";
        cin >> hrs;
        cout << "Enter the pay per hour: \n";
        cin >> pph;
        sal = pph * hrs;
        return sal;
    }

    void display_pt()
    {
        get_deet();
        int disp = in_hrs();
        cout << "The salary of the part time employee is: " << disp;
    }
};

int main()
{
    regular objr;
    parttime objp;

    int c;
    cout << "Enter 1 if the employee works full time, enter 2 if the employee works part time: ";
    cin >> c;
    if (c == 1)
    {
        objr.display_ft();
    }
    else if (c == 2)
    {
        objp.display_pt();
    }
    else
        cout << "Invalid Input";
    return 0;
}