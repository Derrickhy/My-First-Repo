#include <stdio.h>
int main ()
{
    float i;
    for (i = -0.0375; i <= 1.45; i = i + 0.1225)
    {
        printf("%.4f ", i);
    }
}