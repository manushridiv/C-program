#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char first[40]; //always has to be passed as an array to the STRING function.
    char last[20]; //just passing a char variable would not work
    char space[2] = {'\t'};

    printf("What is your first name? ");
    scanf("%s",first);
    printf("What is your last name? ");
	scanf("%s",last);
    strcat(first, space); //connect the first
    strcat(first, last); //connect the first and last
    printf("Pleased to meet you, %s!\n",first);
    return(0);
}
