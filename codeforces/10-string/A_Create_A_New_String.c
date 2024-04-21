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

    int count = 0;
    for (int i = 0; i < a[i] != 0; i++)
    {
        count++;
    }
    int count1 = 0;
    for (int i = 0; i < b[i] != 0; i++)
    {
        count1++;
    }
    printf("%d %d\n", count, count1);
    printf("%s %s", a, b);

    return 0;
}