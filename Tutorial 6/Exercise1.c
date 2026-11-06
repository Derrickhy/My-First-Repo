#include <stdio.h>
int main ()
{
    int number[5] = {1, 2, 3, 4, 5};
    int i;

    for (i = 0;i < 6;i = i + 2)
    {
        printf ("%d", number[i]);
    }
}