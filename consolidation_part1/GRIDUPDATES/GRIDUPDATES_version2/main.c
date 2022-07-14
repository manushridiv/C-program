#include <stdio.h>
#include <stdlib.h>
#define GRID 5

void forwardgrid()
{
    for(int i=0; i<GRID; i+=1)
    {
        for(int num =0; num<=GRID; num+=1)
        {
            printf("%d:%d\t", i, num);
        }

        putchar('\n');
    }
}

void backwardgrid()
{
    for(int i=GRID; i>=0; i--)
    {
        for(int num=GRID; num>=0; num--)
        {
            printf("%d:%d\t", i, num);
        }

        putchar('\n');
    }
    }

int main()
{
    printf("Grid forward:\n");
    forwardgrid();
    printf("Grid backward:\n");
    backwardgrid();
}
