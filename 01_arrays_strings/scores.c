#include <cs50.h>
#include <stdio.h>

float average(int scores[]);

int main(void)
{
    int n = get_int("number of scores: ");
    int scores[n];
    for (int i = 0; i < n; i++)
    {
        scores[i] = get_int("Score: ");
    }

    printf("%f\n", average(n, scores));
}

float average(int size, int scores[])
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += scores[i];
    }
    return sum / (float) size;
}