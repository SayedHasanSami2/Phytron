#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int i, j, k;
    int space= 0;
    int star = 2*n-1;

    for(i=0; i<n; i++) //for printing line
    {
        for(j =0 ; j<space; j++) //for printing space
        {
            printf(" ");
        }
        for(k =0; k<star ;k++)
        {
            printf("*");
        }
        
        space++;

        star-= 2;

        printf("\n");



    }

    return 0;
}