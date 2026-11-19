#include <stdio.h>
int main()
{
    char initial1, initial2, initial3;
    printf("Enter three initials: ");
    scanf(" %c %c %c", &initial1, &initial2, &initial3);
    printf("Your initials are: %c.%c.%c", initial1, initial2, initial3);
}