#include <stdio.h>
#include <cs50.c>

int main(void)
{
    int h;
    do
    {
        h = get_int("Enter your number: ");
    }
    while (h < 1 || h > 23);
    for (int i = 1; i < h + 1; i++)
    {
        for (int j = 1; j < h - i + 1; j++)
        {
            printf(" ");
        }

        for (int k = 1; k < i + 1; k++)
        {
            printf("#");
        }
        for (int l = 1; l < 3; l++)
        {
            printf(" ");
        }
        // for (int g = 1; g < i + 1; g++)
        // {
        //     printf("#");
        // }
        printf("\n");
    }   
}