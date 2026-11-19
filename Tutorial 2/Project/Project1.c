#include <stdio.h>
int main()
{
    int max;
    float score, percentage;

    printf("Enter maximum score possible: ");
    scanf("%d", &max);
    printf("Enter score achieved: ");
    scanf("%f", &score);
    printf("\n");
    percentage = (score / max) * 100;
    printf("You scored: %f%%", percentage);
}