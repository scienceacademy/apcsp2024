#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct
{
    string name;
    string number;
} person;

int main(void)
{
    person people[4];
    people[0].name = "Ted";
    people[0].number = "818-123-1234";


    string name = get_string("Name: ");
    for (int i = 0; i < 4; i++)
    {
        if (strcmp(name, people[i].name) == 0)
        {
            printf("Found %s\n", people[i].number);
            return 0;
        }
    }
    printf("Not found\n");
}
