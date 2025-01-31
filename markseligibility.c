#include <stdio.h>
int main()
{
    int marks, sum, phy, chem, math;
    printf("Enter your marks of Maths :");
    scanf("%d", &math);

    printf("Enter your marks of Physics :");
    scanf("%d", &phy);

    printf("Enter your marks of Chemistry :");
    scanf("%d", &chem);

    if (math >= 65 && phy >= 55 && chem >= 50)
    {
        sum = math + phy + chem;
        printf("Total marks of all the subjects are :&d\n", sum);
        printf("The candidate is eligible for the admission.");
    }
    else
    {
        sum = math + phy;
        printf("The total marks of the candidate are :&d\n", sum);
        printf("The candidate is not eligible for the admission.");
    }
    return 0;
}
