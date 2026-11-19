#include <stdio.h>
int main()
{
    char answer;
    printf("Do you want to continue? (Y/N) or (y/n): ");
    scanf(" %c", &answer);

    if (answer == 'Y' || answer == 'y')
    {
        printf("You responded YES");
    }

    else if (answer == 'N' || answer == 'n')
    {
        printf("You responded NO");
    }

    else
    {
        printf("Invalid input. Please enter Y/y or N/n.");
    }
}