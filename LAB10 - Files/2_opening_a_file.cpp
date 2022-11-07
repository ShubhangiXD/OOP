#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    char line[100];
    fstream file;
    file.open("firstinputfile.txt");
    cout << "Enter a line: ";
    cin.getline(line, 100);
    file << line << endl;
    cout << "Line written onto file.\n";
    cout << "Data written in the file." << endl;
    cout << "Reading data from a file:-" << endl;
    char ch;
    while (!file.eof())
    {
        file.get(ch);
        file >> ch;
        cout << ch << endl;
        file.close();
        return 0;
    }
}