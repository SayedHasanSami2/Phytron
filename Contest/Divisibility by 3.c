#include <stdio.h>
#include <string.h>

int main() {
    int n;
    char digits[1000001]; 

    scanf("%d", &n);
    scanf("%s", digits); 

    int sum = 0;

    for(int i = 0; i < n; i++) {
        sum += digits[i] - '0'; 
    }

    if(sum % 3 == 0) {
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}
