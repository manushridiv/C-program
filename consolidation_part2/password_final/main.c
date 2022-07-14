#include <stdio.h>
#include <stdlib.h>

int matching(int matches)
    {
         if(matches == 0)
         {
             printf("You have entered the correct password!\n");
             return 4;
         }



    }

int main()
{
    char password[]= "tacobell";
    char input[15];
    int match;
    int count = 0;

    printf("Enter your password here: ");
    scanf("%s", input);

    match = strcmp(password, input);
    matching(match);

    while(match != 0)
    {

        while (count<3)
        {
            if (match != 0){
            printf("You have entered the wrong password, try again: ");
            scanf("%s", input);
            count++;
            match = strcmp(password, input);
            matching(match);
              //exits the while loop once the password has matched where match takes 0 value
        }
         count = matching(match);
        }

        printf("You have attempted to log in %d times. ", count); //total number of scans will be returned
        printf("You have run out of tries, please try again later. \n");
        break;

    }

}


