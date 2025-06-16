#include <stdio.h>


int add(int x,int y)
{
    int sum = 0;
    sum = x + y ;
    return sum;
}

int main() {
    int a,b;
    scanf("%d %d", &a,&b);
    int answer = add(a,b);
    printf("%d",answer);


    return 0;
}