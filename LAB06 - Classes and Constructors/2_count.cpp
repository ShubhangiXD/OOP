#include <iostream>
using namespace std;

class data
{
public:
    int x;

    static int input_count;
    static int output_count;
    void input();
    int output();
    int display();
};

int data::input_count = 0;
int data::output_count = 0;

void data::input()
{
    cout << "\nEnter the value of x: \n";
    cin >> x;
    input_count++;
}

int data::output()
{
    cout << "\nThe value of x is: \n" << x;
    output_count++;
}

int data::display()
{
    cout << "\nThe number of times the input function was called is: \n" << input_count;
    cout << "\nThe number of times the output function was called is: \n" << output_count;
}

int main()
{
    data d;
    d.input();
    d.output();
    d.input();
    d.output();
    d.display();
    return 0;
}