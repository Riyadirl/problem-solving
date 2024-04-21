#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char a[1000];
    gets(a);
    char b[1000];
    gets(b);

    int st = strlen(a);
    int st1 = strlen(b);

    printf("%d %d\n", st, st1);
    printf("%s %s", a, b);

    return 0;
}