#include <bits/stdc++.h>
using namespace std;

int main()
{
    int Test_cases;
    cin >> Test_cases;
    while (Test_cases--)
    {
        int n;
        cin >> n;
        set<int> set;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            set.insert(x);
        }

        for (auto it : set)
        {
            cout << it << " ";
        }
        cout << endl;
    }
    return 0;
}
