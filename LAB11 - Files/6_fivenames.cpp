#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    char data[100];
    ofstream ofile;
    ofile.open("file.txt");

    for (int i = 0; i < 5; i++)
    {
        string name;
        cout << "Enter a name: \n";
        cin >> name;
        ofile << name;
        ofile << "\n";
        name = " ";
    }
    cout << "Data written in the file" << endl;
    ofile.close();
    ifstream ifile;
    ifile.open("file.txt");
    cout << "Reading data from a file:- \n";
    while (!ifile.eof())
    {
        ifile.getline(data, 100);
        cout << data << "\n"
             << endl;
    }
    ifile.close();

    cout << "Using seekg() function: ";
    fstream file;
    file.open("file.txt", ios::in | ios::out);
    int ch;
    cout << "Enter the line number to seek: \n";
    cin >> ch;
    file.seekg(ch, ios::beg);
    char a[10];
    file.read(a, 5);
    a[5] = 0;
    cout << a << endl;
    file.close();
    return 0;
}