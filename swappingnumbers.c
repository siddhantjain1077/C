#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);

    printf("before swapping the numbers a=%d and b=%d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;

    printf("The value of a is %d and b is %d",a,b);

    return 0;
    
}