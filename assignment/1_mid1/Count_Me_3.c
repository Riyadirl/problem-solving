#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    while (n--)
    {
        char s[10001];
        scanf("%s", s);

        int cap = 0, smol = 0, dig = 0;

        for (int i = 0; s[i] != '\0'; i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                cap++;
            }
            else if (s[i] >= 'a' && s[i] <= 'z')
            {
                smol++;
            }
            else if (s[i] >= '0' && s[i] <= '9')
            {
                dig++;
            }
        }
        printf("%d %d %d\n", cap, smol, dig);
    }

    return 0;
}