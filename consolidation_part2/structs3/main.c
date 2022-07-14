#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct scores
    {
        char name[32];
        int score;
    };

    struct scores player[4];
    int x;

    for(x=0; x<4; x++)
    {
        printf("Enter the name of the player here: ");
        scanf("%s", player[x].name);
        printf("Enter the scores of the players here: ");
        scanf("%d", &player[x].score);
    }

    puts("player info is as ");

    for (int i=0; i<4; i++)
    {
        printf("The player names are %s\n", player[i].name);
        printf("The player scores are %d\n", player[i].score);

    }
}
