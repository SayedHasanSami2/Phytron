#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int N, S;
        scanf("%d %d", &N, &S);

        int diffs[100001];
        int count = 0;

        for (int T1 = 0; T1 <= N; T1++)
        {
            int T2 = S - T1;
            if (T2 >= 0 && T2 <= N)
            {
                diffs[count++] = abs(T1 - T2);
            }
        }

        // Sort differences in descending order
        for (int i = 0; i < count - 1; i++)
        {
            for (int j = i + 1; j < count; j++)
            {
                if (diffs[i] < diffs[j])
                {
                    int temp = diffs[i];
                    diffs[i] = diffs[j];
                    diffs[j] = temp;
                }
            }
        }

        printf("%d\n", diffs[0]);

        
    }
return 0;
}
