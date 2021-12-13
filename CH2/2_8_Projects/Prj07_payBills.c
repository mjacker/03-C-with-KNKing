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

    // while you have money
    while (d > 0)
    {    
        if (d >= 20)
        {
            while (d - 20 >= 0)
            {
                n20 += 1;
                d = d - 20;
                //printf("\n d-20: %d", d);
            }
        }
        else if(d >= 10)
        {
            while (d - 10 >= 0)
            {
                n10 += 1;
                d = d - 10;
                //printf("\n d-10: %d", d);
            }
        }
        else if( d >= 5)
        {
            while (d - 5 >= 0)
            {
                n5 += 1;
                d = d - 5;
                //printf("\n d-5: %d", d);
            }
        }
        else if( d >= 1)
        {
            while (d - 1 >= 0)
            {
                n1 += 1;
                d = d - 1;
                //printf("\n d-1: %d", d);
            }
        }
    }
    printf("\n$20 bills: %d", n20);
    printf("\n$10 bills: %d", n10);
    printf("\n$5 bills: %d", n5);
    printf("\n$1 bills: %d", n1);

    return 0;
}