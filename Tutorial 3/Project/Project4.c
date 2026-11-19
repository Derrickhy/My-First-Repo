#include <stdio.h>
int main()
{
    char code;
    int amount;
    float unit_price, discount, bef_discount, aft_discount;

    printf("Product code: ");
    scanf("%c", &code);
    printf("Order Amount: ");
    scanf(" %d", &amount);

    if (code == 'W' || code == 'w')
    {
        unit_price = 12.45;
        if (amount >= 1 && amount <= 10)
        {
            discount = 0;
        }

        else if (amount >= 10 && amount <= 49)
        {
            discount = 2;
        }

        else if (amount >= 50 && amount <= 99)
        {
            discount = 5;
        }

        else if (amount >= 100)
        {
            discount = 7.5;
        }
    }

    else if (code == 'X' || code == 'x')
    {
        unit_price = 2.36;
        if (amount >= 1 && amount <= 10)
        {
            discount = 0;
        }

        else if (amount >= 10 && amount <= 49)
        {
            discount = 0.5;
        }

        else if (amount >= 50 && amount <= 99)
        {
            discount = 2;
        }

        else if (amount >= 100)
        {
            discount = 4;
        }
    }

    else if (code == 'Y' || code == 'y')
    {
        unit_price = 6.50;
        if (amount >= 1 && amount <= 10)
        {
            discount = 0;
        }

        else if (amount >= 10 && amount <= 49)
        {
            discount = 1;
        }

        else if (amount >= 50 && amount <= 99)
        {
            discount = 2.5;
        }

        else if (amount >= 100)
        {
            discount = 5;
        }
    }

    else if (code == 'Z' || code == 'z')
    {
        unit_price = 16.40;
        if (amount >= 1 && amount <= 10)
        {
            discount = 0;
        }

        else if (amount >= 10 && amount <= 49)
        {
            discount = 10;
        }

        else if (amount >= 50 && amount <= 99)
        {
            discount = 12.5;
        }

        else if (amount >= 100)
        {
            discount = 15;
        }
    }

    bef_discount = amount * unit_price;
    printf("Total cost before discount: %f\n", bef_discount);

    aft_discount = bef_discount * ((100 - discount) / 100);
    aft_discount = ("Total cost after discount: %f", aft_discount);
    printf("Total cost after discount: %f", aft_discount);
}