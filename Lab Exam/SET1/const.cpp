#include <iostream>
using namespace std;

class time
{
    int hour, min, sec;

public:
    time() // default constructor
    {
        hour = 0;
        min = 0;
        sec = 0;
        cout << "The default time input is: " << hour << ":" << min << ":" << sec << endl;
    }

    time(int h, int m, int s) // parameterised constructor
    {
        hour = h;
        min = m;
        sec = s;
        cout << "The valued time input is: " << hour << ":" << min << ":" << sec << endl;
    }

    time(const time &t) // copy constructor
    {
        hour = t.hour;
        min = t.min;
        sec = t.sec;
        cout << "The copied time input is: " << hour << ":" << min << ":" << sec << endl;
    }
};

int main()
{
    time ti;
    time ti1(3, 52, 45);
    time ti2 = ti1;
    return 0;
}