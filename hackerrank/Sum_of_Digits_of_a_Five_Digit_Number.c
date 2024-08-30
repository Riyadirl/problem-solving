#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);
    int sum = 0;
    while (x > 0)
    {
        sum += x % 10;
        x = x / 10;
    }
    printf("%d\n", sum);
    return 0;
}
