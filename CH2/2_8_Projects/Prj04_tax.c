#include <stdio.h>

// Display 5% tax 
/* Write a program that asks the user to enter a dollar-and-cents amount, 
    then displays the amount with 5% tax added:

    example:
        Enter an amount: 100.00
        With tax added: $105.00
*/

int main(void)
{
    double d;
    printf("Enter an amount: ");
    scanf("%lf", &d);

    printf("With tax added: $%0.2lf", d + (d * 5 / 100));

    return 0;
}