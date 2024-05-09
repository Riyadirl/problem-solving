#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d ", &ar[i]);
    }
    int sumPos = 0, sumNeg = 0;

    // add
    for (int i = 0; i < n; i++)
    {
        if (ar[i] > 0)
        {
            sumPos += ar[i];
        }
    }

    // sub
    for (int i = 0; i < n; i++)
    {
        if (ar[i] < 0)
        {
            sumNeg += ar[i];
        }
    }

    printf("%d %d", sumPos, sumNeg);

    return 0;
}