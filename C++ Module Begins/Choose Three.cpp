#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    string rslt[t];

    for (int test = 0; test < t; test++)
    {
        int n, s;
        cin >> n >> s;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        bool sum = false;
        for (int i = 0; i < n && !sum; i++)
        {
            for (int j = i + 1; j < n && !sum; j++)
            {
                for (int k = j + 1; k < n; k++)
                {
                    if (arr[i] + arr[j] + arr[k] == s)
                    {
                        sum = true;
                        break;
                    }
                }
            }
        }

        if (sum)
            rslt[test] = "YES";
        else
            rslt[test] = "NO";
    }

    for (int i = 0; i < t; i++)
    {
        cout << rslt[i] << endl;
    }

    return 0;
}
