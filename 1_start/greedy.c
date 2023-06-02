#include <stdio.h>
#include <cs50.c>

int main(void)
{
    float cur;
    int sum = 0;
    float v = 0.25;
    float c = 0.1;
    float x = 0.05;
    float z = 0.01;
    do
    {
        cur = get_float("Enter your value dollars and cents: ");
    }
    while (cur <= 0);

    do
    {
        if (cur > 0.24)
        {
            cur -= v;
            sum += 1;
        }
        else if (cur > 0.09)
        {
            cur -= c;
            sum += 1;
        }
        else if (cur > 0.04)
        {
            cur -= x;
            sum += 1;
        }
        else
        {
            cur -= z;
            sum += 1;
        }
    }
    while (cur > 0);
    printf("Your many monets: %i", sum);
}