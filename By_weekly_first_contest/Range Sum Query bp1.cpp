#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int queries = q;
    int answer[queries];
    int index = 0;

    while (q--)
    {
        int l, r;
        cin >> l >> r;

        l--;
        r--;

        if (l < 0 || r >= n || l > r)
        {
            answer[index++] = 0;
            continue;
        }

        int sum = 0;
        for (int i = l; i <= r; i++)
        {
            sum += arr[i];
        }
        answer[index++] = sum;
    }

    for (int j = 0; j < queries; j++)
    {
        cout << answer[j] << endl;
    }

    return 0;
}
