#include <stdio.h>

int main() {
    int n,a,b;
    scanf("%d %d %d", &n,&a,&b);

    int sum = sum >= a && sum <=b;
    int total=0;

    for(int i=a; i<=n; i++)
    {
        if(i<=sum && i>=sum)
        {
            total += i;
        }
    }
    printf("%d",total);
    
    return 0;
}