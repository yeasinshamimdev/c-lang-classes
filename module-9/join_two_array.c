#include <stdio.h>

int main()
{
    int x, y, z;
    scanf("%d %d", &x, &y);
    z = x + y;
    int arr1[x];
    int arr2[y];
    int arr3[z];

    for (int i = 0; i < x; i++)
    {
        scanf("%d", &arr1[i]);
        // arr3[i] = arr1[i];
    }

    for (int i = 0; i < y; i++)
    {
        scanf("%d", &arr2[i]);
        // arr3[i + x] = arr2[i];
    }

    for (int i = 0; i < x; i++)
    {
        arr3[i] = arr1[i];
    }
    for (int i = 0; i < y; i++)
    {
        arr3[i + x] = arr2[i];
    }

    for (int i = 0; i < z; i++)
    {
        printf("%d ", arr3[i]);
    }

    return 0;
}