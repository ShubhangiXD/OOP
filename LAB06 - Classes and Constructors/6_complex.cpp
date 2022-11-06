#include <iostream>
using namespace std;

class complex
{
    int real;
    int img;

public:
    complex() // default constructor
    {
        real = 2;
        img = 3;
        cout << "The default complex number is: " << real << " + " << img << "i";
    }
    complex(int r, int i) // parameterised constructor
    {
        real = r;
        img = i;
        cout << "The parameterised complex number is: " << real << " + " << img << "i";
    }
    complex(complex &complex1) // copy constructor
    {
        real = complex1.real;
        img = complex1.img;
        cout << "The copied complex number is: " << real << " + " << img << "i";
    }
    ~complex()
    {
        cout << "\nDestructor is invoked.";
    }
};

int main()
{
    complex com;
    complex com1(24, 32);
    complex com2 = com1;
    return 0;
}