#include <iostream>
using namespace std;
class Student
{
    public:
    string name;
    int roll_no;

};

int main() 
{
    Student st1;    

    st1.name = "John";
    st1.roll_no = 2;

    cout << "Name: " << st1.name << endl;
    cout << "Roll Number: " << st1.roll_no << endl;
}