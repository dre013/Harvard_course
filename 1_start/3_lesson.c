#include <stdio.h>
#include <cs50.c>

int get_positive_number();

int main(void)
{
    int num;
    num = get_positive_number();
    printf("Thanks for the %i\n", num);
}

int get_positive_number(void)
{
    int x;
    do
    {
        printf("Enter your positive number: ");
        x = get_int("");
    }
    while (x < 1);
    return x;
}