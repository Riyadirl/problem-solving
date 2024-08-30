#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char a[1001];
    gets(a);

    int is_palindrome = 1;
    int l = strlen(a);
    int i, j = l - 1;

    while (i < j)
    {
        if (a[i] != a[j])
        {
            is_palindrome = 0;
            break;
        }
        i++;
        j--;
    }

    if (is_palindrome)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    
    return 0;
}