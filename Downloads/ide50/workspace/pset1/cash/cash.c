#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main (void)
{
    // Prompt user for $$ amount
    float f;
    int coins;
    do
    {
        f = get_float("How much $$: ");
    }
    while (f < 0);

    coins = (int)round(f*100);
    int counter_quarters;

    // Tallies number of quarters used

    if (coins / 25 > 0)
    {
        counter_quarters = coins / 25;
    }
    else
    {
        counter_quarters = 0;
    }

    // Tallies number of dimes used
    int mod_quarters = coins%25;
    int counter_dimes;

    if (mod_quarters / 10 > 0)
    {
        counter_dimes = mod_quarters / 10;
    }
    else
    {
        counter_dimes = 0;
    }

    // Tallies number of nickels used
    int mod_dimes = mod_quarters%10;
    int counter_nickels;

    if (mod_dimes / 5 > 0)
    {
        counter_nickels = mod_dimes / 5;
    }
    else
    {
        counter_nickels = 0;
    }

    // Tallies number of pennies used
    int mod_nickels = mod_dimes%5;
    int counter_pennies = mod_nickels;

    // Tallies and prints total
    int counter_total = counter_quarters + counter_dimes + counter_nickels + counter_pennies;

    printf("%i\n", counter_total);

}