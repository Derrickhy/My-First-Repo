#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main ()
{
    int temperature_readings[7][24];
    int day, hour;
    srand(time(NULL));

    for (day = 0; day<7; day++)
    {
        for (hour = 0; hour<24; hour++)
        {
            temperature_readings[day][hour] = rand() % 41; 
            printf ("%d\t", temperature_readings[day][hour]);
        }
        printf ("\n");
    }

}