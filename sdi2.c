
#include <stdio.h>
int main() 
{
    int radius, area, M_PI=3.14;

    printf("Enter the radius of the circle: ");
    scanf("%d", &radius);
 
    area = M_PI *radius*radius;
   
    printf("The area of the circle with radius %d is %d\n", radius, area);
    return 0;
}
