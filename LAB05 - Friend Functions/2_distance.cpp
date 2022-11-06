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
    if ((x.feet * 0.304) < y.meters)
        cout << "Distance in m/cm (" << y.meters << " m " << y.centi << " cm) "
             << "is more than in ft/in (" << x.feet << " ft " << x.inches << " in)." << endl;
    else
        cout << "Distance in ft/in (" << x.feet << " ft " << x.inches << " in) is more than in m/cm (" << y.meters << " m " << y.centi << " cm). " << endl;
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