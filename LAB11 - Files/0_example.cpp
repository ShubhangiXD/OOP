#include <iostream>
#include <fstream>
using namespace std;

class A
{
private:
    char name[40];
    int age;
    float height;
    char gender;

public:
    void putdata();
    void getdata();
};

void A::putdata()
{
    cout << "Enter the name: \n";
    cin.getline(name, 40);
    cout << "Enter the age: \n";
    cin >> age;
    cout << "Enter the height: \n";
    cin >> height;
    cout << "Enter the gender: \n";
    cin >> gender;
}

void A::getdata()
{
    cout << "The name is: " << name << endl;
    cout << "The age is: " << age << endl;
    cout << "The height is: " << height << endl;
    cout << "The gender is: " << gender << endl;
}

int main()
{
    ofstream ofile;
    ofile.open("Text.dat");
    A ob1;
    ob1.putdata();
    ofile.write((char *)&ob1, sizeof(ob1));
    cout << "Your object is successfully written on file.";
    ofile.close();

    ifstream ifile;
    ifile.open("Text.dat", ios::in);
    A ob2;
    cout << "Reading the object from a file.\n";
    ifile.read((char *)&ob2, sizeof(ob2));
    ob2.getdata();
    ifile.close();
    return 0;
}