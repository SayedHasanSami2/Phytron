#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int line = n / 2 + 6, star = 1, space = line - 1;
    for (int i = 0; i < line; i++)
    {
        for (int j = 0; j < space; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < star; k++)
        {
            printf("*");
        }
        star += 2;
        space--;

        printf("\n");
    }
    // 2nd part
    int second_space = (2 * (line - 1) + 1 - n) / 2;

    for (int i = 0; i < 5; i++) 
    {
        for (int j = 0; j<second_space ;j++)
        {
            printf(" ");
        }
        for (int k = 0; k < n; k++)
        {
            printf("*");
        }
        printf("\n");
        
    }

    return 0;
}
