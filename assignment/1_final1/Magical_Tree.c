#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n;
    scanf("%d", &n);
    int row = ((n + 1) / 2) + 5;

    // upper
    for (int i = 1; i <= row; i++)
    {
        // space
        for (int j = 1; j <= row - i; j++)
        {
            printf(" ");
        }
        //*
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    // bottom
    for (int i = 1; i <= 5; i++)
    {
        // space
        for (int j = 1; j <= 5; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= n; j++)
        {
            printf("*");
        }

        printf("\n");
    }
    return 0;
}