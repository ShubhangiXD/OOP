#include <stdio.h> //swapping of two variables
void swap(int *x, int *y)
{
    int z = *x;
    *x = *y;
    *y = z;
}
int main()
{
    int a, b;
    printf("Enter two numbers: \n");
    scanf("%d%d", &a, &b);
    printf("The value of a and b before swapping is %d and %d", a, b);
    swap(&a, &b);
    printf("\nThe value of a and b after swapping is %d and %d", a, b);
    return 0;
}