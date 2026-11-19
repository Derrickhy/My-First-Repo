#include <stdio.h>
int main()
{
    int value;
    printf("Enter value: ");
    scanf("%d", &value);

    value > 50 ? printf("Variable reset to 1") : printf("Variable reset to 0");
}