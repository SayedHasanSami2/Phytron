#include <stdio.h>
#include <string.h>

int main() {
    char str1[101];
    scanf("%s", str1);

    int length = strlen(str1);

    
    int is_all_lower = 1;
    for(int k = 0; k < length; k++) {
        if(str1[k] < 'a' || str1[k] > 'z') {
            is_all_lower = 0;
            break;
        }
    }

    if(length >= 1 && length <= 100 && is_all_lower) {
        
        char temp[101];
        strcpy(temp, str1);
        char t = temp[0];
        temp[0] = temp[length - 1];
        temp[length - 1] = t;

        if(strcmp(temp, str1) == 0) {
            printf("Yes");
        } else {
            printf("No");
        }
    }

    return 0;
}
