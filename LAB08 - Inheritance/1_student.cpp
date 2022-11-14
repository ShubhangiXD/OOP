// create a class student with data member roll no., it will accept and display the roll no of the student. Derive a class
// test from the student class to take marks in two subjects and display them, create a class sports, which will take score
// as its data member and will accept the display the score of the student in sports.
// Derive a class result from both test and sports and include a member fn display in it which will display the roll no, marks
// and score of the student. Include default constructor in all the classes, to check the order of invocation of the constructors.
#include <iostream>
using namespace std;

class student
{
public:
    int roll;   
    student()
    {
        roll = 0;
    }
    student(int rn)
    {
        roll = rn;
    }
    void get_roll()
    {
        int r;
        cout << "Enter the roll number of the student." << endl;
        cin >> r;
        student(r);
        cout << "The roll number of the student is: " << roll;
    }
};

class test : public student
{
    int mark1, mark2;

public:
    test()
    {
        mark1 = 0;
        mark2 = 0;
    }
    test(int m1, int m2)
    {
        mark1 = m1;
        mark2 = m2;
    }
    void get_marks()
    {
        int ms, mm;
        cout << "Enter the marks in science: " << endl;
        cin >> ms;
        cout << "Enter the marks in math:" << endl;
        cin >> mm;
        test(ms, mm);
        cout << "The marks obtained in science and math is: " << mark1 << " " << mark2 << endl;
    }
};

class sports
{
    int score;

public:
    sports()
    {
        score = 0;
    }
    sports(int s)
    {
        score = s;
    }
    void get_score()
    {
        int sc;
        cout << "Enter the score in sports: " << endl;
        cin >> sc;
        sports(sc);
        cout << "The score in sports is: " << score << endl;
    }
};

class result : public test, public sports
{
public:
    void display()
    {
        sports objs;
        test objt;
    }
};

int main()
{
    result obj;
    return 0;
}