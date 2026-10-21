#include <stdio.h>
int main ()
{
    char first_letter, second_letter;
    printf ("Enter first letter of the day (M, T, W, T, F, S, S): ");
    scanf (" %c", &first_letter);

    switch (first_letter)
    {
        case 'M': case 'm':
            printf ("The day number is 1");
            break;

        case 'T': case 't':
            printf ("Enter second letter of the day (u or h): ");
            scanf (" %c", &second_letter);
            switch (second_letter)
            {
                case 'u': case 'U':
                    printf ("The day number is 2");
                    break;
                case 'h': case 'H':
                    printf ("The day number is 4");
                    break;
                default:
                    printf ("Invalid second letter entered.");
            }
            break;

        case 'W': case 'w':
            printf ("3");
            break;

        case 'F': case 'f':
            printf ("5");
            break;
            
        case 'S': case 's':
            printf ("Enter second letter of the day (a or u): ");
            scanf (" %c", &second_letter);
            switch (second_letter)
            {
                case 'a': case 'A':
                    printf ("The day number is 6");
                    break;
                case 'u': case 'U':
                    printf ("The day number is 7");
                    break;
                default:
                    printf ("Invalid second letter entered.");
            }
            break;
    }
}