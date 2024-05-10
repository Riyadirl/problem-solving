#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int row, col;
    scanf("%d %d", &row, &col);
    int a[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int x = row - 1;
    for (int i = 0; i < col; i++)
    {
        printf("%d ", a[x][i]);
    }

    printf("\n");

    int y = col - 1;
    for (int i = 0; i < row; i++)
    {
        printf("%d ", a[i][y]);
    }

    return 0;
}