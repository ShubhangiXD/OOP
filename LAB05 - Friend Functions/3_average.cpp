#include <iostream>
using namespace std;

class student
{
    int avg;

public:
    string name;
    int roll;
    int total;
    void putAvg(int n)
    {
        avg = n;
    }
    friend void average(student s1);
};
void average(student s1)
{
    cout << "Average: " << s1.avg << endl;
}

int main()
{
    int n;
    float sm = 0;
    cout << "Enter the number of students: ";
    cin >> n;
    student s[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the name of student " << i + 1 << " : ";
        cin >> s[i].name;
        cout << "Enter the roll of student " << i + 1 << " : ";
        cin >> s[i].roll;
        cout << "Enter the total mark of student " << i + 1 << " : ";
        cin >> s[i].total;
        sm += s[i].total;
    }
    s[0].putAvg(sm / n);
    average(s[0]);
}