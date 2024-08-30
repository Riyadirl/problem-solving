#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    while (n--)
    {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        if (a + b == c)
        {
            printf("YES\n");
        }
        else if (a + c == b)
        {
            printf("YES\n");
        }
        else if (c + b == a)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}