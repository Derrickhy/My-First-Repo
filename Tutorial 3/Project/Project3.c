#include <stdio.h>
int main()
{
    printf("(A) Both numbers are even (divisible by 2)\n");
    printf("(B) Both numbers are odd (not divisible by 2)\n");
    printf("(C) One number is even and the other number is odd\n");

    int number1, number2;
    printf("Enter two integer numbers: ");
    scanf("%d %d", &number1, &number2);

    if (number1 % 2 == 0 && number2 % 2 == 0)
    {
        printf("Condition A is true");
    }

    else if (number1 % 2 != 0 && number2 % 2 != 0)
    {
        printf("Condition B is true");
    }

    else
    {
        printf("Condition C is true");
    }
}