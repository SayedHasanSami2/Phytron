#include <stdio.h>

int main()
{
    int initial, given, bought;

    scanf("%d", &initial);
    if (initial >= 0 && initial <= 100)
    {
        scanf("%d", &given);
        if (given >= 0 && given <= initial)
        {
            scanf("%d", &bought);
            if (bought >= 0 && bought <= 100)
            {
                int sum = 0;
                int after_giving = 0;

                after_giving = initial - given;
                sum = after_giving + bought;
                printf("%d", sum);
            }
        }
    }

    return 0;
}
