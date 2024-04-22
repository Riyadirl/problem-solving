#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char x;
    scanf("%c", &x);
    if (x >= '0' && x <= '9')
    {
        printf("IS DIGIT\n");
    }
    else if (x >= 'a' && x <= 'z')
        printf("ALPHA\nIS SMALL");

    else if (x >= 'A' && x <= 'Z')
    {
        printf("ALPHA\nIS CAPITAL");
    }

    return 0;
}