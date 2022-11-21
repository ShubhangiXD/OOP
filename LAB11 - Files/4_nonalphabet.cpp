#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream of;
    of.open("abc.txt", ios::out);
    string str;
    cout << "Enter the contents of the file: " << endl;
    cin >> str;
    of << str;
    of << "\n";
    of.close();
    ifstream iff;
    iff.open("abc.txt");
    char ch;
    int c = 0;
    while (!iff.eof())
    {
        iff.get(ch);
        if ((ch >= 0 && ch < 65) || (ch > 90 && ch < 97) || (ch > 122))
            c++;
    }
    cout << "No of non-alphabetic characters" << c << endl;
    iff.close();
}