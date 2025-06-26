#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;

    vector<string> results;

    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        bool flag = true;

        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                flag = false;
                break;
            }
        }

        if (flag)
        {
            results.push_back("YES");
        }
        else
        {
            results.push_back("NO");
        }
    }


    for (const string &print : results)
    {
        cout << print << endl;
    }

    return 0;
}
