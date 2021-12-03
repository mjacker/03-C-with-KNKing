#include <stdio.h>

int main(void)
{
    //Exercice
    printf("Computes the dimensional weight of a box from input provided by the user.\n\n ");
    
    // Var declarations
    int height, length, width, volume, weight;

    // User input
    printf(" Enter height of box: ");
    scanf("%d", &height);
    printf(" Enter length of box: ");
    scanf("%d", &length);
    printf(" Enter width of box: ");
    scanf("%d", &width);

    // compute
    volume = height * length * width;
    weight = (volume + 165) / 166;

    // print result
    printf("Dimensions: %dx%dx%d\n", length, width, weight);
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", weight);

    return 0;
}