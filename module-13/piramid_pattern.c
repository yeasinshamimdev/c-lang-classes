#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int start = 1;

    for (int i = 1; i <= n; i++)
    {
        for (int k = n; k >= i; k--)
        {
            printf(" ");
        }
        for (int j = 1; j <= start; j++)
        {
            printf("*");
        }
        printf("\n");
        start += 2;
    }

    return 0;
}