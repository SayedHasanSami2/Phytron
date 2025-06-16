#include <stdio.h>

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

   
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    int sum = 0;
    for (int j = 0; j < k; j++)
    {
        if (arr[j] > 0)
            sum += arr[j];
    }

    printf("%d", sum);
    return 0;
}
