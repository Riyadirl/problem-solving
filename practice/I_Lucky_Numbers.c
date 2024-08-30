#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int x;
    scanf("%d", &x);
    int b = (x / 10) % 10;
    int a = a % 10;

    // printf("%d %d", a,b);

    if (a == 0 || b == 0)
    {
        printf("NO");
    }
    else if (a % b == 0 || b % a == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}

// not yet
