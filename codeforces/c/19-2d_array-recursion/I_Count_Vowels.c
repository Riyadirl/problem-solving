#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int fun(char s[], int i)
{
    if (s[i] == '\0')
        return 0;
    int count = 0;
    if (s[i] == 'a' || s[i] == 'A' ||
        s[i] == 'i' || s[i] == 'I' ||
        s[i] == 'o' || s[i] == 'O' ||
        s[i] == 'e' || s[i] == 'E' ||
        s[i] == 'u' || s[i] == 'U')
    {
        count++;
    }

    return count + fun(s, i + 1);
}

int main()
{
    char s[201];
    fgets(s, 201, stdin);
    int cnt = fun(s, 0);
    printf("%d", cnt);
    return 0;
}