#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int space = n - 1;

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < space; j++) {
            printf(" ");
        }

        for (int k = i; k >= 1; k--) {
            printf("%d", k);
        }

        space--;
        printf("\n");
    }

    return 0;
}
