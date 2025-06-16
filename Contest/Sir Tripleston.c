#include <stdio.h>

int main()
{
    char str1[78];
    int count[26] = {0};

    scanf("%s", str1);

    for (int i = 0; i < 77; i++)
    {
        int index = str1[i] - 'a';
        count[index]++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (count[i] == 2)
        {
            printf("%c\n", 'a' + i);
            break;
        }
    }

    return 0;
}
