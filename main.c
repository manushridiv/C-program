#include <stdio.h>
#include <math.h>

int main(void) {
  int i;
  int m;
  int result;

  for (i= 3; i<=5; i++)
    {
      for (m=1; m<=5; m++)
        {
          result = pow(i,m);
          printf("%d\t", result);
        }
      printf("\n");
    }
}