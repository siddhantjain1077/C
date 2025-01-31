#include <stdio.h>

int main()
{
    double basicSalary, grossSalary, hra, da;

    printf("Enter the basic salary: ");
    scanf("%lf", &basicSalary);

    if (basicSalary <= 10000)
    {
        hra = 0.20 * basicSalary;
        da = 0.80 * basicSalary;
    }
    else if (basicSalary > 10000 && basicSalary <= 20000)
    {
        hra = 0.25 * basicSalary;
        da = 0.90 * basicSalary;
    }
    else
    {
        hra = 0.30 * basicSalary;
        da = 0.95 * basicSalary;
    }

    grossSalary = basicSalary + hra + da;

    printf("Gross salary: %.2lf\n", grossSalary);

    return 0;
}
