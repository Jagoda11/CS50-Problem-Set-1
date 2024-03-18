#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <time.h>

// Main program function 🚀
int main(void)
{
    int number;  // Variable to store the user's guess
    int random;  // Variable to store the random number

    // Seed the random number generator 🌱
    srand(time(NULL));
    random = rand() % 11;  // Generate a random number between 0 and 10

    do
    {
        do
        {
            // Prompt user to guess the number 🤔
            number = get_int("Guess the number between 1 and 10: ");

            // Provide feedback on the guess 🔊
            if (number > random)
            {
                printf("You aimed too high, try again\n");
            }
            else if (number < random)
            {
                printf("You aimed too low, try again\n");
            }
            else
            {
                printf("You guessed the number! Congrats 🎉\n");
            }
        }
        while (number <= 0 || number >= 11);  // Ensure the guess is within the valid range
    }
    while (number != random);  // Repeat until the correct number is guessed

    return 0;
}

