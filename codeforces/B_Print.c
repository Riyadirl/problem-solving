#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int prin(int n)
{
    for (int i = 1; i <= n; i++)
    {
        printf("%d", i);
        if (i < n)
            printf(" ");
    }
}

int main()
{
    int a;
    scanf("%d", &a);
    prin(a);
    return 0;
}
