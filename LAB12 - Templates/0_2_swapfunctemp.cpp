//program to swap data using function templates
#include <iostream>
using namespace std;
template <typename T>
void Swap(T &n1, T &n2)
{
    T temp;
    temp = n1;
    n1 = n2;
    n2 = temp;
}

int main()
{
    int i1, i2;
    char c1, c2;
    cout << "Enter two values to Swap: \n";
    cin >> i1 >> i2;
    cout << "Enter two letter to Swap: \n";
    cin >> c1 >> c2;
    cout << "Before passing data through the template: \n";
    cout << "i1 = " << i1 << " i2 = " << i2 << endl;
    cout << "c1 = " << c1 << " c2 = " << c2 << endl;
    Swap<int>(i1, i2);
    Swap<char>(c1, c2);
    cout << "The values after passing data: \n";
    cout << "i1 = " << i1 << " i2 = " << i2 << endl;
    cout << "c1 = " << c1 << " c2 = " << c2 << endl;
    return 0;
}