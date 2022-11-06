#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter Two Numbers:";
    cin >> a >> b;

    cout << "Before swapping.";
    cout << "a = " << a << ", b = " << b << endl;

    c = a;
    a = b;
    b = c;

    cout << "\nAfter swapping.";
    cout << "a = " << a << ", b = " << b << endl;
    return 0;
}