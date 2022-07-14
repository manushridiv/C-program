#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
code to find the fraction when two numbers are divided
gives improper fraction/mixed fraction/whole number depending on input
input can either be positive or negative
*/

int find_HCF(int numer, int denom) //function to find the HCF to simplify fractions
{
    int minimum = numer;
    int hcf;

    for(int i=1; i<=minimum; i++)
    {
        if(numer%i==0 && denom%i==0)
        {
            hcf = i;
        }
    }

    return hcf;
}

void whole_number(int a, int b) //function to handle cases of int number and mixed fractions
{
    int number;
    int numerator;
    int denominator;

    if(a%b == 0) //perfectly divisable, hence no remainder - whole number
    {
        printf("%d\n", a/b); //gives integer value, perfectly divisable
    }

    else //(a%b !=0) mixed fraction
    {
        number = (a/b); //the float would be converted to int value
        numerator = abs(a%b);
        denominator = abs(b);

        int divisor = find_HCF(abs(numerator), abs(denominator));

//print block to arrange the numbers accord
        putchar('\t');
        printf("%d\n", numerator/divisor); //divide to simplify the fraction
        printf("%d\t", number);
        printf("%c\n", '-');
        putchar('\t');
        printf("%d", denominator/divisor);
    }
}

void improper_fraction(int a, int b) //case where numerator is lower than denom
{
    int divisible = find_HCF(abs(a),abs(b));
    printf("%d\n", a/divisible);
    printf("%c\n", '-');
    printf("%d", b/divisible);
}

int main()
{
    int num1;
    int num2;

    printf("Enter your first number: ");
    scanf("%d", &num1);
    printf("Enter your second number: ");
    scanf("%d", &num2);

    if(num1==0||num2==0) //0 value
    {
        printf("%d\n", 0);
    }

    else if (abs(num1)>=abs(num2))//whole number and mixed fraction
    {
        if ((num1>0 && num2>0)||(num1<0 && num2<0))
        {
            whole_number(abs(num1),abs(num2)); //final result always positive
        }

        else //either nums are negative, gives a negative value
        {
            whole_number(num1,num2);
        }
    }

    else //all positive numbers and negative numbers which gives improper fraction
    {
        if ((num1>0 && num2>0) || (num1 && num2 < 0))
        {
            improper_fraction(abs(num1),abs(num2));
        }

        else //either nums are negative, gives a negative value
        {
            putchar('-');
            improper_fraction(abs(num1),abs(num2));

        }

    }

}
