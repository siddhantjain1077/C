#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the side 1 of triangle :");
    scanf("%d", &a);

    printf("Enter the second side of triangle :");
    scanf("%d", &b);

    printf("Enter the third side of the triangle :");
    scanf("%d", &c);

    if ((a == b) && (b == c))
    {
        printf("The triangle is equilateral");
    }
    else
    {
        if ((a == b) || (b == c) || (c == a))
        {   
            printf("triangle is isosceles");
        }
        else
        {
            printf("the triangle is scalene");
        }
    }
}