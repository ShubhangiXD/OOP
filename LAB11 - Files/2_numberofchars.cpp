#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string data;
    ofstream ofile;
    ofile.open("text3.txt");

    cout << "To write on the file: \n";
    cout << "Enter data: \n";
    getline(cin, data);
    ofile << data << endl;
    ofile.close();

    char ch, str[1000];
    int char_total = 0, tot = 0, line_total, i = 0;
    ifstream ifile;
    ifile.open("text3.txt");
    while (ifile >> noskipws >> ch)
    {
        char_total++;
        str[tot] = ch;
        tot++;
    }
    ifile.close();
    str[tot] = '\0';
    while (str[i] != '\0')
    {
        if (str[i] == '\n')
            line_total++;
        i++;
    }
    line_total++;
    cout << "Total lines = \n" << line_total;
    cout << "Total characters = " << char_total-1;
    return 0;
}