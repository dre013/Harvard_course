#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <cs50.h>

int main(int argc, string argv[])
{
    string x = argv[1];
    if (argc != 2)
    {
        printf("Error, enter the key the next time.\n");
        return 1;
    }
    for (int i = 0, n = strlen(argv[1]); i < n; i++)
    {
        if (x[i] < 65 || x[i] > 122)
        {
            printf("Error, enter the key the next time.\n");
            return 1;
        }
    }

    string s = get_string("Enter your plain text: \n");
    int y = strlen(x);

    for (int i = 0, n = strlen(s); i < n; i++)
    {
        if (isalpha(s[i]))
        {
            if (islower(s[i]))
            {
                printf("%c", (s[i] - 97 + (toupper(x[i%y]) - 65))%26 + 97);
            }
            if (isupper(s[i]))
            {
                printf("%c", (s[i] - 65 + (toupper(x[i%y]) - 65)%26 + 65));
            }
        }
        else
        {
            printf("%c", s[i]);
        }
    }

    printf("\n");
}