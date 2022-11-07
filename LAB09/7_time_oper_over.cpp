#include <iostream>
#include <conio.h>

using namespace std;

class Time
{
private:
    double hour, minute, second;

public:
    friend ostream &operator<<(ostream &out, const Time &t);
    friend istream &operator>>(istream &in, Time &t);
};

ostream &operator<<(ostream &out, const Time &t)
{
    out << t.hour<<":"<< t.minute <<":"<<t.second;
}

istream &operator>>(istream &in, Time &t)
{
    cout << "Enter the hours: ";
    in >> t.hour;
    cout << "Enter the minutes: ";
    in >> t.minute;
    cout << "Enter the seconds: ";
    in >> t.second;
    return in;
}

int main()
{
    Time t1;
    cin >> t1;
    cout << "The time in hh:mm:ss is: \n ";
    cout << t1;
    return 0;
}
