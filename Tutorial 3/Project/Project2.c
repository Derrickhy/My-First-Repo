#include <stdio.h>
int main()
{
    char letter1, letter2, letter3;
    printf("Enter a day: ");
    scanf("%c%c%c", &letter1, &letter2, &letter3);

    switch (letter1)
    {
    case 'M':
    case 'm':
        printf("The day number is : 1");
        break;

    case 'T':
    case 't':
        if (letter2 == 'U' || letter2 == 'u')
        {
            printf("The day number is : 2");
        }

        else
        {
            printf("The day number is : 4");
        }
        break;

    case 'W':
    case 'w':
        printf("The day number is : 3");
        break;

    case 'F':
    case 'f':
        printf("The day number is : 4");
        break;

    case 'S':
    case 's':
        if (letter2 == 'A' || letter2 == 'a')
        {
            printf("The day number is 6");
        }
        else
        {
            printf("The day number is 7");
        }
        break;

    default:
        printf("Enter a valid day");
    }
}