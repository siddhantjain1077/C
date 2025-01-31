#include <stdio.h>
int main()
{
    int divisor,divident,quotient,remainder;
    printf("Enter the divident");
    scanf("%d",&divident);

    printf("Enter the divisor");
    scanf("%d,&divisor");
    if (divisor==0)
    {
        printf("divisor cannot be zero\n");
    }
    else
    {
        quotient=divident/divisor;
        remainder=divident%divisor;
        printf("Quotient %d\n",quotient);
        printf("Remainder %d\n",remainder);
        return 0;
        
    }
    
    
}