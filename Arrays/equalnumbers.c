#include <stdio.h>
int main()
{
    int a,b;
    printf("Please enter first number :");
    scanf("%d",&a);

    printf("Please enter second number :");
    scanf("%d",&b);
    if (a==b)  
    {
        printf("yes both numbers are equal.");
    }
    else
    {
        printf("No both numbers are not equal :");
    }
}
