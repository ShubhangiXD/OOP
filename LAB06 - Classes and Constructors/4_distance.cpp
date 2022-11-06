#include <iostream>
using namespace std;
class dist2;
class dist1
{
    int feet, inches;

public:
    void data1(int f, int i)
    {
        feet = f;
        inches = i;
    }
    friend void compare(dist1 &x, dist2 &y);
};

class dist2
{
    int meters, centi;

public:
    void data2(int m, int cm)
    {
        meters = m;
        centi = cm;
    }
    friend void compare(dist1 &x, dist2 &y);
};

void compare(dist1 &x, dist2 &y)
{
    int ftadd, metadd;
    if (x.inches > 12)
    {
        ftadd = x.inches / 12;
        x.inches = x.inches - (ftadd * 12);
        x.feet = x.feet + ftadd;
    }

    cout << "The corrected distance in feet and inches is: " << x.feet << "ft and " << x.inches << "in. \n";

    if (y.centi > 10)
    {
        metadd = y.centi / 10;
        y.centi = y.centi - (metadd * 10);
        y.meters = y.meters + metadd;
    }

    cout << "The corrected distance in meters and centimeters is: " << y.meters << "m and " << y.centi << "cm. \n";

    if ((x.feet * 0.304) < y.meters)
        cout << "Distance in m/cm (" << y.meters << " m " << y.centi << " cm) "
             << "is more than in ft/in (" << x.feet << " ft " << x.inches << " in)." << endl;

    else if ((x.feet * 0.304) > y.meters)
        cout << "Distance in ft/in (" << x.feet << " ft " << x.inches << " in) is more than in m/cm (" << y.meters << " m " << y.centi << " cm). " << endl;

    else
    {
        if ((x.inches * 0.984) > y.centi)
        cout << "Distance in ft/in (" << x.feet << " ft " << x.inches << " in) is more than in m/cm (" << y.meters << " m " << y.centi << " cm). " << endl;
        
        else if ((x.inches * 0.984) < y.centi)
        cout << "Distance in m/cm (" << y.meters << " m " << y.centi << " cm) "
             << "is more than in ft/in (" << x.feet << " ft " << x.inches << " in)." << endl;

        else
        cout << "The two distances are equal. \n";
    }
}

int main()
{
    dist1 d1;
    dist2 d2;
    int f1, in1, m1, cm1;
    cout << "Enter the distance in feet and inches: \n";
    cin >> f1 >> in1;
    cout << "Enter the distance in meters and centimeters: \n";
    cin >> m1 >> cm1;
    d1.data1(f1, in1);
    d2.data2(m1, cm1);
    compare(d1, d2);
    return 0;
}