#include <iostream>
#include <math.h>
using namespace std;
class Ar
{
    int arec, brec;
    int atri, btri, ctri;
    double rad;

public:
    int area(int arec, int brec)
    {
        int ar_re = arec * brec;
        cout << "Area of rectangle: " << ar_re << endl;
    }

    int area(int atri, int btri, int ctri)
    {
        float s = (atri + btri + ctri) / 2.0;
        float A = sqrt(s * (s - atri) * (s - btri) * (s - ctri));
        cout << "The area of the triangle: " << A << endl;
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

    int a, b, c;
    cout << "Enter the sides of a triangle: ";
    cin >> a >> b >> c;
    obj.area(rad1);
    obj.area(arec1, brec1);
    obj.area(a, b, c);
    return 0;
}