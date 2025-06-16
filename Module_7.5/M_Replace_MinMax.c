#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    
    int min = arr[0], max = arr[0], temp;

    // Find the min and max values in the array
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }

        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    // Swap max and min values
    temp = max;
    max = min;
    min = temp;

    // Update the array
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == max)
        {
            arr[i] = min;
        }
        else if (arr[i] == min)
        {
            arr[i] = max;
        }
    }

    // Print the updated array
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
