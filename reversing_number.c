#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter your first number :");
    scanf("%d", &a);

    printf("Enter your second number :");
    scanf("%d", &b);

    printf("before swapping the numbers a=%d and b=%d\n", a, b);
    a = a + b;
    b = a - b;
    a = a - b;

    printf("The value of a is %d and b is %d", a, b);

    return 0;
}   