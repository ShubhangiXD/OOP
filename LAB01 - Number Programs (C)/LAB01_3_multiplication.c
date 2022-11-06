#include <stdio.h> // WAP to enter and find the product of an int and a double type
double multiply(int x, double y)
{
    double c = x * y;
    return c;
}
int main()
{
    int a;
    double b;
    printf("Enter two numbers: \n");
    scanf("%d%lf", &a, &b);
    printf("%lf", multiply(a, b));
    return 0;
}