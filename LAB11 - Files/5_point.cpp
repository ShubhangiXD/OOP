// Create a class “Point” with member variables x and y.
// Create n number objects of type Point and WAP to read/write class objects from/to file “Point.dat”.

#include <iostream>
#include <fstream>
using namespace std;

class Point
{
    int x, y;

public:
    void getdata()
    {
        cout << "Enter the value of x: ";
        cin >> x;
        cout << "Enter the value of y: ";
        cin >> y;
    }
    void putdata()
    {
        cout << "The value of x is: " << x << endl;
        cout << "The value of y is: " << y << endl;
    }
};
int main()
{
    Point p[3];
    fstream ofile;
    ofile.open("Point.txt", ios::out);
    for (int i = 0; i < 3; i++)
    {
        p[i].getdata();
        ofile.write((char *)&p[i], sizeof(p[i]));
    }
    ofile.close();
    ofile.open("Point.txt", ios::in);
    for (int i = 0; i < 3; i++)
    {
        ofile.read((char *)&p[i], sizeof(p[i]));
        p[i].putdata();
    }
    ofile.close();
    return 0;
}