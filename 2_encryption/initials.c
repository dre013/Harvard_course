#include <stdio.h>
#include "cs50.h"
#include <string.h>
#include <ctype.h>

int main(void)
{
    string s = get_string("Enter your first and last name: \n");
    printf("%c\n", toupper(s[0]));

    int n = strlen(s);

    for (int i = 0; i < n; i++)
    {
        if (s[i] == ' ')
        {
            printf("%c\n", toupper(s[i + 1]));
        }
    }
} 

