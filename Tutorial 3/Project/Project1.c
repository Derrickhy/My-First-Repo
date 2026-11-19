#include <stdio.h>
int main()
{
    float temperature, result;
    char option;
    printf("Enter temperature: ");
    scanf("%f", &temperature);

    printf("Enter conversion required (F or f to convert to Fahrenheit, C or c to convert to Celsius): ");
    scanf(" %c", &option);

    if (option == 'F' || option == 'f')
    {
        result = (temperature * 9 / 5) + 32;
        printf("%f degrees Celsius is equal to %f Fahrenheit", temperature, result);
    }
    else if (option == 'C' || option == 'c')
    {
        result = (temperature - 32) * 5 / 9;
        printf("%f degrees Fahrenheit is equal to %f Celsius", temperature, result);
    }
    else
    {
        printf("Invalid option. Please enter F or C.\n");
    }
}