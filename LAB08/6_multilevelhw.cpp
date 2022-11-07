#include <iostream>
using namespace std;
class woodbox
{
private:
    int length, width, height, thick;

public:
    woodbox()
    {
        cout << "Inside woodbox constructor.\n";
    }
    woodbox(int l, int w, int h, int t) 
    {
        length = l;
        width = w;
        height = h;
        thick = t;
    }
};

class box : public woodbox
{
private:
    int length, width, height;

public:
    box()
    {
        cout << "Inside box constructor.\n";
    }
};

class plate : public box
{
private:
    int length, width;

public:
    plate()
    {
        cout << "Inside plate constructor.\n";
    }
};

int main()
{
    plate ob;
    return 0;
}