#include <iostream>
using namespace std;
class name
{
private:
    char name1[50];

public:
    void get_name(void);
    void disp_hname(void);
};

void name::get_name()
{
    cout << "Enter your name:";
    cin >> name1;
}

void name::disp_hname()
{
    cout << "Hello " << name1 << endl;
}

int main()
{
    name obj;
    obj.get_name();
    obj.disp_hname();
    return 0;
}