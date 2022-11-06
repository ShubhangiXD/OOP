#include <stdio.h> //WAP to find whether a number is palindrome
int palindrome(int a);
void main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d", &n);
    int res = palindrome(n);
    if (res == 1)
        printf("The number given is palindrome.");
    else
        printf("The number given is not a palindrome.");
}
int palindrome(int a)
{
    int d;
    int copy = a;
    int sum;
    while (copy != 0)
    {
        int d = copy % 10;
        sum = sum * 10 + d;
        copy = copy / 10;
    }
    if (sum==a)
    return 1;
    else
    return 0;
}