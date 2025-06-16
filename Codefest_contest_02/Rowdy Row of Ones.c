#include <stdio.h>

int main() {
    int r,c;
    scanf("%d %d", &r,&c);
    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
       for(int j =0; j<c;j++)
       {
        scanf("%d",&arr[i][j]);
       }
    }
    int count = 0;
    int sum[r];

     for (int i = 0; i < r; i++)
    {
       for(int j =0; j<c;j++)
       {
        if (arr[i][j] == 1)
        {
            count++;
        }
       }
       sum[i] = count;
       count = 0; 
    }

    int max = sum[0];
    for(int k =1; k<r; k++)
    {
        if(sum[k]> max )
        {
            max = sum[k];
        }
    }
    for (int i = 0; i < r; i++)
    {
        if(sum[i] == max){
         printf("%d",i);
         break;
        }
    }
    
    

    
    return 0;
}