#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];
    scanf("%s %s", str1, str2);

    int cmp = strcmp(str1, str2);
    if (cmp < 0)
    {
        printf("%s\n", str1);
    }
    else
    {
        printf("%s\n", str2);
    }

    return 0;
}
