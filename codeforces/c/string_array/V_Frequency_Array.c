#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int x[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x[i]);
    }

    int cnt[m + 1];
    for (int i = 0; i < m + 1; i++)
    {
        cnt[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        int val = x[i];
        cnt[val]++;
    }

    for (int i = 1; i <= m; i++)
    {
        printf("%d\n", cnt[i]);
    }

    return 0;
}