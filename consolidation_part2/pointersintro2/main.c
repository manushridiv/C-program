#include <stdio.h>

//program to write the age and weight
//by only setting values to the pointers

int main()
{
   int age;
   int *a;
   float weight;
   float *w;

   a = &age;
   w = &weight;

   *a = 15;
   *w = 48.5;

   printf("The age of the user is %d\n", age);
   printf("The weight of the user is %2.1f\n", weight);
}
