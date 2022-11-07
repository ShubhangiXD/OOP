#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

class Cube
{
private:
    double length, vol;

public:
    friend ostream &operator<<(ostream &out, const Cube &c);
    friend istream &operator>>(istream &in, Cube &c);
    friend void res(Cube &c1, Cube &c2);
};

ostream &operator<<(ostream &out, const Cube &c)
{
    out << c.vol;
    return out;
}

istream &operator>>(istream &in, Cube &c)
{
    cout << "\nEnter the length of the cube: ";
    in >> c.length;
    c.vol = c.length * c.length * c.length;
    return in;
}

void res(Cube &c1, Cube &c2)
{
    double reslen = c1.length + c2.length;
    double diff;
    if (c1.vol > c2.vol)
        diff = c1.vol - c2.vol;
    else
        diff = c2.vol - c1.vol;
    double resvol = reslen * reslen * reslen;
    cout << "\nThe volume of the resultant cube after adding all the lengths is: ";
    cout << resvol;

    cout << "The difference between the volumes of the two original cubes is: ";
    cout << diff;
}

int main()
{
    Cube c1;
    cin >> c1;
    cout << "\nThe volume of the first box is: ";
    cout << c1;

    Cube c2;
    cin >> c2;
    cout << "\nThe volume of the second box is: ";
    cout << c2;

    res(c1, c2);
    return 0;
}
