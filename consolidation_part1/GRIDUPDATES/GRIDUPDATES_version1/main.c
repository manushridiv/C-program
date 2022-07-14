#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Grid forwards:\n");

     for (int i=0; i<=2; i+=1)
    {
        for(int num=0; num<=2; num+=1)
        {
            printf("%d", i);
            printf(":%d", num); //can make the first and second line condense into 1
            printf("%c", '\t');
            //putchar('\n');
        }

        putchar('\n');
    }

    printf("Grid backwards:\n");

    for (int m=2; m>=0; m-=1)
    {
        for(int numm=2; numm>=0; numm-=1)
        {
            printf("%d", m);
            printf(":%d", numm); //can make the first and second line condense into 1
            printf("%c", '\t');
            //putchar('\n');
        }

        putchar('\n');
    }

}
