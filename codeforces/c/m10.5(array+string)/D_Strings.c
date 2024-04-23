#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char a[11];
    gets(a);
    char b[11];
    gets(b);
    // 1
    int a_len = strlen(a);
    int b_len = strlen(b);

    //
    printf("%d %d\n", a_len, b_len);
    printf("%s%s\n", a, b);

    int temp = a[0];
    a[0] = b[0];
    b[0] = temp;

    printf("%s %s\n", a, b);
    return 0;
}