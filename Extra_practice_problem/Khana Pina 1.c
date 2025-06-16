#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);
    if(x>=1000)
    {
        printf("Three Kacchi");
    }
    else if (x>=500)
    {
        printf("One Large Pizza");
    }
    else if (x<500 && x>=250)
    {
        printf("Three Small Burger");
    }
    else if (x>=100)
    {
        printf("Three Fuchka");
    }
    else if (x<100)
    {
        printf("Nothing");
    }
    


    return 0;
}