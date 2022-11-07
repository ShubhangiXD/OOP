#include <iostream>
using namespace std;

class Num
{
private:
    int num;

public:
    friend ostream &operator<<(ostream &out, const Num &n);
    friend istream &operator>>(istream &in, Num &n);
    void operator-()
    {
        num = -num;
        cout << "The negated number is: " << num;
    }
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

int main()
{
    Num n1;
    cin >> n1;
    cout << "The number input is: ";
    cout << n1;
    -n1;
    return 0;
}
