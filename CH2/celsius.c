#include <stdio.h>

// Purpose: Converts a Fahrenheit temperature to Celsius.0

/* Learning: 
    - using define. Define is a preprocessing directive. When a program is compiled, 
        the preprocessor replaces each macro by the value that ir represents.
*/

#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0f / 9.0f)

int main(void)
{
    // declare variables
    float fahrenheit, celsius;

    // user input
    printf(" Enter Fahrenheit temperature: ");
    scanf("%f", &fahrenheit);

    // compute
    celsius = (fahrenheit - FREEZING_PT) * SCALE_FACTOR;

    // data out
    printf("\n Celsius equivalent: %.1f\n", celsius);

    return 0;
}