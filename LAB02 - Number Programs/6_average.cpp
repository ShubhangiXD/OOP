#include <iostream>
using namespace std;
int main()
{
    double marks, sum, avg;
    for (int i = 1; i <= 10; i++)
    {
        cout << "Enter the marks of student " << i <<" ";
        cin >> marks;
        sum = sum + marks;
    }
    avg = sum / 10;
    cout << "The average marks of the class is: " << avg;
    return 0;
}