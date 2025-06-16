#include <stdio.h>
void ascending_order(int a, int b, int c)
{
    int arr[3] = {a, b, c};
    for (int i = 0; i < 3; i++)
    {
        for (int j = i+1; j <= 3; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for(int i = 0 ; i<3; i++)
    {
        printf("%d\n", arr[i]);
    }
    printf("\n");

    printf("%d\n%d\n%d\n", a, b, c);


}

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    ascending_order(a, b, c);
    return 0;
}