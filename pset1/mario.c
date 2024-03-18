#include <stdio.h>
#include <cs50.h>

// Main program function 🚀
int main(void)
{
    int height;

    // Prompt user for pyramid height and validate the input 📏
    do
    {
        height = get_int("Height: ");
    }
    while (height <= 0 || height > 23); // Ensuring height is between 1 and 23

    // Iterate over each row 📐
    for (int row = 1; row <= height; row++)
    {
        // Print spaces to align hashes to the right 🛑
        for (int space = 0; space < height - row; space++)
        {
            printf(" ");
        }

        // Print hashes for each row 🏗️
        for (int hash = 0; hash < row + 1; hash++)
        {
            printf("#");
        }

        // Move to the next line after each row is printed 📤
        printf("\n");
    }
}

