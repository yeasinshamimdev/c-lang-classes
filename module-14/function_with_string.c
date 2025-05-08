#include <stdio.h>

void fun(char s[])
{
    char h[10];
    scanf("%s", &h);
    s = h;
}

int main()
{
    char s[10];
    scanf("%s", &s);
    fun(s);
    printf("%s", s);
    return 0;
}