#include <stdio.h>
#include<string.h>

int Max(int arr[],int n)
{
    int max  = arr[0];
    for (int i = 0; i <n; i++)
    {
        if( max < arr[i])
        {
            max = arr[i];
        }
    }
    
    return max;

}

int Min(int arr[],int n)
{
    int min  = arr[0];
    for (int i = 0; i <n; i++)
    {
        if( min > arr[i])
        {
            min = arr[i];
        }
    }
    
    return min;

}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int min = Min(arr,n);
    int max = Max(arr,n);

    printf("%d %d",min,max);


    return 0;
}