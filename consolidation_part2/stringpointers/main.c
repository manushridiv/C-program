#include <stdio.h>
#include <stdlib.h>

int main()
{

    char sample[] = "From whence cometh my help?\n";
    char *p;

    p = sample;

    while(*p)
    {
        putchar(*p);
        p++;
    }

    return(0);
}
