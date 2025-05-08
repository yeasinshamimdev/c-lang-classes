#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int space = n - 1;
    int star = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= star; j++)
        {
            printf("*");
        }
        star += 2;
        space--;
        printf("\n");
    }
    int space2 = 1;
    int star2 = (n * 2) - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = space2; j > 1; j--)
        {
            printf(" ");
        }
        for (int j = star2; j >= 1; j--)
        {
            printf("*");
        }

        star2 -= 2;
        space2++;
        printf("\n");
    }

    return 0;
}