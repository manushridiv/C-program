#include <stdio.h>
#include <stdlib.h>

int main()
{
    char answer;
    printf("Do you want to continue(Y/N)? ");
    scanf("%c", &answer);

    if (answer == 'Y' || answer == 'y')
    {
        printf("congrats! you can continue the game!");
    }

    else if (answer == 'N' || answer == 'n')
    {
        printf("we shall stop the game now.");
    }

    else
    {
        printf("sorry, you have entered an invalid answer.");
    }
}
