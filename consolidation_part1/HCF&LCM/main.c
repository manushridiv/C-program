#include <stdio.h>
#include <stdlib.h>




int main()
{
    int firstnum;
    int secondnum;
    int max;
    int min;

    printf("Enter first number");
    scanf("%d", &max);
    printf("Enter the second number");
    scanf("%d", &min);

    for(int i=max; i%min==0; i+=max) //partially correct to have infinite loop, but would always be false for decimal numbers and loop would not execute
    {
        printf("LCM is %d", i);
        break;
    }


}
