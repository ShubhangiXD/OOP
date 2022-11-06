#include <iostream>
#include <math.h>
using namespace std;
class reverse
{
    int num, rev = 0;

public:
    void acc_num(int n)
    {
        num = n;
    }
    friend int get_rev(reverse rev1);
};

int get_rev(reverse rev1)
{
    int r = rev1.rev;
    int n = rev1.num;
    int d;
    while (n != 0)
    {
        d = n % 10;
        r = r * 10 + d;
        n /= 10;
    }
    return r;
}

int main()
{
    reverse revv;
    int num1;
    cout << "Enter the number to be reversed: \n";
    cin >> num1;
    revv.acc_num(num1);
    int rev2 = get_rev(revv);
    cout << "The reverse of the number is: " << rev2 << endl;
    return 0;
}