#include <iostream>
using namespace std;
int main()
{
    int n, fact;
    cout << "Enter a number: \n";
    cin >> n;
    fact = n;
    while (n != 1)
    {
        fact = fact * (n - 1);
        n--;
    }
    cout << "The factorial of the number is: " << fact;
    return 0;
}