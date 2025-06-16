#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int i = 0, j = n - 1, ispalindrome = true;

    while (i < j)
    {
        if (arr[i] != arr[j])
        {
            ispalindrome = false;
            break;
        }
            i++;
            j--;
        
    }
    if (ispalindrome == true)
    {
        printf("YES");
    }

    else
    {
        printf("NO");
    }

    return 0;
}