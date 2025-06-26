#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    long long int pre[n];

    pre[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        pre[i] = arr[i] + pre[i - 1];
    }

    int k=0, l=n-1;
    while (k <= l)
    {

        long long int temp;
        temp = pre[k];
        pre[k] = pre[l];
        pre[l] = temp;
        k++;
        l--;
    }

    for (int i = 0; i < n; i++)
    {
        cout << pre[i] << " ";
    }

    return 0;
}