#include <stdio.h>
#define MAX 100
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // for minimum element selection sort

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    int count = 1;

    for (int i = 0; i < 1; i++)
    {

        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count += 1;
            }
        }
    }

    if (count % 2 == 1)
    {
        printf("Lucky");
    }

    else
    {
        printf("Unlucky");
    }

    return 0;
}