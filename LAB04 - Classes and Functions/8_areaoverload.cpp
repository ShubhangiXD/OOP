#include <iostream>
using namespace std;
class Ar
{
    int arec, brec;
    int asqr;
    double rad;

public:
    int area(int arec, int brec)
    {
        int ar_re = arec * brec;
        cout << "Area of rectangle: " << ar_re << endl;
    }

    int area(int asqr)
    {

        int ar_sq = asqr * asqr;
        cout << "Area of square: " << ar_sq << endl;
    }

    double area(double rad)
    {
        double ar_ci = 3.14 * rad * rad;
        cout << "Area of circle: " << ar_ci << endl;
    }
};

int main()
{
    Ar obj;
    double rad1;
    cout << "Enter the radius of a circle:";
    cin >> rad1;

    int arec1, brec1;
    cout << "Enter the sides of the rectangle: ";
    cin >> arec1 >> brec1;

    int asqr1;
    cout << "Enter the side of a square: ";
    cin >> asqr1;
    obj.area(rad1);
    obj.area(arec1, brec1);
    obj.area(asqr1);
    return 0;
}