#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;
int main()
{
    float a, b, c;
    float area, area1, s;
    cout << "Enter side a of the triangle \n";
    cin >> a;
    cout << "Enter side b of the triangle \n";
    cin >> b;
    cout << "Enter side c of the triangle \n";
    cin >> c;
    s = (a + b + c) / 2;
    area = sqrt(s*(s - a) * (s - b) * (s - c));
    cout << "The area of the triangle computed using Heron's formula is: " << area;
    return 0;
}