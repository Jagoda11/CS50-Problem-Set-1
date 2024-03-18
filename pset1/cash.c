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

    // Prompt the user for the amount of cash 💵
    do
    {
        cash = get_float("Cash: ");
    }
    while (cash < 0);  // Ensure the cash amount is positive

    // Convert cash to cents and round off to avoid precision errors 💰
    cash = cash * 100;
    cash = roundf(cash);
    int cents = (int)cash;

    // Calculate the number of quarters 🪙
    quarters = cents / 25;
    cents %= 25;

    // Calculate the number of dimes 🪙
    dimes = cents / 10;
    cents %= 10;

    // Calculate the number of nickels 🪙
    nickels = cents / 5;
    cents %= 5;

    // Remaining cents are pennies 🪙
    pennies = cents;

    // Sum the number of coins and print the result 🖨️
    counter = quarters + dimes + nickels + pennies;
    printf("%d\n", counter);

    return 0;
}

