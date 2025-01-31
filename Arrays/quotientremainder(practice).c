#include<stdio.h>
int main()
{
    int divident,divisor,quotient,remainder;
    printf("Please enter the divident :");
    scanf("%d",&divident);

    printf("Please enter the divisor :");
    scanf("%d",&divisor);

    if (divisor==0)
    {
        printf("Divisor cannot be zero");
    }
    else
    {
        quotient=divident/divisor;
        remainder=divident%divisor;
        printf("Quotient is %d\n",quotient);
        printf("Remainder is %d\n",remainder);

        return 0;
    }
    
}