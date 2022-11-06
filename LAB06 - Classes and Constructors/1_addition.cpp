#include <iostream>
using namespace std;
class B;
class A
{
public:
    int value1;
    friend void sum(A &x, B &y);
};
class B
{
public:
    int value2;
    void indata();
    void display();
    friend void sum(A &x, B &y);
};

void indata(A &x, B &y)
{
    cout << "Enter first value: ";
    cin >> x.value1;
    cout << "Enter second value: ";
    cin >> y.value2;
}
void display(A &x, B &y)
{
    cout << "Value 1 : " << x.value1 << endl;
    cout << "Value 2 : " << y.value2 << "\n"
         << endl;
}
void sum(A &x, B &y)
{
    int sum;
    sum = x.value1 + y.value2;
    cout << "The sum of the two data members are= " << sum;
}

int main()
{
    A c1;
    B c2;
    indata(c1, c2);
    cout << "\nValues given are:" << endl;
    display(c1, c2);
    sum(c1, c2);
    return 0;
}