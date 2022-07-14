#include <stdio.h>
#include <stdlib.h>

float conversion (float a)
{
   return((a-32)/1.8);
}

int main()
{
    float tempf;
    float tempc;

    printf("Enter the temperature in degree fahrenheit: ");
    scanf("%f", &tempf);
    //common mistake to take note of --> float temp_converted = final_value;
    //float temp_converted = conversion(tempf);

    printf("final temperature in celcius is %f", conversion(tempf));
}

