#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tictactoe[3][3];
    int x, y;

    for(x=0;x<3;x++)
    {
        for(y=0;y<3;y++)
            {
               printf("Enter your tic tac toe entry here[%d][%d]: ", x,y);
               scanf("%d", &tictactoe[x][y]);
            }
    }

    //display the array the user entered
    for(x=0;x<3;x++)
    {
        for(y=0;y<3;y++)

            printf("%d",tictactoe[x][y]);
            putchar('\n');

    }

    //determine whether the user lost or won the game

    //accounting for the rows
  if ((tictactoe[0][0] == 0 && tictactoe[0][1] && 0 && tictactoe[0][2] == 0)||
    (tictactoe[1][0] == 0 && tictactoe[1][1] ==0 && tictactoe[1][2] == 0))
  {
      printf("you lose the game");
  }

  else
  {
      printf("does not enter loop");
  }

  //do the same for every case of rows and columns and you have the ans alr
}
