#include <stdio.h>


void  odd_even()
{
    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int count_odd=0,count_even=0;
    for (int i = 0; i < n; i++) {
        if(arr[i] % 2 == 0)
        {
            count_even++;
        }
        else
        {
            count_odd++;
        }
    }
    printf("%d %d",count_even,count_odd);


}

int main() {
    odd_even();
    

    

    return 0;
}
