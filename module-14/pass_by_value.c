#include <stdio.h>

void fun(int *p)
{
    *p = 20;
}

int main()
{
    int x = 5;
    fun(&x);

    printf("%d", x);

    return 0;
}