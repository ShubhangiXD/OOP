#include <iostream>
using namespace std;
class Student
{
    public:
    string name;
    int roll_no;
    long phone_no;
    string address;
};

int main() 
{
    Student st1;
    Student st2;

    st1.name = "John";
    st1.roll_no = 2;
    st2.name = "Sam";
    st2.roll_no = 3;
    st1.phone_no = 839748;
    st1.address = "32 linkin park.";
    st2.phone_no = 287647;
    st2.address = "48 infocity ave.";

    cout << "Name: " << st1.name << endl;
    cout << "Roll Number: " << st1.roll_no << endl;
    cout << "Phone Number: " << st1.phone_no << endl;
    cout << "Address: " << st1.address<< endl;
    
    cout << "  " << endl;

    cout << "Name: " << st2.name << endl;
    cout << "Roll Number: " << st2.roll_no << endl;
    cout << "Phone Number: " << st2.phone_no << endl;
    cout << "Address: " << st2.address<< endl;
}