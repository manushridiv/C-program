#include <stdio.h>
#include <stdlib.h>


void forwardgrid(int num1, int num2)
{
    for(int i = num1; i<=num2; i++)
    {
        for(int m=num1; m<=num2; m++)
        {
            printf("%d:%d\t", i,m);
        }

        putchar('\n');
    }
}

void backwardgrid(int num1a, int num2a)
{
    for (int m=num1a; m>=num2a; m-=1)
    {
        for(int x=num1a; x>=num2a; x-=1)
        {
            printf("%d", m);
            printf(":%d", x); //can make the first and second line condense into 1
            printf("%c", '\t');
        }

        putchar('\n');
    }

}

void singlegrid(num1c, num2c)
{
    printf("%d:%d", num1c, num2c);
}

int main()
{
    int firstnumber; //first number input
    int secondnumber; //second num
    //getting the input from the user to create a grid of numbers
    printf("Enter your first number here: ");
    scanf("%d", &firstnumber);
    printf("Enter your second number here: ");
    scanf("%d", &secondnumber);

    //check to see which number is larger, grid will be printed accordingly

    while((firstnumber>100) || (secondnumber>100)) //grid will not be printed if more than 100
    {
        printf("You have entered a number out of range, try again."); //prompt user to try again and again
        printf("Enter your first number here: "); //until the number range is 100 or less
        scanf("%d", &firstnumber);
        printf("Enter your second number here: ");
        scanf("%d", &secondnumber);
    }
    //while loop terminates once number is 100 or less
    //can be further improved by stopping the user at a single try
    //can create a bool function for checking if num is out of range and called

    if(firstnumber == secondnumber)
    {
        printf("You have a single grid.\n");
        singlegrid(firstnumber, secondnumber);
    }

    else if(firstnumber>secondnumber)
    {
        printf("You have a backward grid.\n");
        backwardgrid(firstnumber, secondnumber);
    }

    else
    {
        printf("You have a forward grid.\n");
        forwardgrid(firstnumber, secondnumber);
    }
}
