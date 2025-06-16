#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    int pos;
    scanf("%d", &pos);
    for(int i=0; i<n; i++)
    {
        if(pos == i+1)
        {
            if(arr[i]==0)
            {
                arr[i]=1;
            }
            else if (arr[i]==1)
            {
                arr[i]=0;
            }
            
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ", arr[i]);
    }


    return 0;
}