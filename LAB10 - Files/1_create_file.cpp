#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream ofile;
    ofile.open("firstinputfile.txt");

    ofile << "This is a line in the file" << endl;
    ofile << "This is the second line in the file" << endl;

    cout<<"Data written in the file"<<endl;
    ofile.close();
    return 0;
}