#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <time.h>


int main(void)
{

    int number;
    int random;

    srand(time(NULL));
    random = rand() % 11;//generate a number between 0 and 10

    do
    {
        do
        {
            number = get_int("Guess the number between 1 and 10: ");



            if (number > random)
            {
                printf("you aimed to high, try again\n");

            }
            else if (number < random)
            {
                printf("you aimed to low, try again\n");

            }
            else
            {
                printf("you guessed the number !! Congrats\n");
            }
        }

        while (number <= 0 || number >= 11);

    }

    while (number != random);


}