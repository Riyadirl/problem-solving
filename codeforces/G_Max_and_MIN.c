#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int min_max(int *min, int *max)
{
    int n;
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    *min = 100000;
    *max = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] > *max)
        {
            *max = a[i];
        }
        if (a[i] < *min)
        {
            *min = a[i];
        }
    }
}

int main()
{
    int min, max;
    min_max(&min, &max);
    printf("%d %d", min, max);
    return 0;
}
/////