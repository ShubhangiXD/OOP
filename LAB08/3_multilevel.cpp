#include <iostream>
using namespace std;
class Grandparent
{
    public:
    Grandparent()
    {
        cout<<"Inside base class constructor.\n";
    }
    ~Grandparent()
    {
        cout<<"Inside base class destructor.\n";
    }
};

class Parent:public Grandparent
{
    public:
    Parent()
    {
        cout<<"Inside intermediate class constructor.\n";
    }
    ~Parent()
    {
        cout<<"Inside intermediate class destructor.\n";
    }
};

class Child: public Parent
{
    public:
    Child()
    {
        cout<<"Inside derived class constructor.\n";
    }
    ~Child()
    {
        cout<<"Inside derived class destructor.\n";
    }
};

int main()
{
    Child ob;
    return 0;
}