#include <iostream>
using namespace std;
class cube1
{
    int cube;
    int num;

public:
    void acc_num(int n)
    {
        num = n;
    }
    friend void get_cube(cube1 c1);
};

void get_cube(cube1 c1)
{
    long cube = c1.num * c1.num * c1.num;
    cout << cube << endl;
}

int main()
{
    cube1 c1;
    int lim;
    cout << "Enter the number up to which you want cubes till: \n";
    cin >> lim;
    cout << "The cubes are: \n";
    for (int i = 1; i <= lim; i++)
    {
        c1.acc_num(i);
        get_cube(c1);
    }
}