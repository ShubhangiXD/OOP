#include <iostream>
#include <cmath>
using namespace std;

class dist_take
{
private:
    double f1, i1, f2, i2;
    double distf, disti, dist;
    int temp;

public:
    void input_dist(void);
    void calc_dist(void);
    void disp_dist(void);
};

void dist_take::input_dist()
{
    cout << "Enter the first distance in feet and inches: ";
    cin >> f1 >> i1;
    if (i1 > 12)
    {
        temp = i1 / 12;
        f1 = f1 + temp;
        i1 = i1 - (temp * 12);
    }
    cout << "The first distance you have entered is: " << f1 << " feet and " << i1 << " inches. \n";
    cout << "Enter the second distance in feet and inches: ";
    cin >> f2 >> i2;
    if (i2 > 12)
    {
        temp = i2 / 12;
        f2 = f2 + temp;
        i2 = i2 - (temp * 12);
    }
    cout << "The second distance you have entered is: " << f2 << " feet and " << i2 << " inches. \n";
}

void dist_take::calc_dist()
{
    distf = f1 + f2;
    disti = i1 + i2;
    if (disti > 12)
    {
        temp = i2 / 12;
        distf = distf + temp;
        disti = disti - (temp * 12);
    }
}

void dist_take::disp_dist()
{
    cout << "The sum of the two distances is: " << distf << " feet and " << disti << " inches.";
}
int main()
{
    dist_take obj;
    obj.input_dist();
    obj.calc_dist();
    obj.disp_dist();
    return 0;
}