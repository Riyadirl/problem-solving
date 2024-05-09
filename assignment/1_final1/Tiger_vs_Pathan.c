#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);
        char s[n + 1];
        scanf("%s", s);

        int count_t = 0;
        int count_p = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'T')
            {
                count_t++;
            }
            else if (s[i] == 'P')
            {
                count_p++;
            }
        }

        if (count_t > count_p)
        {
            printf("Tiger\n");
        }
        else if (count_t == count_p)
        {
            printf("Draw\n");
        }
        else if (count_p > count_t)
        {
            printf("Pathaan\n");
        }
    }

    return 0;
}