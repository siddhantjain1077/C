#include <stdio.h>

int main()
{
    int age;
    printf("Please enter your age :");
    scanf("%d",&age);

    if (age>18)
    {
        printf("The student is eligible for voting");
    }
    else
    {
        printf("Sorry, the student is not eligible for voting");
    }
    
    return 0;
}