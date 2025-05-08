#include <stdio.h>

int main()
{
    char s[20];
    fgets(s, 14, stdin);

    printf("%s", s);

    return 0;
}