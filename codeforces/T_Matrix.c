#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int sum1 = 0, sum2 = 0;

    // primary
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                sum1 = sum1 + a[i][j];
            }
        }
    }
    // secondary
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i + j == n - 1)
            {
                sum2 = sum2 + a[i][j];
            }
        }
    }

    if (sum1 - sum2 < 0)
    {
        printf("%d", -1 * (sum1 - sum2));
    }
    else
    {
        printf("%d", (sum1 - sum2));
    }

    return 0;
}

///