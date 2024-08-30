#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n - 1; i++)
    {
        scanf("%d", &a[i]);
    }
    int frequency = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[0] == a[i])
        {
            frequency++;
        }
    }

    if (frequency % 2 == 1)
    {
        printf("Lucky\n");
    }
    else
    {
        printf("Unlucky");
    }

    return 0;
}

//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/J
//unsoved