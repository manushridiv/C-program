#include <stdio.h>

int main()
{
    char a,b,c;
    char *p;
    int i;
    int *pointer;

    a = 'A'; b = 'B'; c = 'C';

    printf("Know your ");
    p = &a;                 /* initialize */
    putchar(*p);            /*  use */
    p = &b;                 /* initialize */
    putchar(*p);            /*  use */
    p = &c;                 /* initialize */
    putchar(*p);            /*  use */
    printf("s\n");

    printf("Enter a number here: ");
    scanf("%d", &i);
    pointer = &i; //initialize the pointer
    printf("The memory address of the number is %p\n", pointer);
    printf("The value of the pointer is %d", *pointer);

    return(0);
}
