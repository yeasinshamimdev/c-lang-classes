#include <stdio.h>

void fun(int *ar, int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", ar[i]);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];

    fun(arr, n);

    return 0;
}