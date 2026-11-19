#include <stdio.h>
int main()
{
    char initial1, initial2, initial3;
    printf("Enter first initial: ");
    scanf(" %c", &initial1);
    printf("Enter second initial: ");
    scanf(" %c", &initial2);
    printf("Enter third initial: ");
    scanf(" %c", &initial3);
    printf("Your initials are: %c.%c.%c", initial1, initial2, initial3);
    return 0;
}