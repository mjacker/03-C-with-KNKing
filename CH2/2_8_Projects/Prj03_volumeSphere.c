#include <stdio.h>

/* Problem:
    Write a program that computes the volume of a sphere.*/

int main(void)
{
    // Printing user interface.
    printf("This program compute the volume of a sphere, with radio entered by the user.");
    printf("\n\nPlease, enter radio: ");

    // variable declaration, variable asignation by user.
    double r;
    scanf("%lf", &r);

    // compute formula
    double ans;
    ans = 4.0f / 3.0f * 3.14 * r * r * r;

    // print answer
    printf("\nThe volume of sphere with radio %0.2lf is: %0.3lf", r, ans);

    return 0;
}