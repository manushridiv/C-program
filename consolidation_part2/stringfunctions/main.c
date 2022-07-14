#include <stdio.h>
#include <stdlib.h>

void matching(int matches)
    {
         if(matches == 0)
         {
             printf("You have entered the correct password!");
         }

    }

int main()
{
    char password[]= "tacobell";
    char input[15];
    int match;

    printf("Enter your password here: ");
    scanf("%s", input);

    match = strcmp(password, input);
    matching(match);

    while(match != 0)
    {
        printf("You have entered the wrong password, try again: ");
        scanf("%s", input);
        match = strcmp(password, input);
        matching(match);

    } //exits the while loop once the password has matched where match takes 0 value

}
