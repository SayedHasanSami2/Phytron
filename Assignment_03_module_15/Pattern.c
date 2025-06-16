#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int star = 1, space = n - 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < space; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < star; k++)
        {
            if (i % 2 == 0)
            {
                printf("#");
            }
            else
            {
                printf("-");
            }
        }
        printf("\n");
        space--;
        star += 2;
    }

    int star2 = 2 * n - 3, space2 = 1;

    for (int i = n; i < 2 * n - 1; i++)
    {
        for (int j = 0; j < space2; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < star2; k++)
        {
            if (i % 2 == 0)
            {
                printf("#");
            }
            else
            {
                printf("-");
            }
        }
        printf("\n");
        space2++;
        star2 -= 2;
    }

    return 0;
}
