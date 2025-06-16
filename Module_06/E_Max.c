#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        int num;
        scanf("%d", &num);

        if (max < num)
        {
            max = num;
        }
    }
    printf("%d", max);

    return 0;
}
