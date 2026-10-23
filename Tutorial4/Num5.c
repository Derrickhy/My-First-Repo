#include <stdio.h>
int main ()
{
    int i;
    printf("Enter times-table to generate: ");
    scanf("%d", &i);
    for (int j = 1; j <= 12; j++)
    {
        printf("%d x %d = %d\n", i, j, i * j);
    }
}