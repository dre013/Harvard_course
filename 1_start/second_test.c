#include <stdio.h>
#include <cs50.c>

int main(void)
{
    while (true)
    {
        int n = get_int("Enter your number: ");
        printf("Your number %i\n", n);

        if (n > 0)
        {
            printf("%i is a positive number\n", n);
        }
        else if (n < 0)
        {
            printf("%i is a negative number\n", n);
        }
        else
        {
            printf("%i is zero\n", n);
        }
    }
}