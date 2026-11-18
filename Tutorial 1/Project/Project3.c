#include <stdio.h>
#include <math.h>
int main()
{
    float sin1, sin2, sin3;
    sin1 = sin(0 * M_PI / 180);
    sin2 = sin(30 * M_PI / 180);
    sin3 = sin(90 * M_PI / 180);
    printf("The value of sin(0) is: %f\n", sin1);
    printf("The value of sin(30) is: %f\n", sin2);
    printf("The value of sin(90) is: %f\n", sin3);
}