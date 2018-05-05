#include <stdio.h>
#include <cs50.h>

int main(void)
{

    int height;


    do
    {
        height = get_int("Height: ");
    }
    while (height <= 0 || height >= 24);



    for (int row = 1; row <= height; row++)
    {


        for (int space = 0; space < height - row; space++)
        {
            printf(" ");

        }

        for (int hash = 0; hash < row + 1; hash++)
        {
            printf("#");
        }

        printf(" \n");
    }


}
