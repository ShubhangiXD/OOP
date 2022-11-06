// WAP to create two classes and make 2 objects and swap the private data members of the two classes. The classes have no relation between each other.
#include <iostream>
using namespace std;
class class2;
class class1
{
    int value1;

public:
    void in_data(int a)
    {
        value1 = a;
    }
    void display(void)
    {
        cout << "The value of 'a' is: " << value1 << endl;
    }
    friend void exchange(class1 &x, class2 &y);
};

class class2
{
    int value2;

public:
    void in_data(int b)
    {
        value2 = b;
    }
    void display(void)
    {
        cout << "The value of 'b' is: " << value2 << endl;
    }
    friend void exchange(class1 &x, class2 &y);
};

void exchange(class1 &x, class2 &y)
{
    int temp = x.value1;
    x.value1 = y.value2;
    y.value2 = temp;
}

int main()
{
    class1 c1;
    class2 c2;
    c1.in_data(100);
    c2.in_data(200);

    cout << "The values before swapping are: \n";
    c1.display();
    c2.display();
    exchange(c1, c2);
    cout << "The values after swapping are: \n";
    c1.display();
    c2.display();
    return 0;
}