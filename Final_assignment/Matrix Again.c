#include <stdio.h>

int main() {
    int r, c;
    scanf("%d %d", &r, &c);

    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    

 
    for (int i = r-1; i < r; i++)
    {
        for(int j=0; j<c; j++)
        {
            printf("%d ",arr[i][j]);

        }
    }

    printf("\n");
 
    for (int i = 0; i < r; i++)
    {
        for(int j=c-1; j<c; j++)
        {
            printf("%d ",arr[i][j]);

        }
    }
    
    return 0;
}