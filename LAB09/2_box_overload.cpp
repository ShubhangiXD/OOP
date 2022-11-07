#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

class Box
{
private:
    double height, width, length, vol;

public:
    friend ostream &operator<<(ostream &out, const Box &b);
    friend istream &operator>>(istream &in, Box &b);
};

ostream &operator<<(ostream &out, const Box &b)
{
    out << b.vol;
    return out;
}

istream &operator>>(istream &in, Box &b)
{
    cout << "Enter the height of the box: ";
    in >> b.height;
    cout << "Enter the width of the box: ";
    in >> b.width;
    cout << "Enter the length of the box: ";
    in >> b.length;
    b.vol = b.height * b.width * b.length;
    return in;
}

int main()
{
    Box b1;
    cin >> b1;
    cout << "The volume of the box is: ";
    cout << b1;
    return 0;
}
