#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    char str[n];
    int i = 1;
    while (i <= n)
    {
        scanf("%c", i);
        i++;
    }
    printf("%c", str);

    return 0;
}