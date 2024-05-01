#include <stdio.h>

int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    long long int x = (long long int)a * b - (long long int)c * d;
    printf("Difference = %lld", (long long int)x); 
    return 0;
}
