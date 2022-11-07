#include <iostream>
using namespace std;

class Num
{
private:
    int num;

public:
    friend ostream &operator<<(ostream &out, const Num &n);
    friend istream &operator>>(istream &in, Num &n);
    friend bool &operator==(const Num &n1, Num &n2);
};

ostream &operator<<(ostream &out, const Num &n)
{
    out << n.num << endl;
    return out;
}

istream &operator>>(istream &in, Num &n)
{
    cout << "\nEnter the number: ";
    in >> n.num;
    return in;
}

bool &operator==(const Num &n1, Num &n2)
{
    if (n1 == n2)
        cout << "The numbers are equal";
    else
        cout << "The numbers are not equal";
}

int main()
{
    Num n1;
    cin >> n1;
    cout << "The first number input is: ";
    cout << n1;
    Num n2; 
    cin >> n2;
    cout << "The second number input is: ";
    cout << n2;

    if (n1==n2)
    cout << "The numbers are equal";
    else
    cout<<"The numbers are not equal";
    return 0;
}
