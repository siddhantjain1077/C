#include <stdio.h>
int main()
{
    int radius,area;
    printf("Please enter the radius of circle :");
    scanf("%d",&radius);
    
    area = 3.14*radius*radius; 
    printf("The area of circle with radius %d is %d\n",radius,area);
    return 0;

}