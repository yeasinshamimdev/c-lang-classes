#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    int c;
    c = a;
    a = b;
    b = c;
    printf("a: %d b:%d", a, b);

    return 0;
}