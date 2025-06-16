#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    long long m[t];
    int a[t], b[t], c[t];
    long long reminder[t];

    for (int i = 0; i < t; i++)
    {
        scanf("%lld %d %d %d", &m[i], &a[i], &b[i], &c[i]);
    }

    for (int i = 0; i < t; i++)
    {
        long long multiplication = 1LL * a[i] * b[i] * c[i];

        if (multiplication == 0)
        {
            if (m[i] == 0)
            {
                reminder[i] = 0;
            }
            else
            {
                reminder[i] = -1;
            }
        }
        else if (m[i] % multiplication == 0)
        {
            reminder[i] = m[i] / multiplication;
        }
        else
        {
            reminder[i] = -1;
        }
    }

    for (int i = 0; i < t; i++)
    {
        printf("%lld\n", reminder[i]);
    }

    return 0;
}
