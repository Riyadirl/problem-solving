#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void fun(int n)
{
    if (n > 0)
    {
        printf("I love Recursion\n");
        fun(n - 1);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    fun(n);
    return 0;
}