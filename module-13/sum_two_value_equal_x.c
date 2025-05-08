#include <stdio.h>
#include <string.h>

int main()
{
    int n, x;
    scanf("%d %d", &n, &x);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == x)
            {
                flag = 1;
                printf("Yes, the equation : %d %d = %d\n", arr[i], arr[j], arr[i] + arr[j]);
            }
        }
    }
    if (!flag)
    {
        printf("No");
    }

    return 0;
}