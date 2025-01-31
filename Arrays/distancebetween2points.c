#include <stdio.h>
#include <math.h>
int main()

{
    float x1, x2, x3, y1, y2, y3;
    float distance_P1_P2,distance_P1_P3,distance_P2_P3;

    printf("Please enter the coordinates of P1(x1,y1) :");
    scanf("%f%f", &x1, &y1);    

    printf("Please enter the coordinates of P2(x2,y2) :");
    scanf("%f%f", &x2, &y2);

    printf("Please enter the coordinates of P3(x3,y3) :");      
    scanf("%f%f", &x3, &y3);    
        
    distance_P1_P3 = sqrt(pow(x3 - x1,2) + pow(y3 - y1,2));
    distance_P2_P3 = sqrt(pow(x3 - x2,2) + pow(y3 - y2,2));
    distance_P1_P2 = sqrt(pow(x2 - x1,2) + pow(y2 - y1,2));

    printf("The distance between two points is  %f\n", distance_P1_P2);
    printf("The distance between two points is  %f\n", distance_P1_P3);
    printf("The distance between two points is  %f\n", distance_P2_P3);
    return 0;
}