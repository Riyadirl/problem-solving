#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int is_palindrome(char s[])
{
    for (int i = 0, j = strlen(s) - 1; i < j; i++, j--)
    {
        int pal = 0;
        if (s[i] != s[j])
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    char s[1001];
    scanf("%s", s);

    is_palindrome(s);
    if (is_palindrome(s))
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }

    return 0;
}