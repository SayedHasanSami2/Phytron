#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n; i++)
    {
        int num;
        scanf("%d",&num);
        if (num == 0) {
            printf("0\n");
            continue;
        }
        while(num){
        int temp= num%10;
        printf("%d ",temp);
        num = num/10; 
        }
        printf("\n");
        
    }
        

    return 0;

}
