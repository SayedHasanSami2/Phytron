#include <stdio.h>
#include <stdbool.h>
int main()
{
    int r, c;
    scanf("%d %d", &r, &c);

    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int flag = true;

    if (r == c)
    {
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (i == j || i + j == r - 1)
                {
                    if (arr[i][j] != 1)
                    {
                        flag = false;
                    }
                }
                else

                {
                    if (arr[i][j] != 0)
                    {
                        flag = false;
                    }
                }
            }
        }
        if (flag == 1)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    }
    else
    {
        printf("NO");
    }
    return 0;
}
