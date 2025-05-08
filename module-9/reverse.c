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

    int first, last;
    for (int i = 0; i < n / 2; i++)
    {
        first = arr[i];
        arr[i] = arr[(n - 1) - i];
        arr[(n - 1) - i] = first;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}