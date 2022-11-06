#include <iostream>
using namespace std;
int main()
{
    int n;
    int sum = 0;
    cout << "Enter a number: \n";
    cin >> n;
    int copy = n;
    while (copy > 0)
    {
        int d = copy % 10;
        sum = sum + d;
        copy = copy / 10;
    }
    cout << "The sum of digits = "<< sum;
    return 0;
}