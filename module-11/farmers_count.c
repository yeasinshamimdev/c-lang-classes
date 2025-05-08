#include <stdio.h>

int main()
{
    int times;
    scanf("%d", &times);

    for (int i = 0; i < times; i++)
    {
        int m1, m2, days;
        scanf("%d %d %d", &m1, &m2, &days);
        int totalDaysFarmers = m1 * days;
        int totalFarmers = m1 + m2;
        int daysNeed = totalDaysFarmers / totalFarmers;
        int deference = days - daysNeed;
        printf("%d\n", deference);
    }

    return 0;
}