#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream of;
    of.open("abc.txt", ios::out);
    string c;
    cout << "Enter five different names: " << endl;
    for (int i = 1; i <= 5; i++)
    {
        cin >> c;
        of << c;
        of << "\n";
    }
    of.close();
    ifstream iff;
    iff.open("abc.txt");
    cout << "Enter the line you want to seek: \n";
    int n;
    cin >> n;
    iff.seekg(n, ios_base::beg);
    while (!iff.eof())
    {
        char ch;
        iff.get(ch);
        cout << ch;
    }
    iff.close();
}