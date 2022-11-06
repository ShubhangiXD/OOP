#include <iostream>
using namespace std;
class books
{
public:
    string name, author;
    int price;
    friend void display(int n, books s[], int low, int high);
};

void display(int n, books s[], int low, int high)
{
    int temp;
    if (low > high)
    {
        temp = low;
        low = high;
        high = temp;
    }
    cout << "NAME \t"<< "AUTHOR \t" << "PRICE \n";
    cout << "---------------------------------\n";
    for (int i = 0; i < n; i++)
        if (s[i].price >= low && s[i].price <= high)
            cout << s[i].name << " \t " << s[i].author << "\t " << s[i].price << endl;
}

int main()
{
    int n, a, b;
    cout << "Enter the number of books: \n";
    cin >> n;
    books s[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the name and author of the book: \n";
        cin >> s[i].name >> s[i].author;
        cout << "Enter the price of the book: \n";
        cin >> s[i].price;
    }
    cout << "Enter the price range: \n";
    cin >> a >> b;
    cout << "The books in the given price range are: \n";
    display(n, s, a, b);
    return 0;
}