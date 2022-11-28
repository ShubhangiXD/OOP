//overloading -- and ++ operators
#include <iostream>
using namespace std;

class plusplus
{
private:
public:
    int A, B, C;
    friend ostream &operator<<(ostream &out, const plusplus &p);
    friend istream &operator>>(istream &in, plusplus &p);
    void operator--()
    {
        A = A - 1;
        B = B - 1;
        C = C - 1;
        cout << "The outputs after subtraction is as follows: \n";
        cout << "A = " << A;
        cout << "B = " << B;
        cout << "C = " << C;
    }
    void operator++()
    {
        A = A + 1;
        B = B + 1;
        C = C + 1;
        cout << "The outputs after addition is as follows: \n";
        cout << "A = " << A;
        cout << "B = " << B;
        cout << "C = " << C;
    }
};

ostream &operator<<(ostream &out, const plusplus &p)
{
    out << p.A << p.B << p.C;
    return out;
}

istream &operator>>(istream &in, plusplus &p)
{
    cout << "Enter the 3 numbers:\n ";
    in >> p.A >> p.B >> p.C;
    return in;
}

int main()
{
    plusplus obj;
    cin >> obj;
    cout << "The numbers input are: \n";
    cout << obj;
    --obj;
    ++obj;
    return 0;
}
