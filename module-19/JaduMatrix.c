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

    int is_jadu = 1;

    if (r != c)
    {
        is_jadu = 0;
    }
    else
    {
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (i == j || i + j == r - 1)
                {
                    if (matrix[i][j] != 1)
                    {
                        is_jadu = 0;
                        break;
                    }
                }
                else
                {
                    if (matrix[i][j] != 0)
                    {
                        is_jadu = 0;
                        break;
                    }
                }
            }
        }
    }

    printf(is_jadu ? "YES" : "NO");

    return 0;
}