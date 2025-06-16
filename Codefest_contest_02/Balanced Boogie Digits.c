#include <stdio.h>

int main()
{
    int l, r;
    scanf("%d %d", &l, &r);

    int found = 0;

    for (int i = l; i <= r; i++)
    {
        int temp = i;
        int count_even = 0, count_odd = 0;

        while (temp > 0)
        {
            int remainder = temp % 10;
            if (remainder % 2 == 0)
            {
                count_even++;
            }
            else
            {
                count_odd++;
            }
            temp = temp / 10;
        }

        if (count_even == count_odd)
        {
            printf("%d\n", i);
            found = 1;
        }
    }

    if (!found)
    {
        printf("-1\n");
    }

    return 0;
}
