#include <stdio.h>
#include <string.h>

int main()
{
    char a[101], b[101];
    scanf("%s %s", &a, &b);
    int result = strcmp(a, b);
    printf("%d", result);

    // int i = 0;
    // while (true)
    // {
    //     if (a[i] == '\0' && b[i] == '\0')
    //     {
    //         printf("A and B is equal!");
    //         break;
    //     }
    //     else if (a[i] == '\0')
    //     {
    //         printf("A is Smaller");
    //         break;
    //     }
    //     else if (b[i] == '\0')
    //     {
    //         printf("B is Smaller");
    //         break;
    //     }
    //     else if (a[i] < b[i])
    //     {
    //         printf("A is Smaller");
    //         break;
    //     }
    //     else if (a[i] > b[i])
    //     {
    //         printf("B is smaller");
    //         break;
    //     }
    //     else if (a[i] == b[i])
    //     {
    //         i++;
    //     }
    // }

    return 0;
}