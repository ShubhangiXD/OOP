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
    friend void sum(Complex &c1, Complex &c2);
    friend void diff(Complex &c1, Complex &c2);
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

void sum(Complex &c1, Complex &c2)
{
    int sumr = c1.real + c2.real;
    int sumi = c1.img + c2.img;
    cout << "\nThe sum of the two complex numbers is: ";
    cout << sumr << " +i" << sumi;
}

void diff(Complex &c1, Complex &c2)
{
    int sumr = c1.real - c2.real;
    int sumi = c1.img - c2.img;
    cout << "\nThe difference of the two complex numbers is: ";
    cout << sumr << " +i" << sumi;
}

int main()
{
    Complex c1;
    Complex c2;
    cin >> c1;
    cout << "The first complex number is: ";
    cout << c1;

    cin >> c2;
    cout << "The second complex number is: ";
    cout << c2;

    sum(c1, c2);
    diff(c1, c2);
    return 0;
}
