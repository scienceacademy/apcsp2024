#include <stdio.h>
void bark(int n);

int main(void)
{
    bark(3);
}

void bark(int n)
{
    for (int i = 0; i < n; i++)
    {
        print("Bark\n");
    }
}
