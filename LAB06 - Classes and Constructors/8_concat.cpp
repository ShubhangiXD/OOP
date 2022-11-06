#include <iostream>
using namespace std;

class string1
{
public:
    string s;
    int l;
    string1()
    {
        cout << "Default constructor invoked. \n";
    }

    string1(string a)
    {
        s = a;
        l = a.length();
    }

    string1(string1 &c)
    {
        s = c.s;
        l = c.l;
    }
    void concat(string1 a)
    {
        cout << s + a.s;
    }
};

int main()
{
    string1 s1;
    string1 s2("Hello World. ");
    cout << "\n"
         << s2.l << endl;
    string1 s3 = s2;
    s2.concat(s3);
    return 0;
}
