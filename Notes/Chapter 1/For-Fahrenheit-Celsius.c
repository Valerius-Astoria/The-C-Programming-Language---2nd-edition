#include <stdio.h>

#define LOWER 0 // lower limit of the table
#define UPPER 300 // upper limit of the table
#define STEP 20 // step size

/* print Fahrenheit-Celsius table for fahr = 0, 20, ..., 300 */
int main()
{
    float fahr, celsius;

    printf("%s\t%s\t\n", "fahr", "celsius");

    for (fahr = LOWER; fahr <= UPPER; fahr += STEP) {
        celsius = 5 * (fahr - 32) / 9;
        printf("%.1f\t%.1f\n", fahr, celsius);
    }

    // Reverse order version
    // for (fahr = upper; fahr >= lower; fahr -= step) {
    //     celsius = 5 * (fahr - 32) / 9;
    //     printf("%.1f\t%.1f\n", fahr, celsius);
    // }

    return 0;
}

/*
Notes:
1. The for statement has 3 part in its declaration, the lower bound assignment, 
the upper bound test, and the step. 
2. The lower bound assignment happens at the beginning of the first loop, the upper
bound test happens at each entry of the loop, and the step happens at each exit of the loop.
3. Define a symbolic beforehand using #define to avoid magic numbers. 
*/