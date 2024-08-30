#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int s = n - 1, k = 1;
    for (int i = 1; i <= n; i++)
    {
        // space
        for (int j = 1; j <= s; j++)
        {
            printf(" ");
        }
        //*
        for (int j = 1; j <= k; j++)
        {
            printf("*");
        }
        printf("\n");
        s--;
        k += 2;
    }

    return 0;
}