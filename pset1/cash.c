#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main(void)
{
    float cash;
    int counter = 0;
    int quarters = 0;
    int dimes = 0;
    int nickels = 0;
    int pennies = 0;

    do
    {
        cash = get_float("Cash: ");
    }
    while (cash < 0);

    int c;
    cash = cash * 100;
    cash = roundf(cash);
    c = (int)cash;


    // number of quarters.
    quarters = c / 25;

    //  number of dimes.
    int d = c % 25;
    dimes = d / 10;

    //  number of nickels and pennies.
    int n = d % 10;
    nickels = n / 5;
    pennies = n % 5;

    // Sum the number of coins and print .
    counter = quarters + dimes + nickels + pennies;
    printf("%d\n", counter);

    return 0;



}