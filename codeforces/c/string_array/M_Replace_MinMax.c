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
    int max = ar[0];
    int min = ar[0];
    int max_i = 0;
    int min_i = 100000;

    for (int i = 0; i < n; i++)
    {
        if (ar[i] > max)
        {
            max = ar[i];
            max_i = i;
        }
        if (ar[i] < min)
        {
            min = ar[i];
            min_i = i;
        }
    }

    int temp = ar[max_i];
    ar[max_i] = ar[min_i];
    ar[min_i] = temp;

    for (int i = 0; i < n; i++)
    {

        printf("%d ", ar[i]);
    }

    return 0;
}