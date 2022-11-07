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

class Father:virtual public Grandparent
{
    public:
    Father()
    {
        cout<<"Inside intermediate class 1 constructor.\n";
    }
    ~Father()
    {
        cout<<"Inside intermediate class 1 destructor.\n";
    }
};

class Mother:virtual public Grandparent
{
    public:
    Mother()
    {
        cout<<"Inside intermediate class 2 constructor.\n";
    }
    ~Mother()
    {
        cout<<"Inside intermediate class 2 destructor.\n";
    }
};

class Child: public Father, public Mother
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
