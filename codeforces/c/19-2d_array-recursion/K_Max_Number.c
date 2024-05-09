#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

int maximum(int a[], int n, int i)
{

    if (i == n)
        return INT_MIN;

    int max = maximum(a, n, i + 1);
    if (a[i] > max)
    {
        return a[i];
    }
    else
    {
        return max;
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int mx = maximum(a, n, 0);
    printf("%d", mx);
    return 0;
}