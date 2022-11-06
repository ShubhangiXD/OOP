#include <iostream>
using namespace std;

class complex
{
    int real;
    int img;

    public:
    void getdata()
    {
        cout << "Enter Real Part: ";
        cin >> real;
        cout << "Enter Imaginary Part: ";
        cin >> img;
    }
    void display()
    {
        static int n = 1;
        cout << "Number " << n++ << " : " << real << "+" << img << "i" << endl;
    }
};

int main()
{
    complex ob[10];
    for (int i = 0; i < 10; i++)
    {
        ob[i].getdata();
    }
    cout << "The complex numbers are: " << endl;
    for (int i = 0; i < 10; i++)
    {
        ob[i].display();
    }
    return 0;
}