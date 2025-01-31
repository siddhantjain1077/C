#include <stdio.h>

int main()
{
    int num, factorial = 1;
    printf("Enter a positive number: ");
    scanf("%d", &num);
    if (num < 0)
    {
        printf("Please enter a positive number\n");
    }
    else
    {
        for (int i = 1; i <= num; i++)
        {
            factorial *= i;
        }
        printf("Factorial of %d = %llu\n", num, factorial);
    }
    return 0;
}
