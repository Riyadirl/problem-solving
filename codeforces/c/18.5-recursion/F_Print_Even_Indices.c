#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void fun(int a[], int n, int i)
{

    printf("%d", n);
    fun(a, n, i-1);
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

    return 0;
}