#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int rslt[1000];

    for (int i = 0; i < n; i++)
    {
        int X, Y, Z;
        scanf("%d %d %d", &X, &Y, &Z);

        int days = (Z * X) / (X + Y);
        rslt[i] = Z - days;
    }

   
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", rslt[i]);
    }

    return 0;
}
