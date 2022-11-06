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
};

class calculate : public test
{
public:
    int tot_marks, perc;

    void cal()
    {
        tot_marks = s + m + e + h + g;
        perc = (tot_marks / 250) * 100;
    }

    void display()
    {
        get_in();
        store();
        cal();
        cout << "The details of the student is: \n";
        cout << "The name of the student is: " << name << endl;
        cout << "The roll number and age of the student is: " << roll << "\t" << age << "\n \n";
        cout << "The marks of the student is: \n";
        cout << "Science: " << s << endl;
        cout << "Maths: " << m << endl;
        cout << "English: " << e << endl;
        cout << "History: " << h << endl;
        cout << "Geography: " << g << endl;
        cout << "\nThe total marks of the student is: " << tot_marks << endl;
        cout << "The percentage of the student is: " << perc << endl;
    }
};

int main()
{
    calculate obj;
    obj.display();
    return 0;
}
