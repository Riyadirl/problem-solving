#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        long long int m;
        int a, b, c;
        scanf("%lld %d %d %d", &m, &a, &b, &c);

        long long int d = m / (a * b * c);

        if (m == a * b * c * d)
        {
            printf("%lld\n", d);
        }
        else
        {
            printf("-1\n");
        }
    }
    return 0;
}