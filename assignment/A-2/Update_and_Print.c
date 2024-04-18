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
        scanf("%d", &ar[i]);
    }

    int x, v;
    scanf("%d %d", &x, &v);
    int arr[x];

    for (int i = 0; i < n; i++)
    {
        if (x == i)
        {
            ar[i] = v;
        }
    }
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d ", ar[i]);
    }

    return 0;
}