#include <stdio.h>
int main ()
{
  int temp;
  printf ("Enter temperature: ");
  scanf ("%d", &temp);

  char answer;
  printf ("Enter conversion required (F or f to convert to fahrenheit and C or c to convert to celcius): ");
  scanf (" %c", &answer);

  float conversion;
  if (answer == 'F' || answer == 'f')
    {
        conversion = temp * 9/5 + 32;
        printf ("%d Celsius is equal to %.2f Fahrenheit", temp, conversion);
    }
  
  else
    {
        conversion = (temp - 32) * 5/9;
        printf ("%d Fahrenheit is equal to %.2f Celsius", temp, conversion);
    }




}
