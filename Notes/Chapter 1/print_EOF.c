#include <stdio.h>

int main(void)
{
    int c;

    while ((c = getchar()) != EOF) {
        if (c != '\n') {
            printf("Please enter sctrl+D if you're on Mac\n");
        }
    }

    printf("Value of EOF is: %d", c);
}

/*
Notes:
1. Line buffering on Unix: getchar() doesn't return until Enter is pressed, which lead to 
the two input, the intended value and \n (the Enter) buffered in the input, making the loop
executes twice on each input. 
2. Use statement c != '\n' to shuffle \n out. 
*/