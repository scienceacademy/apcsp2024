#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char encrypt(char letter, char base, int key);

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./caesar <key>\n");
        return 1;
    }
    int key = atoi(argv[1]);
    string plaintext = get_string("Plaintext: ");

    for (int i = 0, n = strlen(plaintext); i < n; i++)
    {
        char c = plaintext[i];
        if (isupper(c))
        {
            printf("%c", encrypt(c, 'A', key));
        }
        else if (islower(c))
        {
            printf("%c", encrypt(c, 'a', key));
        }
        else
        {
            printf("%c", c);
        }
    }
    printf("\n");
}

char encrypt(char letter, char base, int key)
{
    return (letter - base + key) % 26 + base;
}
