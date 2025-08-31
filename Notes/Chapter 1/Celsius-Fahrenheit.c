#include <stdio.h>

/* print Celsius-Fahrenheit table for celsius = 0, 20, ..., 300 */
int main()
{
    float celsius, fahr;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;
    
    printf("%s\t%s\n", "celsius", "fahr");

    celsius = lower;
    while (celsius <= upper) {
        fahr = (9 * celsius) / 5 + 32;
        printf("%.1f\t%.1f\n", celsius, fahr);
        celsius += step;
    }
}