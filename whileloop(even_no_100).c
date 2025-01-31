#include<stdio.h>

int main()
{
    int i = 2;

    printf("Even numbers from 1 to 100 are :\n");

    while (i<=100)      
    {
        printf("%d", i);
        i += 2;
    }
    printf("\n");
    return 0;
    
    
}