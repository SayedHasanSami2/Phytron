#include <stdio.h>

int main()
{
    // first array
    int n;
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // second array
    int m;
    scanf("%d", &m);
    int b[m];

    for (int i = 0; i < m; i++)
    {
        scanf("%d", &b[i]);
    }

    // 3rd array to store merged data
    int c[n + m];

    // copy a[] into c[]
    for (int i = 0; i < n; i++)
    {
        c[i] = a[i];
    }

    // copy b[] into c[] starting at index n
    for (int i = 0; i < m; i++)
    {
        c[n + i] = b[i];
    }

    // print the merged array
    for (int i = 0; i < n + m; i++)
    {
        printf("%d ", c[i]);
    }

    return 0;
}
