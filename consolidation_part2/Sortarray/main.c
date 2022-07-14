#include <stdio.h>
#include <stdlib.h>

int main()
{
	const int size = 6;
    int bubble[] = { 95, 60, 6, 87, 50, 24 };
    int inner,outer,temp,x, storage;

	/* Display original array */
    puts("Original Array:");
    for(x=0;x<size;x++)
        printf("%d\t",bubble[x]);
    putchar('\n');

	/* Bubble sort */
    for(outer=0;outer<size;outer++)
    {
        for(inner=outer+1;inner<size;inner++)
        {
            if(bubble[outer] < bubble[inner])
            {
                storage=bubble[outer];
                temp = bubble[inner];
                bubble[outer] = temp;
                bubble[inner]=storage;
            }
        }
    }

	/* Display sorted array */
    puts("Sorted Array:");
    for(x=0;x<size;x++)
        printf("%d\t",bubble[x]);
    putchar('\n');

    return(0);
}
