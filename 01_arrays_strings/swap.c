#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int numbers[] = {6, 4, 1, 2, 5, 0, 2, 7};
    int n = 10;

    // to swap two values, we need a temp variable
    int tmp = numbers[0];
    numbers[0] = numbers[5];
    numbers[5] = tmp;
}
