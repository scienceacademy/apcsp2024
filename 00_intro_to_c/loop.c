#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int counter = 0;
    while (counter < 10)
    {
        printf("%i\n", counter);
        counter++;
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%i\n", i);
    }

}
