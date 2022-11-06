#include <stdio.h> //WAP to find the factorial of a number
int fact(int a);
void main()
{
    int n;
    printf ("Enter a number \n");
    scanf ("%d", &n);
    int res;
    res = fact(n);
    printf ("The factorial of the given number is = %d", res);
}
int fact(int a)
{
    int factorial = a;
    while (a > 1)
    {
        factorial = factorial * (a - 1);
        a--;
    }
}