#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int fun(int a[], int n, int i)
{
    if (i == n)
        return 0;
    int sum = 0;
    sum = a[i] + fun(a, n, i + 1);

    return sum;
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

    long long int f = fun(a, n, 0);
    printf("%lld", f);
    return 0;
}