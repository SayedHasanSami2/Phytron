#include <stdio.h>
#include <string.h>


int main() {
    int n;
    scanf("%d", &n);
    char str[n];
    scanf("%s", str);      // "11010121"

    int length = strlen(str);
    int sum = 0;

    for (int i = 0; i < length; i++)
    {
        sum+= str[i] - '0';
    }

    if (sum % 2 == 0)
    {
        printf("The sum is %d and It's even",sum);
    }
    else
    {
        printf("The sume is %d and it's odd",sum);
    }
    
    

    return 0;
}