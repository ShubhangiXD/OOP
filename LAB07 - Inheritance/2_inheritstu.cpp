#include <iostream>
using namespace std;

class student
{
public:
    string name;
    int roll, age;

    void get_in()
    {
        cout << "Enter name of the student: \n";
        cin >> name;
        cout << "Enter the age and the roll number of the student: \n";
        cin >> roll >> age;
    }
};

class test : public virtual student
{
public:
    int s, m, e, h, g;
    void store()
    {
        cout << "Enter the marks in 5 subjects: \n";
        cin >> s >> m >> e >> h >> g;
    }

    void display()
    {
        get_in();
        store();
        cout << "The details of the student is: \n";
        cout << "The name of the student is: " << name << endl;
        cout << "The roll number and age of the student is: " << roll << "\t" << age << endl;
        cout << "The marks of the student is: \n";
        cout << "Science: " << s << endl;
        cout << "Maths: " << m << endl;
        cout << "English: " << e << endl;
        cout << "History: " << h << endl;
        cout << "Geography: " << g << endl;
    }
};

int main()
{
    test obj;
    obj.display();
    return 0;
}
