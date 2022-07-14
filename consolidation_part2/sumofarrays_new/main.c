#include <stdio.h>
#include <stdlib.h>

int main()
{
    int score[3];

    for(int i=0; i<3; i++)
    {
        printf("Enter your score here: ");
        scanf("%d", &score[i]);
    }

    int extraction;
    int sum=0;

    for (int i=0; i<3; i++)
    {
        while(score[i]!=0)
        {
            extraction = score[i]%10;
            sum = sum +extraction;
            score[i]= score[i]/10;

        }
    }

    printf("The sum of the digits in your scores are %d\n", sum); //this gives the sum for each int together
    //what if you want to find the sum of the sum of digits?

    int new_number = sum;
    int t;
    int new_sum = 0;
    //standard function to find the sum of digits
    while(new_number!=0)
    {
        int t = new_number%10;
        new_sum = new_sum + t;
        new_number = new_number/10;
    }

    printf("The sum of the sum of digits in your scores are %d\n", new_sum);

}
