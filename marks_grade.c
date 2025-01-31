#include <stdio.h>

int main()
{
    float Computer, Socialscience, Maths, English, Hindi;

    printf("Please enter the marks of Computer :");
    scanf("%f", &Computer);

    printf("Please enter the marks of Social Science :");
    scanf("%f", &Socialscience);

    printf("Please enter the marks of Maths :");
    scanf("%f", &Maths);

    printf("Please enter the marks of English :");
    scanf("%f", &English);

    printf("Please enter the marks of Hindi :");
    scanf("%f", &Hindi);

    float totalmark = Computer + Socialscience + Maths + English + Hindi;
    float percentage = (totalmark / 500) * 100;

    char grade;
    if (percentage >= 90)
    {
        grade = 'A';
    }
    else if (percentage >= 80)
    {
        grade = 'B';
    }
    else if (percentage >= 70)
    {
        grade = 'C';
    }
    else if (percentage >= 60)
    {
        grade = 'D';
    }
    else if (percentage >= 40)
    {
        grade = 'E';
    }
    else
    {
        grade = 'F';
    }
    printf("Total marks are %f\n", totalmark);
    printf("Percentage is %f\n", percentage);
    printf("Grade %c\n", grade);

    return 2;
}