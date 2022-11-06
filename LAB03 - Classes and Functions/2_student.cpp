#include <iostream>
using namespace std;

class student
{
private:
    char name[30];
    int roll;
    int total;
    float perc;

public:
    void get_deets(void);
    void show_deets(void);
};

void student::get_deets(void)
{
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter roll number: ";
    cin >> roll;
    cout << "Enter total marks outof 500: ";
    cin >> total;

    perc = (float)total / 500 * 100;
}

void student::show_deets(void)
{
    cout << "Student details:\n";
    cout << "Name:" << name << ",Roll Number:" << roll << ",Total:" << total << ",Percentage:" << perc;
}

int main()
{
    student std[50];
    int n, i;

    cout << "Enter total number of students: ";
    cin >> n;

    for (i = 0; i < n; i++)
    {
        cout << "Enter details of student " << i + 1 << ":\n";
        std[i].get_deets();
    }

    cout << endl;

    for (i = 0; i < n; i++)
    {
        cout << "Details of student: " << (i + 1) << ":\n";
        std[i].show_deets();
    }
    return 0;
}