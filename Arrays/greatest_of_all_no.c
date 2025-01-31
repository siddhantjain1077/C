#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the three no's :");
    scanf("%d%d%d", &a, &b, &c);
    printf("1st no. is %d, 2nd No is %d, 3rd no is %d");

    if ((a > b) && (a > c))
    {
        printf("1st no is the greatest");
    }
    else
    {
        if ((b > a) && (b > c))
        {
            printf("2nd number is the greatest");
        }
        else
        {
            printf("3rd number is the greatest of all");
        }
        }
}
