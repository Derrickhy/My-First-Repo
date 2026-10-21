#include <stdio.h>
int main ()
{
    char answer;
    printf ("Do you want to continue? (Y/N) or (y/n): ");
    scanf ("%c", &answer);

    if (answer == 'Y' || answer == 'y')
    {
        printf ("You responded Yes.\n");
    }
    else
    {
        printf ("You responded No.\n");
    }
}