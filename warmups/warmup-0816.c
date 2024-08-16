// What's wrong with this program?
#include <stdio.h>

int main(void)
{
    printf("Enter x, and I'll show you the sum of all integers up to x\n");
    int x = get_int("x: ");

    sum = 0;
    for (int i = 0; i < x; i++)
    {
        sum += i;
    }
    printf("Total: %i\n", sum);
}
