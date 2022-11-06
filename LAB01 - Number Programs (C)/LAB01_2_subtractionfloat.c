#include <stdio.h> //WAP to enter and find the difference of two float values
float diff(float a, float b);
void main()
{
    float m, n, res;
    printf("Enter two numbers \n");
    scanf("%f %f", &m, &n);
    res = diff(m, n);
    printf("The difference of the two numbers is = %f", res);
}
float diff(float a, float b)
{
    float difference;
    if (a > b)
        difference = a - b;
    else
        difference = b - a;
    return difference;
}