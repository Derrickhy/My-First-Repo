#include <stdio.h>
#include <math.h>
int main()
{
    int opposite, adjacent;
    float hypotenuse;
    opposite = 3;
    adjacent = 4;
    hypotenuse = sqrt(opposite * opposite + adjacent * adjacent);
    printf("The value of hypotenuse is: %f", hypotenuse);
}