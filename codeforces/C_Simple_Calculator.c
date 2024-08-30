#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%d + %d = %lld\n", x, y, (long long int)x + y);
    printf("%d * %d = %lld\n", x, y, (long long int)x * y);
    printf("%d - %d = %lld\n", x, y, (long long int)x - y);
    return 0;
}