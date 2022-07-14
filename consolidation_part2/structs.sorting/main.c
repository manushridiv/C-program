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
        printf("Enter the name of player %d here: ", x+1);
        scanf("%s", player[x].name);
        printf("Enter the score of player %d here: ", x+1);
        scanf("%d", &player[x].score);
    }

    puts("player info is as ");

    for (int i=0; i<4; i++)
        for (int m=0; m<4; m++)
            if(player[i].score > player[m].score)
            {
                int storage = player[i].score;
                player[i].score = player[m].score;
                player[m].score = storage;
            }

    puts("Player Info");
    printf("#\tName\tScore\n");

    for(x=0;x<4;x++)
    {
        printf("%d\t%s\t%5d\n",
           x+1,player[x].name,player[x].score);
    }
    return(0);
}
