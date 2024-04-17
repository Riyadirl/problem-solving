#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    float x, p;
    scanf("%f %f", &x, &p);
    float t = p / (1 - (x / 100));
    printf("%.2f", t);
    return 0;
}