#include <iostream>
using namespace std;

class student
{
public:
    string name;
    int roll, age, sem;

    void get_in()
    {
        cout << "Enter name of the student: \n";
        cin >> name;
        cout << "Enter the age and the roll number of the student: \n";
        cin >> roll >> age;
        cout << "Enter the semester of the student: \n";
        cin >> sem;
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

class sports : public test
{
public:
    int s_mark;
    int tot_marks, perc;

    void cal()
    {
        store();
        tot_marks = s + m + e + h + g;
        perc = ((tot_marks + s_mark) / 300) * 100;
        cout << "The marks of the student is: \n";
        cout << "Science: " << s << endl;
        cout << "Maths: " << m << endl;
        cout << "English: " << e << endl;
        cout << "History: " << h << endl;
        cout << "Geography: " << g << endl;
        cout << "Sports Activity: " << s_mark << endl;
        cout << "Total marks in academics: " << tot_marks << endl;
        cout << "Percentage including sports activity: " << perc << endl;
    }
};

class result : public test, public sports
{
public:
    void display()
    {
        get_in();
        cout << "The details of the student is: \n";
        cout << "The name of the student is: " << name << endl;
        cout << "The roll number and age of the student is: " << roll << "\t" << age << endl;
        cal();
    }
};

int main()
{
    result obj;
    obj.display();
    return 0;
}
