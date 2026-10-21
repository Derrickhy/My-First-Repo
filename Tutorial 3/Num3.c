#include <stdio.h>
int main ()
{
    int num;
    printf ("Enter number: ");
    scanf ("%d", &num);
    num = num > 50 ? 1 : 0;
    printf ("Result: %d\n", num);
}