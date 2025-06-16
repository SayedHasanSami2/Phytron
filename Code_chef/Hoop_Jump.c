#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    int friend1 = 0, friend2 = 0;
    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        int j = 1, k = n;
        while (j < k)
        {
            j++;
            // if (j >= k)
            //     break;
            k--;
        }
        printf("%d\n", j);
    }
    
}
