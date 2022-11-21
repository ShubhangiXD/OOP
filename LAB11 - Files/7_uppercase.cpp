#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream of;
    of.open("abc.txt", ios::out);
    string c;
    cout << "Enter the contents of the file: " << endl;
    cin >> c;
    of << c;
    of << "\n";
    of.close();

    ifstream iff;
    iff.open("abc.txt");
    char ch;
    int i = 0;
    while (!iff.eof())
    {
        iff.get(ch);
        if (ch >= 65 && ch <= 90)
        {
            ch += 32;
        }
        else if (ch >= 97 && ch <= 122)
            ch -= 32;
        cout << ch;
    }
    iff.close();
}