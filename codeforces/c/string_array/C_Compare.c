#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char a[21], b[21];
    scanf("%s %s", a, b);

    int x = strcmp(a, b);

    if (x < 0)
    {
        printf("%s", a);
    }
    else if (x > 0)
    {
        printf("%s", b);
    }
    else if (x == 0)
    {
        printf("%s", a);
    }
    return 0;
}