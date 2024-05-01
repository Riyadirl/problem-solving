#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void sort(int *a, int *b, int *c)
{
    if (*a > *b)
    {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
    if (*b > *c)
    {
        int temp = *b;
        *b = *c;
        *c = temp;
    }
    if (*a > *b)
    {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
}

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int x = a, y = b, z = c;
    sort(&a, &b, &c);
    printf("%d\n%d\n%d\n", a, b, c);

    printf("\n");

    printf("%d\n%d\n%d\n", x, y, z);

    return 0;
}