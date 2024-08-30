#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i < n; i++)
    {
        int x, y;
        scanf("%d %d\n", &x, &y);
    }
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i > x && i < y)
        {
            if (i % 2 == 1)
            {
                sum += i;
            }
        }
        printf("%d\n", sum);
    }

    return 0;
}

//no