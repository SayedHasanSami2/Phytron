#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d", &t);

    int n[100]; 
    int arr[1000][1000]; 
    int arrB[1000][1000]; 
    int arrC[1000][1000]; 

    
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &n[i]);
        for (int j = 0; j < n[i]; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

   
    for (int i = 0; i < t; i++)
    {
        
        for (int j = 0; j < n[i]; j++)
        {
            arrB[i][j] = arr[i][j];
        }

       
        for (int j = 0; j < n[i] - 1; j++)
        {
            for (int k = j + 1; k < n[i]; k++)
            {
                if (arrB[i][j] > arrB[i][k])
                {
                    int temp = arrB[i][j];
                    arrB[i][j] = arrB[i][k];
                    arrB[i][k] = temp;
                }
            }
        }

     
        for (int j = 0; j < n[i]; j++)
        {
            arrC[i][j] = abs(arr[i][j] - arrB[i][j]);
        }
    }

    
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < n[i]; j++)
        {
            printf("%d ", arrC[i][j]);
        }
        printf("\n");
    }

    return 0;
}
