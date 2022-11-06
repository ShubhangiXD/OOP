#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number: \n";
    cin >> n;
    if (n%2==0)
    cout << "The number given is even.";
    else
    cout << "The number given is odd.";
    return 0;
}