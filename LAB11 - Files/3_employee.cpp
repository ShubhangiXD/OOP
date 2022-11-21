#include <iostream>
using namespace std;

#include <fstream>
class employee
{
    char name[300];
    int age;
    int basic;

public:
    void putdata()
    {
        cout << "Enter the data \n";
        cin.getline(name, 50);
        cin >> age;
        cin >> basic;
    }
    void getdata()
    {
        cout << "Entered name is \n"
             << name;
        cout << "Entered age is \n"
             << age;
        cout << "entered the basic salarly" << basic;
    }
};
int main()
{
    ofstream p1;
    employee e;
    p1.open("testcase.txt", ios::out);
    e.putdata();
    p1.write((char *)&e, sizeof(e));
    p1.close();
    ifstream i1;
    i1.open("testcase.txt", ios::in);
    employee e2;
    i1.read((char *)&e2, sizeof(e2));
    e2.getdata();
    i1.close();
    return 0;
}