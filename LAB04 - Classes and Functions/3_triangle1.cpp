#include <iostream>
#include <math.h>
using namespace std;

class Triangle
{
public:
    void area();
    void perimeter();
    int l = 3;
    int b = 4;
    int h = 5;
};

void Triangle::area()
{
    float s = (l + b + h) / 2.0;
    float A = sqrt(s * (s - l)*(s - b)*(s - h));
    cout << "The area is: " << A << endl;
}

void Triangle::perimeter()
{
    int perimeter1 = l + b + h;
    cout << "The perimeter is: " << perimeter1 << endl;
}

int main()
{
    Triangle tr1;
    tr1.area();
    tr1.perimeter();
    return 0;
}