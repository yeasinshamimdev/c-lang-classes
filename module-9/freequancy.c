#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int fre[9] = {0};
    for (int i = 0; i < n; i++)
    {
        fre[arr[i]]++;
    }
    for (int i = 0; i < 6; i++)
    {
        if (fre[i] > 0)
        {
            printf("%d -> %d\n", i, fre[i]);
        }
    }

    return 0;
}