#include <iostream>
#include <math.h>
using namespace std;

class shape
{
public:
    double arc, art;
    int arre;
    int rad, rea, reb, tra, trb, trc;
};

class circle : public shape
{
public:
    void get_arc()
    {
        cout << "Enter the radius of the circle: \n";
        cin >> rad;
    }
    void circ_area()
    {
        arc = 3.14 * rad * rad;
        cout << "Area of the circle= " << arc << " units." << endl;
    }
};

class rectangle : public shape
{
public:
    void get_arre()
    {
        cout << "Enter the sides of a rectangle: \n";
        cin >> rea >> reb;
    }

    void rect_area()
    {
        arre = rea * reb;
        cout << "Area of the rectangle= " << arre << " units." << endl;
    }
};

class triangle : public shape
{
public:
    double s;
    void get_art()
    {
        cout << "Enter the sides of a triangle: \n";
        cin >> tra >> trb >> trc;
        s = (tra + trb + trc) / 2;
    }

    void tri_area()
    {
        art = sqrt(s * (s - tra) * (s - trb) * (s - trc));
        cout << "Area of the triangle= " << art << " units." << endl;
    }
};

class show : virtual public shape, public circle, public triangle, public rectangle
{
public:
    void display()
    {
        get_arc();
        get_art();
        get_arre();
        circ_area();
        tri_area();
        rect_area();
    }
};

int main()
{
    show obj;
    obj.display();
    return 0;
}