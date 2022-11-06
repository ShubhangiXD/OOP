#include <iostream>
#include <cmath>
using namespace std;

class coord
{
    private:
    double x1, x2, y1, y2;
    double dist;
    public:
    void input_coord(void);
    void calc_dist(void);
};

void coord::input_coord(void)
{
    cout << "Enter the x and y values of the first point.";
    cin>> x1 >> y1;
    cout << "Enter the x and y values of the second point.";
    cin >> x2 >> y2;
}

void coord::calc_dist(void)
{
    dist = sqrt (pow((x2 - x1), 2) + (pow((y2 - y1),2)));
    cout << dist << " units.";
}

int main()
{
    coord pt;
    pt.input_coord();
    cout << "The distance between the two points is: ";
    pt.calc_dist();
    return 0;
}