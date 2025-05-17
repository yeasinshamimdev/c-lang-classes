#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int star = 1;
    int lines = 5;

    for (int i = 1; i <= n; i += 2)
    {
        lines++;
    }
    int space = lines - 1;

    for (int i = 0; i < lines; i++)
    {
        for (int j = 0; j < space; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < star; j++)
        {
            printf("*");
        }
        space--;
        star += 2;
        printf("\n");
    }

    int space2 = 5;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < space2; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < n; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}