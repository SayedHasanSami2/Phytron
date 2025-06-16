#include <stdio.h>

void numbers(int n) {
    if(n == 0) {
        return;
    }
    int last = n % 10;
    numbers(n / 10);
    printf("%d ", last);
}

int main() {
    int t;
    scanf("%d", &t);
    for(int i = 0; i < t; i++) {
        int n;
        scanf("%d", &n);
        if(n == 0) {
            printf("0\n");
        } else {
            numbers(n);
            printf("\n");
        }
    }
    return 0;
}
