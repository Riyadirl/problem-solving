#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char a[1000001];
    gets(a);

    int sum = 0;

    for (int i = 0; i < strlen(a); i++)
    {
        sum += a[i] - '0';
    }
    printf("%d", sum);
    return 0;
}