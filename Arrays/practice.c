#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number");
    scanf("%d", &num);

    if (num % 5 == 0)
    {
        printf("Yes the number is divisible by 5\n");
        if (num % 11 == 0)
        {
            printf("Yes then number is divisible by 11\n");
        }
        else
        {
            printf("THE NUMBER IS NOT DIVISBLE BY 11");
        }
    }
    else
    {
        printf("Invalid number");
    }
}

