#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
     struct date
    {
        int month;
        int day;
        int year;
    };

    struct id
    {
        char first[20];
        char last[20];
    };

    struct human
    {
        struct id name; //nesting the name struct
        struct date birthday; //nesting the date struct
    }president; //since nested, no need to rename each struct

    strcpy(president.name.first,"George");
    strcpy(president.name.last,"Washington");
    president.birthday.month = 2;
    president.birthday.day = 22;
    president.birthday.year = 1732;

    printf("%s %s was born on %d/%d/%d\n",
            president.name.first,
            president.name.last,
            president.birthday.month,
            president.birthday.day,
            president.birthday.year);

    return(0);
}
