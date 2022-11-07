//write a program to overload the extraction and insertion operator to insert a and display a complex number from the user.
#include <iostream>
using namespace std;

class Complex
{
private:
    int real, img;

public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        img = i;
    }
    friend ostream &operator<<(ostream &out, const Complex &c);
    friend istream &operator>>(istream &in, Complex &c);
};

ostream &operator<<(ostream &out, const Complex &c)
{
    out << c.real;
    out << "+i" << c.img
        << endl;
    return out;
}

istream &operator>>(istream &in, Complex &c)
{
    cout << "Enter the real Part ";
    in >> c.real;
    cout << "Enter the imaginary Part ";
    in >> c.img;
    return in;
}

int main()
{
    Complex c1;
    cin >> c1;
    cout << "The complex object is ";
    cout << c1;
    return 0;
}
