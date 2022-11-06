#include <stdio.h> //WAP to find the sum of digits
int sum(int a);
void main()
{
    int n;
    printf("Enter a number \n");
    scanf("%d", &n);
    int res;
    res = sum(n);
    printf("The sum of digits of the given number is = %d", res);
}
int sum(int a)
{
    int d;
    int copy = a;
    int s;
    while (copy != 0)
    {
        d = copy % 10;
        s = s + d;
        copy = copy / 10;
    }
    return s;
}