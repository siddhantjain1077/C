#include <stdio.h>
int main()
{
    int a,b,c,sum;
    printf("Enter the side 1 of triangle :");
    scanf("%d",&a);

    printf("Enter the second side of triangle :");
    scanf("%d",&b);

    printf("Enter the third side of the triangle :");
    scanf("%d",&c);

    sum=a+b+c;
    printf("The sum of angles of triangle are %d\n",sum);

    if (sum== 180)
    {
        printf("Yes, the triangle can be formed");

    }
    else
    {
        printf("No, the triangle cannot be formed");
    }
        return 0;
        
}