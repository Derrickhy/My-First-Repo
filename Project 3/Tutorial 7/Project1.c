#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main ()

{
    char text [] = "The first letter of each word is capitalised";

    int i;
    for (i = 0; text [i] != '\0'; i++){
        if (i == 0 || text [i - 1] == ' '){
            text [i] = toupper (text [i]);
        }

    }

    printf ("%s", text);
}