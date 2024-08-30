#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);

    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    long long int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int tmp = a[i];
        a[i] = tmp;
    }

    return 0;
}

// https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/C
// unsolved