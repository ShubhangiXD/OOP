// finding the maximum of two numbers using class template
#include <iostream>
using namespace std;
template <class T>
class mypair
{
    T a, b;

public:
    mypair(T first, T second)
    {
        a = first;
        b = second;
    }
    T getmax();
};

template <typename T>
T mypair<T>::getmax()
{
    T retval;
    retval = a > b ? a : b;
    return retval;
}

int main()
{
    mypair<int> myobject(100, 75);
    cout << "The larger number is: " << myobject.getmax();
    return 0;
}