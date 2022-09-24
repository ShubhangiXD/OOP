#include <iostream>
using namespace std;
class Area
{
    int arec, brec;

public:
    int getArea(int arec, int brec)
    {
        int ar_re = arec * brec;
        return ar_re;
    }
    int setDim(int arec, int brec)
    {
        cout << "Enter the sides of the rectangle: ";
        cin >> arec >> brec;
    }
};

int main()
{
    Area obj;
    int len1, brth1;
    obj.setDim(len1, brth1);
    int area2 = obj.getArea(len1, brth1);
    cout << "Area of the rectangle: " << area2 << endl;
    return 0;
}