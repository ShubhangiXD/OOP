#include <iostream>
using namespace std;
inline int cube(int n)
{
    return n * n * n;
}

inline int square(int n)
{
    return n * n;
}
int main()
{
    int num;
    cout << "Enter the a number: \n";
    cin >> num;
    cout << "The square of the number is: " << square(num) << "\n";
    cout << "The cube of the number is: " << cube(num) << "\n";
    return 0;
}