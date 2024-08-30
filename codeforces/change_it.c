#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int change(int arr[], int n)
{
    if (n > 0)
    {
        arr[n - 1] = 100;
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    change(arr, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}