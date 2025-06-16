#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int star=1;
    int space=n-1;
    int second_star= 2*n-1 ;
    int second_space=0;


    for(int i=0; i<n; i++)
    {
        for (int j = 0; j < space; j++)
        {
           printf(" ");
        }
        for(int k=0; k<star; k++ )
        {
            printf("*");
        }
        star+=2;
        space--;
        printf("\n");

    }

    for(int i=0; i<n; i++){
        for (int j = 0; j < second_space; j++)
        {
           printf(" ");
        }
        for(int k=0; k<second_star; k++ )
        {
            printf("*");
        }
        
        second_star-=2;
        second_space++;
        printf("\n");
    }

    
    return 0;

}