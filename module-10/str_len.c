#include <stdio.h>
#include <string.h>

int main()
{
    char s[30];
    fgets(s, 30, stdin);

    int size = strlen(s);
    printf("%d", size);

    return 0;
}