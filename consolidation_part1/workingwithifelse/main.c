#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int secret = 20;
    int guess = 0; //better to initialize as compiler might give warning

    printf("can you guess the secret number: \n"); //prompts user to guess
    scanf("%d", &guess); //scans the number as the guess

    while ( secret != guess){
        printf("You lose the game, try again! \n");
        scanf("%d", &guess);
    }

    if (secret == guess)
    {
        printf("you got the correct number!");
    }

}
