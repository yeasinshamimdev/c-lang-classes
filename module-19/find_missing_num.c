#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        long long int m;
        int a, b, c;
        scanf("%lld %d %d %d", &m, &a, &b, &c);
        long long int three_multi = a * b * c;
        if (m == 0)
        {
            printf("0");
        }
        else if (three_multi == 0)
        {
            printf("-1");
        }
        else if (three_multi > m)
        {
            printf("-1");
        }
        else if (m % three_multi == 0)
        {
            printf("%lld", m / three_multi);
        }
        else
        {
            printf("-1");
        }
        printf("\n");
    }

    return 0;
}