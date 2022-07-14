#include <stdio.h>
#include <stdlib.h>

//normal function to find the sum of digits

int main()
{
    /*int number;
    int extract;
    int sum = 0;

    printf("Enter a number here: ");
    scanf("%d", &number);

    while (number!=0)
    {
        extract = number%10;
        sum = sum+extract;
        number = number/10;

    }

    printf("%d\n", sum);
*/
    //function to find sum of digits in array

    int scores[3];
    int extraction;
    int summation;

    for (int m=0; m<3; m++)
    {
        printf("Enter your score values here: \n");
        scanf("%d", &scores[m]);

        while(scores[m]!=0)
        {
            extraction = scores[m]%10;
            summation = summation +extraction;
            scores[m]= scores[m]/10;

        }

        printf("%d", summation);
    }

}
