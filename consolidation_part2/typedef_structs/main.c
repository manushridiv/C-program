#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
     typedef struct date
    {
        int month;
        int day;
        int year;
    } birthday;

    typedef struct id
    {
        char first[20];
        char last[20];
    } name;

    struct human
    {
        name personal; //nesting the name struct
        birthday dating; //nesting the date struct
    }president; //since nested, no need to rename each struct

    strcpy(president.personal.first,"George");
    strcpy(president.personal.last,"Washington");
    president.dating.month = 2;
    president.dating.day = 22;
    president.dating.year = 1732;

    printf("%s %s was born on %d/%d/%d\n",
            president.personal.first,
            president.personal.last,
            president.dating.month,
            president.dating.day,
            president.dating.year);

    return(0);
}

