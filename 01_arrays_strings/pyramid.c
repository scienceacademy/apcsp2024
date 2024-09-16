#include <cs50.h>
#include <stdio.h>

void pyramid(int h);

int main(void)
{
    int h = get_int("Height: ");
    pyramid(h);
}

void pyramid(int h)
{
    if (h == 0)
    {
        return;
    }
    pyramid(h - 1);
    for (int i = 0; i < h; i++)
    {
        printf("#");
    }
    printf("\n");
}
