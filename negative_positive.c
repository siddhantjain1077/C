#include <stdio.h>

int main()
{
    int a;

    printf("Please enter the first no. :");
    scanf("%d", &a);

    if (a > 0)
    {
        printf("Its a positive number");
    }
    else if (a<0)
    {
        printf("Its a negavtive number");
    }
    else{
        printf("The number is zero");
    }
    return 0;
    
}