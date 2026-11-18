#include <stdio.h>
#include <math.h>
int main()
{
    float degree, answer;

    answer = sin(degree * M_PI / 180) * sin(degree * M_PI / 180) + cos(degree * M_PI / 180) * cos(degree * M_PI / 180);

    printf("Enter the degree: ");
    scanf("%f", &degree);
    printf("sin^2(%f) + cos^2(%f) = %f", degree, degree, answer);
}