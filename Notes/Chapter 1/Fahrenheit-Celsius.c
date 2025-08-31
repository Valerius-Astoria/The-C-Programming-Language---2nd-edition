#include <stdio.h>

/* print Fahrenheit-Celsius table for fahr = 0, 20, ..., 300 */
int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    printf("%s\t%s\n", "fahr", "celsius");

    fahr = lower;
    while (fahr <= upper) {
        celsius = 5 * (fahr - 32) / 9;
        printf("%.1f\t%.1f\t\n", fahr, celsius);
        fahr += step;
    }

    return 0;
}

/*
Notes:
1. Variable types shuold be declared during initialization in C.
2. Use %d in formatted print to represent an int data type. 
3. Use .1f to specify 1 character after the decimal point. 
*/