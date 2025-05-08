#include <stdio.h>
#include <string.h>

int main()
{
    int times;
    scanf("%d", &times);
    char s[10001];

    for (int i = 0; i < times; i++)
    {
        scanf("%s", s);

        int capitail = 0;
        int small = 0;
        int digit = 0;
        int length = strlen(s);

        for (int i = 0; i < length; i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                capitail++;
            }
            else if (s[i] >= 'a' && s[i] <= 'z')
            {
                small++;
            }
            else if (s[i] >= '0' && s[i] <= '9')
            {
                digit++;
            }
        }

        printf("%d %d %d\n", capitail, small, digit);
    }

    return 0;
}
