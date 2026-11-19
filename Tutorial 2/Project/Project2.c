#include <stdio.h>
int main()
{
    int number, ten, unit;
    printf("Enter a number between 1 and 99: ");
    scanf("%d", &number);

    ten = number / 10;
    unit = number % 10;

    printf("The reversed number is: %d%d", unit, ten);
}