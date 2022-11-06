#include <stdio.h> //WAP to enter and find the sum of two float values
int sum(int a, int b);
void main()
{
    int m, n;
    int res;
    printf("Enter two numbers \n");
    scanf("%f %f", &m, &n);
    res = sum(m, n);
    printf("The sum of the two numbers is = %f", res);
}
int sum(int a, int b)
{
    int result;
    result = a + b;
    return result;
}