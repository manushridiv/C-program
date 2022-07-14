#include <stdio.h>
#include <stdlib.h>

int main()
{
    //demonstrates wrong code - does not work to sort array
    //non nested loop
    const int size = 6;
    int bubble[] = { 95, 60, 6, 87, 50, 24 };
    int outer,temp,x, storage;

	/* Display original array */
    puts("Original Array:");
    for(x=0;x<size;x++)
        printf("%d\t",bubble[x]);
    putchar('\n');

	/* Bubble sort */
    for(outer=0;outer<size;outer++)
    {
            if(bubble[outer] > bubble[outer+1])
            {
                storage=bubble[outer];
                temp = bubble[outer+1];
                bubble[outer] = temp;
                bubble[outer+1]=storage;
            }

    }

	/* Display sorted array */
    puts("Sorted Array:");
    for(x=0;x<size;x++)
        printf("%d\t",bubble[x]);
    putchar('\n');

    return(0);
}


