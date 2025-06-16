#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    int D[1000], L[1000], R[1000],answer[1000];
    for (int i = 0; i < t; i++)
    {
        {
            scanf("%d", &D[i]);
        }
        {
            scanf("%d", &L[i]);
        }
        {
            scanf("%d", &R[i]);
        }
    }

    for (int k = 0; k < t; k++)
    {
        if (D[k] >= L[k] && D[k] <= R[k])
        {
            answer[k] = 1;
        }
        else if (D[k] < L[k])
        {

           answer[k] = 2;
        }
        else
        {
            answer[k] =3;
        }
    }


    for (int L = 0; L < t; L++)
    {
        if(answer[L] == 1)
        {
            printf("Take second dose now\n");
        }
        else if (answer[L] == 2)
        {
            printf("Too Early\n");
        }
        else
        {
            printf("Too Late\n");
        }
        
    }
    

    return 0;
}