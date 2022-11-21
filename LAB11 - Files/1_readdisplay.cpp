#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    string data;
    ofstream ofile;
    ofile.open("text2.txt");

    cout << "To write on the file: \n";
    cout << "Enter data: \n";
    getline(cin, data);
    ofile << data << endl;
    ofile.close();

    ifstream ifile;
    ifile.open("text2.txt");
    cout << "Reading data from file: \n";
    getline(ifile, data);
    cout << data << endl;
    ifile.close();
    return 0;
}