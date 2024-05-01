#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int my_abs(int x)
{
    if (x < 0)
    {
        printf("%d", -1 * x);
    }
    else
    {
        printf("%d", x);
    }
}
int main()
{
    int x;
    scanf("%d", &x);
    my_abs(x);
    return 0;
}