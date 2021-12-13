#include <stdio.h>

//prototype.
double spow(double d, int j);

int main()
{
    double x;
    printf("This program compute 3x^5 + 2x^4 -5x^3 -x^2 + 7x -6.\n Enter valur for x: " );
    scanf("%lf", &x);
    printf("The final value of this polynomial is: %lf", 3 * spow(x, 5) + 2 * spow(x, 4) - 5 * spow(x, 3) - spow(x, 2) + 7 * x -6);
    return 0;
}

double spow(double d, int j)
{
    int i, ans = 1;
    for (i = 0 ; i < j; i++)
    {
        ans = ans * d;
    }
    return ans;
}