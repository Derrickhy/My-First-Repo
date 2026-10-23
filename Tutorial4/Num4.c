#include <stdio.h>
int main ()
{
    char i;
    printf("Do you want to continue? (y/n): ");
    scanf("%c", &i);
    
    if (i == 'y')
    {
        printf("Thank-you, continuing programme...\n");
    }
    
    if (i == 'n')
    {
        printf("Thank-you, programme will now terminate...\n");
    }
    
    else
    {
        while (!(i == 'y' || i == 'n'))
        {
            printf("Invalid input, please enter 'y' or 'n': ");
            scanf("%c", &i);
        }
    }
}