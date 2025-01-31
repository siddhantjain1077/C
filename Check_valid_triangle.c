#include <stdio.h>

int main()
{
    int side1, side2, side3;

    printf("Enter the lengths of three sides of the triangle :");
    scanf("%d %d %d", &side1, &side2, &side3);

    if ((side1 + side2 > side3) && (side1 + side3 > side2) && (side2 + side3 > side1))
    {
        printf("The triangle with sides %d, %d, and %d is valid.\n", side1, side2, side3);
    }
    else
    {
        printf("The triangle with sides %d, %d, and %d is not valid.\n", side1, side2, side3);
    }

    return 0;
}
