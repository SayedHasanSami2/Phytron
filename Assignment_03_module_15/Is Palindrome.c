#include <stdio.h>
#include <string.h>

int is_palindrome(char arr[1000])
{
    int length = strlen(arr);
    int i = 0;
    int j = length - 1;

    while (i <= j)
    {
        if (arr[i] != arr[j])
        {
            return 0;
        }
        i++;
        j--;
    }

    return 1;
}

int main() {
    char arr[1000];
    scanf("%s", arr);

    if (is_palindrome(arr)) {
        printf("Palindrome");
    } else {
        printf("Not Palindrome");
    }

    return 0;
}
