#include <stdio.h>
int main()
{
    float a, b, result;
    printf("Please enter your first number :");
    scanf("%f", &a);

    printf("Please enter your second number");
    scanf("%f", &b);
    result = a + b;
    printf("Addition of %f and %f is %f\n", a, b, result);

    result = a - b;
    printf("Subtraction of %f and %f is %f\n", a, b, result);

    result = a * b;
    printf("Multiplication of %f and %f is %f\n", a, b, result);

    if (b != 0)
    {
        float result = a / b;
        printf("division of %f and %f is %f\n", a, b, result);
    }
    else
    {
        printf("divison by zero is not allowed\n");
    }
    return 0;
}
