#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    if (a < 0)
    {
        printf("negative");
    }
    else if (a == 0)
    {
        printf("zero");
    }
    else
    {
        printf("positive");
    }

    return 0;
}