#include <stdio.h>

void m(int *p)
{
    int i = 0;
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", p[i]);
    }
}

int main()
{
    int arr[5] = {10, 20, 30};
    m(arr);

    return 0;
}