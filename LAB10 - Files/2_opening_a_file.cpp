#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream ofile;
    ofile.open("firstinputfile.dat");

    ofile << "This is a line in the file" << endl;
    ofile << "This is the second line in the file" << endl;

    cout << "Data written in the file" << endl;

    ifstream ifile;
    cout << "Reading data from a file:-" << endl;
    char ch;
    while (!ifile.eof())
    {
        ifile.get(ch);
        ifile >> ch;
        cout << ch << endl;
        ifile.close();
        return 0;
    }
}