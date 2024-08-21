#include <cs50.h>
#include <stdio.h>
int count_digits(int n);

int main(void)
{
    // validating input
    int num;
    do
    {
        num = get_int("Enter a positive number: ");
    } while (num < 0);

    printf("%i\n", count_digits(num));
}

int count_digits(int n)
{
    int num_digits = 0;
    while (n > 0)
    {
        n = n / 10;
        num_digits++;
    }
    return num_digits;
}
