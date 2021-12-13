#include <stdio.h>

int main(void)
{
    int p = 7;
    for (int i=0; i < 6; i++)
    {
        for(int j=0; j < 8; j++)
        {
            if( j == p)
            {
                printf("*");
            }
            else if ((i == 3 && j == 0) || (i == 4 && j == 1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }

        }
        p = p - 1;
        printf("\n");
    }
    return 0;
}