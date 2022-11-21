#include <iostream>
using namespace std;
template <typename T>
void fun(T a)
{
    cout << "The main template fun():" << a;
}

template <>
void fun<int>(int a)
{
    cout << "Special template for int type: " << a;
}

template <typename Test>
template <>
class Test<int>
{
public:
    Test()
    {
        cout << "Specialised template object: \n";
    }
};

int main()
{

}