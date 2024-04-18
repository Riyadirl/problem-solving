#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int x;
    scanf("%d", &x);
    for (int i = 1; i <= x; i++)
    {
        if (x > 0)
        {
            printf("%d ", i);
        }
    }
    for (int i = x; i <= 0; i++)
    {
        printf("%d ", i);
    }
    return 0;
}