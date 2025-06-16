#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);

    int evencount = 0, oddcount = 0, poscount = 0, negcount = 0;

    for (int i = 0; i < a; i++)
    {
        int num;
        scanf("%d", &num);

        if (num > 0)
        {
            poscount += 1;
        }
        else if (num < 0)
        {
            negcount += 1;
        }

        if (num % 2 == 0)
        {
            evencount += 1;
        }
        else
        {
            oddcount += 1;
        }
    }

    printf("Even: %d\n", evencount);
    printf("Odd: %d\n", oddcount);
    printf("Positive: %d\n", poscount);
    printf("Negative: %d\n", negcount);

    return 0;
}
