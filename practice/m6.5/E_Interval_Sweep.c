#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    if (a == 0 && b == 0)
    {
        printf("NO");
    }
    else if (a % 2 == 0 <= b && a <= b % 2 == 1)
    {
        printf("YES");
    }
    else if (a % 2 == 1 <= b && a <= b % 2 == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}