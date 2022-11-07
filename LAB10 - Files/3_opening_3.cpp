#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    char data[100];
    ofstream ofile;
    ofile.open("file.dat");

    ofile << "This is a line in the file" << endl;
    ofile << "This is the second line in the file" << endl;

    cout << "Data written in the file" << endl;
    ifstream ifile;
    ifile.open("file.dat");
    cout << "Reading data from a file:- \n";
    while (!ifile.eof())
    {
        ifile.getline(data, 100);
        cout << data << endl;
    }
    ifile.close();
    return 0;
}