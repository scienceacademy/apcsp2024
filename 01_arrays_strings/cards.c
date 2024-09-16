#include <cs50.h>
#include <stdio.h>
card deal_card();

typedef struct
{
    int rank;
    int suit;
} card;

card deck[52];
int top_card = 0;

string suits[] = {"♥", "♣", "♠", "♦"};
string ranks[] = {"", "A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"};

int main(void)
{
    int n = 0;
    // initialize deck
    for (int s = 0; s < 4; s++)
    {
        for (int r = 1; r < 14; r++)
        {
            deck[n].suit = s;
            deck[n].rank = r;
            n++;
        }
    }

    card c = deal_card();
    printf("%s%s\n", ranks[c.rank], suits[c.suit]);
}

card deal_card()
{
    card c = deck[top_card];
    top_card++;
    return c;
}
