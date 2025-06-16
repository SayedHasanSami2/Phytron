#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[102];
    scanf("%s", str);

    int arr[1000];
    int i = 0;
    int len = strlen(str);

    for (int j = len - 1; j >= 0; j--)
    {
        arr[i++] = str[j] - '0';
    }

    int sum1 = 0, sum2 = 0;

    for (int j = 0; j < i; j++)
    {
        if (j % 2 == 0)
            sum1 += arr[j];
        else
            sum2 += arr[j];
    }

    if (abs(sum1 - sum2) % 11 == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}
