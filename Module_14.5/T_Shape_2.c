#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int star=1;
    int space=n-1;


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
    return 0;

}