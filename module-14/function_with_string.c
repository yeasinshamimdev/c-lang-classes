#include <stdio.h>

void fun(char *s)
{
    scanf("%s", s);
}

int main()
{
    char s[10];
    scanf("%s", &s);
    fun(s);
    printf("%s", s);
    return 0;
}