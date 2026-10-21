#include <stdio.h>
int main ()
{
    char grade;
    printf ("Enter grade: ");
    scanf (" %c", &grade);

    switch (grade)
    {
        case 'A':
            printf ("Your performance was Excellent\n");
            break;
        case 'B':
            printf ("Your performance was Good\n");
            break;
        case 'C':
            printf ("Your performance was Average\n");
            break;
        case 'D':
            printf ("Your performance was Poor\n");
            break;
        case 'F':
            printf ("Your performance was Failing\n");
            break;
        default:
            printf ("Invalid grade\n");
    }



}
