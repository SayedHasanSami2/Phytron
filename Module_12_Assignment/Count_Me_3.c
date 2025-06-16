#include <stdio.h>
#include <string.h>

int main()
{
    int test_case;
    scanf("%d", &test_case);

    int Capital_count[1000] = {0}, small_count[1000] = {0}, digit_count[1000] = {0};

    int x = 0;

    while (x < test_case)
    {
        char str[100000];
        scanf("%s", str);

        int length = strlen(str);
        for (int i = 0; i < length; i++)
        {
            if (str[i] >= 'A' && str[i] <= 'Z')
            {
                Capital_count[x]++;
            }
            else if (str[i] >= 'a' && str[i] <= 'z')
            {
                small_count[x]++;
            }
            else if (str[i] >= '0' && str[i] <= '9')
            {
                digit_count[x]++;
            }
        }

        x++;
    }

    for (int i = 0; i < test_case; i++)
    {
        printf("%d %d %d\n", Capital_count[i], small_count[i], digit_count[i]);
    }

    return 0;
}
