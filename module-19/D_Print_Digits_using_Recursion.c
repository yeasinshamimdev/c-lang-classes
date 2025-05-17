#include <stdio.h>

void space_print(int n)
{
    if (n == 0)
    {
        return;
    }
    int last = n % 10;
    space_print(n / 10);
    printf("%d ", last);
}

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        if (n == 0)
        {
            printf("0");
        }
        space_print(n);
        printf("\n");
    }

    return 0;
}