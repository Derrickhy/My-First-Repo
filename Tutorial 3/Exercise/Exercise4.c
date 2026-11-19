#include <stdio.h>
int main()
{
    char grade;
    printf("Enter your grade (A, B, C, D, E): ");
    scanf(" %c", &grade);

    switch (grade)
    {
    case 'A':
    case 'a':
        printf("Your performance was excellent");
        break;

    case 'B':
    case 'b':
        printf("Your performance was good");
        break;

    case 'C':
    case 'c':
        printf("Your performance was average");
        break;

    case 'D':
    case 'd':
        printf("Your performance was poor");
        break;

    case 'E':
    case 'e':
        printf("Your performance was failing");
        break;

    default:
        printf("Invalid grade. Please enter A, B, C, D, or E.");
    }
}