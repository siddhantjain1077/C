#include <stdio.h>
int main()
{
    int a = 2;
    printf("All the even numbers from 1 to 100 are :\n");
    while (a <= 100)
    {
        if (a % 2 == 0)
        {
            printf("%d\n", a);
            a += 2;
        }
    }
    printf("\n");
    return 0;
}