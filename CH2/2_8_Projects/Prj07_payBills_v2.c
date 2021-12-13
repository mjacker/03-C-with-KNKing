#include <stdio.h>

/* Program:
    Write a program that asks the user to enter a U.S. dollar amount and then shows how to pay
    that amount using the smallest number of $20, $10, %5 and %1 bills.*/
int main()
{
    int d;
    printf("This program shows how to pay the amount using the smallest number of $20, $10, $5 and $1.\n\n Enter U.S. dollar amount: ");
    scanf("%d", &d);

    int n20 = 0;
    int n10 = 0;
    int n5 = 0;
    int n1 = 0;

    if (d > 20)
    {
        n20 = d / 20;
        d = d - (n20 * 20);
    }
    if (d > 10)
    {
        n10 = d / 10;

        d = d - (n10 * 10);
    }
    if (d > 5)
    {
        n5 = d / 5;
        d = d - (n5 * 5);
    }
    if (d > 1)
    {
        n1 = d / 1;
        d = d - (n1 * 1);
    }


    printf("\n$20 bills: %d", n20);
    printf("\n$10 bills: %d", n10);
    printf("\n$5 bills: %d", n5);
    printf("\n$1 bills: %d", n1);

    return 0;
}