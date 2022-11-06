#include <iostream>
using namespace std;

class time
{
    int hour, min;

public:
    time() // default constructor
    {
        hour = 0;
        min = 0;
        cout << "The default time input is: " << hour << ":" << min << endl;
    }

    time(int h, int m) // parameterised constructor
    {
        hour = h;
        min = m;
        cout << "The valued time input is: " << hour << ":" << min << endl;
    }

    time(const time &t) // copy constructor
    {
        hour = t.hour;
        min = t.min;
        cout << "The copied time input is: " << hour << ":" << min << endl;
    }
};

int main()
{
    time ti;
    time ti1(3, 52);
    time ti2 = ti1;
    return 0;
}