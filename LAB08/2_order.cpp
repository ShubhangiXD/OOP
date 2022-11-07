#include <iostream>
using namespace std;
class Parent
{
    public:
    Parent()
    {
        cout<<"Inside base class.";
    }
    ~Parent()
    {
        cout<<"Inside base class destructor.";
    }
};

class Child: public Parent
{
    public:
    Child()
    {
        cout<<"Inside derived class constructor.";
    }
    ~Child()
    {
        cout<<"Inside derived class destructor.";
    }
};
int main()
{
    Child obj;
    return 0;
}