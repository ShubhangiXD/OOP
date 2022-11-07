#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    char line[100];
    fstream file;
    file.open("file.txt", ios::out | ios::app);
    if (file.fail())
    {
        cout << "Error opening file.." << endl;
    }

    else
    {
        cout << "Enter a line: ";
        cin.getline(line, 100);
        file << line << endl;
        cout << "Line written onto file.\n";
    }
    file.close();
    return 0;
}