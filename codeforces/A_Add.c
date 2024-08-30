#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int sum(int x, int y)
{
    int sum = x + y;
    return sum;
}

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%d", sum(x, y));
}