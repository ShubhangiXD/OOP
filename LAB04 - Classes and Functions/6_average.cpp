#include <iostream>
using namespace std;

class Average
{
    int a1, b1, c1;
    double avg;

public:
    void getAverage()
    {
        cout << "Enter the three numbers: ";
        cin >> a1 >> b1 >> c1;
        avg = (a1 + b1 + c1) / 3.0;
    }
    void display()
    {
        static int n = 1;
        cout << "Average: " << avg << endl;
    }
};

int main()
{
    
}