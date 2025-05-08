// #include <stdio.h>

// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int space = n - 1;
//     int star = 1;
//     int line_number = 1;

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= space; j++)
//         {
//             printf(" ");
//         }

//         for (int j = 1; j <= star; j++)
//         {
//             if (line_number % 2 == 0)
//             {
//                 printf("-");
//             }
//             else
//             {
//                 printf("#");
//             }
//         }
//         space--;
//         star += 2;
//         line_number++;
//         printf("\n");
//     }

//     space = 1;
//     star = star - 4;

//     for (int i = 1; i <= n; i++)
//     {

//         for (int j = 1; j <= space; j++)
//         {
//             printf(" ");
//         }

//         for (int j = 1; j <= star; j++)
//         {

//             if (line_number % 2 == 0)
//             {
//                 printf("-");
//             }
//             else
//             {
//                 printf("#");
//             }
//         }
//         space++;
//         star -= 2;
//         line_number++;
//         printf("\n");
//     }

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int space = n - 1;
//     for (int i = n; i >= 1; i--)
//     {
//         for (int j = 1; j <= space; j++)
//         {
//             printf(" ");
//         }
//         for (int j = n; j >= i; j--)
//         {
//             printf("%d", j - space);
//         }
//         printf("\n");
//         space--;
//     }
//     return 0;
// }

// #include <stdio.h>

// int count_before_one(int a[], int n)
// {
//     int count = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] != 1)
//         {
//             count++;
//         }
//         else
//         {
//             return count;
//         }
//     }
//     return count;
// }

// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }

//     int count = count_before_one(a, n);
//     printf("%d", count);

//     return 0;
// }

// #include <stdio.h>
// #include <string.h>

// int is_palindrome(char s[])
// {
//     int palindrome = 0;
//     int len2 = strlen(s);
//     int len = len2 - 1;
//     for (int i = 0; i <= len / 2; i++)
//     {
//         if (s[i] != s[len - i])
//         {
//             return palindrome = 0;
//         }
//         else
//         {
//             palindrome = 1;
//         }
//     }
//     return palindrome;
// }

// int main()
// {
//     char s[1001];
//     scanf("%s", s);

//     int isPalindrome = is_palindrome(s);
//     if (isPalindrome)
//     {
//         printf("Palindrome");
//     }
//     else
//     {
//         printf("Not Palindrome");
//     }

//     return 0;
// }

#include <stdio.h>

void odd_even(int *arr, int n)
{
    int even = 0;
    int odd = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("%d %d", even, odd);
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];

    odd_even(arr, n);

    return 0;
}