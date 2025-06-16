#include <stdio.h>
#include<string.h>

int main() {
    char str1[1000001];
    scanf("%s", str1);
    int length = strlen(str1);
    int sum = 0;
    for(int i=0; i<length; i++)
    {

        sum += str1[i]-'0';

    }
    printf("%d",sum);
    return 0;
}