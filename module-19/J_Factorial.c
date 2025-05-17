#include <stdio.h>

long long int factorial(int n)
{
    if (n == 1)
    {
        return 1;
    }
    long long int temp = factorial(n - 1);
    return temp * n;
}

int main()
{
    int n;
    scanf("%d", &n);
    long long int result = factorial(n);
    printf("%lld", result);

    return 0;
}