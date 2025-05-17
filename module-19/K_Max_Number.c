#include <stdio.h>

long long int rec(long long int arr[], int n, int i)
{
    if (n == i)
    {
        return -10000000000LL;
    }

    long long int result = rec(arr, n, i + 1);
    if (arr[i] > result)
    {
        return arr[i];
    }
    else
    {
        return result;
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    long long int arr[n];
    int i = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }
    long long int ans = rec(arr, n, i);
    printf("%lld", ans);

    return 0;
}