#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "cs50.h"



// int main(int argc, string argv[])
// {
//     if (argc != 2 || argc < 1)
//     {
//         printf("Print the key the next time\n");
//         return 1;
//     }
    

//     int k = atoi(argv[1]);
//     string a = get_string("Enter your phrase: \n");
    
    
//     for (int i = 0, b = strlen(a); i < b; i++)
//     {
//         if (isalpha(a[i]))
//         {
//             if (isupper(a[i]))
//             {
//                 int x = a[i];
//                 int y = x - 65;
//                 int z = (y+k)%26;
//                 x = z + 65;
//                 printf("%c", x);
//             }
//             else
//             {
//                 int x = a[i];
//                 int y = x - 97;
//                 int z = (y+k)%26;
//                 x = z + 97;
//                 printf("%c", x);
//             }
//         }
//         else
//         {
//         printf("%c", a[i]);
//         }
//     }
// }

int main(void)
{
    int k; //secret key
    do
    {
        k = get_int("Enter your positive key: \n");
    } while (k < 1);
    
    string s = get_string("Enter your plain text\n");
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        if (isalpha(s[i]))
        {
            if (islower(s[i]))
            {
                printf("%c", (s[i] - 97 + k)%26 + 97);
            }
            if (isupper(s[i]))
            {
                printf("%c", (s[i] - 65 + k)%26 + 65);
            }
        }
        else
        {
            printf("%c", s[i]);
        }
    }
}
