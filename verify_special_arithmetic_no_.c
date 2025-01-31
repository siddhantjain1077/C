#include <stdio.h>
int main()
{
    int character;
    printf("Enter any character");
    scanf("%d", &character);

    if (((character >= 'A') && (character <= 'Z') || (character >= 'a') && (character <= 'z')))
    {
        printf("Yes it's a character");
    }
    else
    {
        if ((character >= 0) && (character <= 9))
        {
            printf("yes it's a digit");
        }
        else
        {
            printf("%d is a special character", character);
        }
    }
    return 0;
}
