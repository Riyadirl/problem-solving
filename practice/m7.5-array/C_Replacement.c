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

    for (int i = 0; i < n; i++)

    {
        if (ar[i] == 0)
        {
            printf("0 ");
        }
        else if (ar[i] > 0)
        {
            printf("1 ");
        }
        else
        {
            printf("2 ");
        }
    }

    return 0;
}