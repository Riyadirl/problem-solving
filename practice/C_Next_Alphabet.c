#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char x;
    scanf("%c", &x);
    if (x == 'z')
    {
        printf("a");
    }
    else
    {
        printf("%c", x + 1);
    }

    return 0;
}