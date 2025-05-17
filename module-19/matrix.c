#include <stdio.h>

int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int matrix[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < r; i++)
    {
        if (i == r - 1)
        {
            for (int j = 0; j < c; j++)
            {
                printf("%d ", matrix[i][j]);
            }
            printf("\n");
        }
    }

    for (int i = 0; i < c; i++)
    {
        if (i == c - 1)
        {
            for (int j = 0; j < r; j++)
            {
                printf("%d ", matrix[j][i]);
            }
            printf("\n");
        }
    }

    return 0;
}