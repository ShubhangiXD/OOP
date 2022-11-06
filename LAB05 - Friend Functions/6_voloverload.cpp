#include <iostream>
using namespace std;
class Vo
{
    int sacube, sbcube, scube;
    int rcyl, hcyl;
    double radsp;

public:
    int volume(int sacube, int sbcube, int scube)
    {
        int vol_cube = sacube * sbcube * scube;
        cout << "Volume of cuboid " << vol_cube << endl;
    }
    double volume(int rcyl, int hcyl)
    {
        double vol_cyl = 3.14 * rcyl * rcyl * hcyl;
        cout << "Volume of cylinder: " << vol_cyl << endl;
    }
    double volume(double radsp)
    {
        int vol_sph = (4 / 3) * 3.14 * radsp * radsp * radsp;
        cout << "Volume of sphere: " << vol_sph << endl;
    }
};

int main()
{
    Vo obj;
    int sacube1, sbcube1, scube1;
    int rcyl1, hcyl1;
    double radsp1;
    cout << "Enter the sides of the cuboid: ";
    cin >> sacube1 >> sbcube1 >> scube1;
    cout << "Enter the height and radius of a cylinder: ";
    cin >> rcyl1 >> hcyl1;
    cout << "Enter the radius of a sphere: ";
    cin >> radsp1;

    obj.volume(sacube1, sbcube1, scube1);
    obj.volume(rcyl1, hcyl1);
    obj.volume(radsp1);

    return 0;
}