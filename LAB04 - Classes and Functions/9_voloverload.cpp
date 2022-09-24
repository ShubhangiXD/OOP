#include <iostream>
using namespace std;
class Vo
{
    int scube;
    int rcyl, hcyl;
    double radsp;

public:
    int volume(int scube)
    {
        int vol_cube = scube * scube * scube;
        cout << "Volume of cube: " << vol_cube << endl;
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
    int scube1;
    int rcyl1, hcyl1;
    double radsp1;
    cout << "Enter the sides of a cube: ";
    cin >> scube1;
    cout << "Enter the height and radius of a cylinder: ";
    cin >> rcyl1 >> hcyl1;
    cout << "Enter the radius of a sphere: ";
    cin >> radsp1;

    obj.volume(scube1);
    obj.volume(rcyl1, hcyl1);
    obj.volume(radsp1);

    return 0;
}