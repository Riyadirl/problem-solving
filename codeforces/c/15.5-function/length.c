#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int my_len(char x[])
{

    int count = 0;
    for (int i = 0; x[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}
int main()
{
    char x[1000];
    scanf("%s", x);
    int len = my_len(x);
    printf("%d", len);
    return 0;
}